
/* BackButtonManager+BackButtonSubscriber(BackButtonHandler, KogamaControls, KeyState, UnityAction)
    */

void Assembly-CSharp.dll::BackButtonManager+BackButtonSubscriber::
     BackButtonManager_BackButtonSubscriber__ctor
               (BackButtonManager_BackButtonSubscriber *this,BackButtonHandler *handler,
               KogamaControls__Enum button,KeyState__Enum state,UnityAction *callback,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).handler = handler;
  func_?(&this->fields,handler);
  (this->fields).button = button;
  (this->fields).state = state;
  (this->fields).callback = callback;
  func_?(&(this->fields).callback,callback);
  return;
}

