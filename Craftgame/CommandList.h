#pragma once

#include "Command.h"

class CommandList : public Command {
public:
	CommandList():
		Command("list")
	{}
	virtual std::vector<Arg> getArgTypes() {
		return { };
	}
	virtual bool getAutocompletionForArgs(CommandSender* c, std::vector<CmdLineArg>& args) {
		return true;
	}
	virtual std::string getHintsForArgs(CommandSender* c, std::vector<CmdLineArg>& args) {
		return "";
	}
	virtual void execute(CommandSender* c, std::vector<CmdLineArg>& args);
};