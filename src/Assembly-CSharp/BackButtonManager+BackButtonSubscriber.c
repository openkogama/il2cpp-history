
/* BackButtonManager+BackButtonSubscriber(BackButtonHandler, KogamaControls, KeyState, UnityAction)
    */

void Assembly-CSharp.dll::BackButtonManager+BackButtonSubscriber::
     BackButtonManager_BackButtonSubscriber__ctor
               (BackButtonManager_BackButtonSubscriber *this,BackButtonHandler *handler,
               KogamaControls__Enum button,KeyState__Enum state,UnityAction *callback,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).handler = handler;
  (this->fields).button = button;
  (this->fields).state = state;
  (this->fields).callback = callback;
  return;
}

