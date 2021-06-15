
/* Void ActivateCulling(GameObject) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
               (DynamicCullingHandler *this,GameObject *cullingObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Activating_Culling,(MethodInfo *)0x0);
  radius = (this->fields).cullingRadius;
  this_00 = (CullingSubscriberDynamic *)func_?(TypeInfo__CullingSubscriberDynamic);
  CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
            (this_00,radius,3,cullingObject,(GameObject__Array *)0x0,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberDynamic = this_00;
  return;
}


/* Void DeActivateCulling() */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling
               (DynamicCullingHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberDynamic;
  if (this_00 != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
  }
  return;
}


/* Void UpdateCullingRadius(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_UpdateCullingRadius
               (DynamicCullingHandler *this,MVWorldObjectClient *objArg,
               ScaleChangedEventArgs *scaleArg,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberDynamic;
  if ((scaleArg != (ScaleChangedEventArgs *)0x0) &&
     (uVar1 = (scaleArg->fields).NewScale.y, this_00 != (CullingSubscriberDynamic *)0x0)) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_SetCullingRadius
              (this_00,(this->fields).cullingRadius * (float)uVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DynamicCullingHandler(Single) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler__ctor
               (DynamicCullingHandler *this,float cullingRadius,MethodInfo *method)

{
  (this->fields).cullingRadius = 2.0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).cullingRadius = cullingRadius;
  return;
}

