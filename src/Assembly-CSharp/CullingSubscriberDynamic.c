
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
               (CullingSubscriberDynamic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_UnSubscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                   );
    func_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = in_stack_1;
    func_?(value + 1,in_stack_1);
    iVar2 = 0x10;
    uVar3 = 0;
    while( true ) {
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar4 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar4 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar4->max_length <= (int)uVar3) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar4 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar4 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if (pLVar4->max_length <= uVar3) break;
      this_00 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ **)
                 ((int)pLVar4->vector + iVar2 + -0x10);
      this_01 = (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)value[1].monitor
      ;
      if (this_01 == (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        this_01 = (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        if (this_01 == (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Predicate`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::
        Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor
                  (this_01,value,
                   MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   ,(MethodInfo *)0x0);
        value[1].monitor = (MonitorData *)this_01;
        func_?(&value[1].monitor,this_01);
      }
      if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__RemoveAll
                (this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_OnStateChanged
               (CullingSubscriberDynamic *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).cullingBandIndex;
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
          CullingGroupEvent_get_hasBecomeInvisible
                    ((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     ((iVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
               CullingGroupEvent_get_currentDistance
                         ((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0), iVar3 <= iVar1
      || (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
                  CullingGroupEvent_get_isVisible
                            ((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0), bVar2 == 0)))
     ) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_hasBecomeVisible
                      ((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
code_?:
      value = true;
      goto code_?;
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_isVisible((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      cullingGroupEvent.m_Index = 0;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
              CullingGroupEvent_get_currentDistance
                        ((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0);
      if (iVar3 <= iVar1) goto code_?;
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_isVisible((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
              CullingGroupEvent_get_currentDistance
                        ((CullingGroupEvent *)&stack0xfffffff0,(MethodInfo *)0x0);
      value = iVar3 <= iVar1;
      goto code_?;
    }
  }
  value = false;
code_?:
  if (((this->fields).overrideDistanceBandIndex != -1) &&
     (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
              CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0),
     iVar3 <= (this->fields).overrideDistanceBandIndex)) {
    value = true;
  }
  this_00 = (this->fields).root;
  if (this_00 == (GameObject *)0x0) {
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,value,(MethodInfo *)0x0);
  if ((this->fields).children != (GameObject__Array *)0x0) {
    pGVar5 = (this->fields).children;
    ppGVar6 = pGVar5->vector;
    for (uVar7 = 0; (int)uVar7 < (int)pGVar5->max_length; uVar7 = uVar7 + 1) {
      if (pGVar5->max_length <= uVar7) {
        func_?();
        goto code_?;
      }
      if (*ppGVar6 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*ppGVar6,value,(MethodInfo *)0x0);
      ppGVar6 = ppGVar6 + 1;
    }
  }
  return;
}


/* Void SetCullingRadius(Single) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_SetCullingRadius
               (CullingSubscriberDynamic *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CullingApiWrapper__Class *)&TypeInfo__CullingApiWrapper;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__CullingApiWrapper;
    func_?();
  }
  pBVar2 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar2 != (BoundingSphere__Array *)0x0) {
    uVar3 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar3 < pBVar2->max_length) {
      pBVar2->vector[uVar3].radius = radius;
      return;
    }
    pCStack_1 = (CullingApiWrapper__Class *)0x0;
    puStack_4 = (undefined *)func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pCStack_1 = (CullingApiWrapper__Class *)&stack0xfffffffc;
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_UpdateControllerUpdate
               (CullingSubscriberDynamic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  uVar2 = (this->fields)._CullingIndex_k__BackingField;
  if ((pBVar1 == (BoundingSphere__Array *)0x0) ||
     (this_00 = (this->fields).rootTransform, this_00 == (Transform *)0x0)) {
    func_?();
  }
  else {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,this_00,(MethodInfo *)0x0);
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    if (uVar2 < pBVar1->max_length) {
      pBVar1->vector[uVar2].position.x = pVVar3->x;
      pBVar1->vector[uVar2].position.y = fVar5;
      pBVar1->vector[uVar2].position.z = fVar6;
      return;
    }
  }
  VStack_4.x = (float)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CullingSubscriberDynamic(Single, Int32, GameObject, GameObject[]) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
               (CullingSubscriberDynamic *this,float radius,int32_t cullingBandIndex,
               GameObject *root,GameObject__Array *children,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  (this->fields).overrideDistanceBandIndex = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).cullingBandIndex = cullingBandIndex;
  (this->fields).root = root;
  func_?(&(this->fields).root,root);
  if (root != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (root,(MethodInfo *)0x0);
    (this->fields).rootTransform = pTVar1;
    func_?(&(this->fields).rootTransform,pTVar1);
    (this->fields).children = children;
    func_?(&(this->fields).children,children);
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if ((pBVar3 != (BoundingSphere__Array *)0x0) &&
       (pTVar1 = (this->fields).rootTransform, pTVar1 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar1,(MethodInfo *)0x0);
      fVar6 = pVVar4->y;
      fVar7 = pVVar4->z;
      if (pBVar3->max_length <= uVar2) goto code_?;
      pBVar3->vector[uVar2].position.x = pVVar4->x;
      pBVar3->vector[uVar2].position.y = fVar6;
      pBVar3->vector[uVar2].position.z = fVar7;
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar3 != (BoundingSphere__Array *)0x0) {
        uVar2 = (this->fields)._CullingIndex_k__BackingField;
        if (uVar2 < pBVar3->max_length) {
          pBVar3->vector[uVar2].radius = radius;
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UpdateController);
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
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

