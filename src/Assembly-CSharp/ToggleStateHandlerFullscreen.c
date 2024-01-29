
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen != (this->fields)._._.toggleState) {
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__FullScreenController);
      cRam_? = '\x01';
    }
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              ((ToggleStatHandlerBase *)this,
               TypeInfo__FullScreenController->static_fields->fullScreen,(MethodInfo *)0x0);
  }
  return (this->fields)._._.toggleState;
}

