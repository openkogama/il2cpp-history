
/* Boolean CurrentToggleState() */

bool Assembly-CSharp.dll::ToggleStateHandlerFullscreen::
     ToggleStateHandlerFullscreen_CurrentToggleState
               (ToggleStateHandlerFullscreen *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = (this->fields)._._.toggleState;
  if (TypeInfo__FullScreenController->static_fields->fullScreen != bVar1) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FullScreenController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              ((ToggleStatHandlerBase *)this,
               TypeInfo__FullScreenController->static_fields->fullScreen,(MethodInfo *)0x0);
    bVar1 = (this->fields)._._.toggleState;
  }
  return bVar1;
}

