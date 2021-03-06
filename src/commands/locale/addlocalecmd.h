/*---------------------------------------------------------------------------*\
                          ____  _ _ __ _ __  ___ _ _
                         |_ / || | '_ \ '_ \/ -_) '_|
                         /__|\_, | .__/ .__/\___|_|
                             |__/|_|  |_|
\*---------------------------------------------------------------------------*/
#ifndef ZYPPER_COMMANDS_LOCALE_ADDLOCALECMD_INCLUDED
#define ZYPPER_COMMANDS_LOCALE_ADDLOCALECMD_INCLUDED

#include "commands/basecommand.h"
#include "utils/flags/zyppflags.h"

class AddLocaleCmd : public ZypperBaseCommand
{
public:
   AddLocaleCmd( std::vector<std::string> &&commandAliases_r );

 private:
   bool _packages;

   // ZypperBaseCommand interface
public:
   std::string help() override;
protected:
   zypp::ZyppFlags::CommandGroup cmdOptions() const override;
   void doReset() override;
   int execute(Zypper &zypper, const std::vector<std::string> &positionalArgs) override;
   virtual std::vector<BaseCommandConditionPtr> conditions() const override;
};

#endif
