#include"AgentController.h"

AgentController::AgentController() {

}
AgentController::~AgentController() {

}
const Inputs& AgentController::getInputs() {
	return inputs;
}
void AgentController::resetInputs() {
	Inputs new_inputs = { false };
	inputs = new_inputs;
}