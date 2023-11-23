
/* Boolean CurrentToggleState() */

bool Assembly-CSharp.dll::ToggleStateHandlerFullscreen::
     ToggleStateHandlerFullscreen_CurrentToggleState
               (ToggleStateHandlerFullscreen *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  bVar1 = FullScreenController::FullScreenController_get_FullScreen((MethodInfo *)0x0);
  if (bVar1 != (this->fields)._._.toggleState) {
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    bVar1 = FullScreenController::FullScreenController_get_FullScreen((MethodInfo *)0x0);
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              ((ToggleStatHandlerBase *)this,bVar1,(MethodInfo *)0x0);
  }
  return (this->fields)._._.toggleState;
}

