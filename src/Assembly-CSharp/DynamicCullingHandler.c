
/* Void ActivateCulling(GameObject) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
               (DynamicCullingHandler *this,GameObject *cullingObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberDynamic);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Activating_Culling);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Activating_Culling,(MethodInfo *)0x0);
  fVar1 = (this->fields).cullingRadius;
  value = (CullingSubscriberDynamic *)func_?(TypeInfo__CullingSubscriberDynamic);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  (value->fields).overrideDistanceBandIndex = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  (value->fields).cullingBandIndex = 3;
  (value->fields).root = cullingObject;
  func_?(&(value->fields).root,cullingObject);
  if (cullingObject != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (cullingObject,(MethodInfo *)0x0);
    (value->fields).rootTransform = pTVar2;
    func_?(&(value->fields).rootTransform);
    (value->fields).children = (GameObject__Array *)0x0;
    func_?(&(value->fields).children,0);
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)value,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    uVar4 = (value->fields)._CullingIndex_k__BackingField;
    if ((pBVar3 != (BoundingSphere__Array *)0x0) &&
       (pTVar2 = (value->fields).rootTransform, pTVar2 != (Transform *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar7 = pVVar5->z;
      if (pBVar3->max_length <= uVar4) goto code_?;
      pBVar3->vector[uVar4].position.x = pVVar5->x;
      pBVar3->vector[uVar4].position.y = fVar6;
      pBVar3->vector[uVar4].position.z = fVar7;
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar3 != (BoundingSphere__Array *)0x0) {
        uVar4 = (value->fields)._CullingIndex_k__BackingField;
        if (uVar4 < pBVar3->max_length) {
          pBVar3->vector[uVar4].radius = fVar1;
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)value,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          (this->fields).cullingSubscriberDynamic = value;
          func_?(&this->fields);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DeActivateCulling() */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling
               (DynamicCullingHandler *this,MethodInfo *method)

{
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    unSubscriber = (this->fields).cullingSubscriberDynamic;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      func_?(&TypeInfo__UpdateController);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_UnSubscribe
              ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_RemoveUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)unSubscriber,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    func_?(&this->fields,0);
  }
  return;
}


/* Void UpdateCullingRadius(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_UpdateCullingRadius
               (DynamicCullingHandler *this,MVWorldObjectClient *objArg,
               ScaleChangedEventArgs *scaleArg,MethodInfo *method)

{
  fVar1 = (this->fields).cullingRadius;
  if (scaleArg != (ScaleChangedEventArgs *)0x0) {
    fVar2 = (scaleArg->fields).NewScale.y;
    pCVar3 = (this->fields).cullingSubscriberDynamic;
    if (pCVar3 != (CullingSubscriberDynamic *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingApiWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar4 != (BoundingSphere__Array *)0x0) {
        uVar5 = (pCVar3->fields)._CullingIndex_k__BackingField;
        if (uVar5 < pBVar4->max_length) {
          pBVar4->vector[uVar5].radius = fVar2 * fVar1;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* DynamicCullingHandler(Single) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler__ctor
               (DynamicCullingHandler *this,float cullingRadius,MethodInfo *method)

{
  (this->fields).cullingRadius = 2.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).cullingRadius = cullingRadius;
  return;
}

