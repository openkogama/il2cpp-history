
/* Boolean ReadyToUnRegister() */

bool Assembly-CSharp.dll::MVLocalObjectController+DismountedPlayerControlledObject::
     MVLocalObjectController_DismountedPlayerControlledObject_ReadyToUnRegister
               (MVLocalObjectController_DismountedPlayerControlledObject *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return _UNK_? < fVar1 - (this->fields).dismountTime;
}


/* Void SetTimeBeforeUnregister(Single) */

void Assembly-CSharp.dll::MVLocalObjectController+DismountedPlayerControlledObject::
     MVLocalObjectController_DismountedPlayerControlledObject_SetTimeBeforeUnregister
               (MVLocalObjectController_DismountedPlayerControlledObject *this,
               float newTimeBeforeUnregister,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).dismountTime = fVar1 - (_UNK_? - newTimeBeforeUnregister);
  return;
}


/* MVLocalObjectController+DismountedPlayerControlledObject(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController+DismountedPlayerControlledObject::
     MVLocalObjectController_DismountedPlayerControlledObject__ctor
               (MVLocalObjectController_DismountedPlayerControlledObject *this,
               ILocalObject *playerControlledObject,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).playerControlledObject = playerControlledObject;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).dismountTime = fVar1;
  return;
}

