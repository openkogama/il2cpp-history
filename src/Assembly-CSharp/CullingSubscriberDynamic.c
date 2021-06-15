
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
               (CullingSubscriberDynamic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_UnSubscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this_00->fields)._._._._.m_CachedPtr = in_stack_2;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar3->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->updateBuckets ==
          (List_1_PriorityDataUpdate___Array *)0x0) break;
      this_01 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0____m__0_PriorityDataUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataUpdate>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_01,(Predicate_1_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_OnStateChanged
               (CullingSubscriberDynamic *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = cullingGroupEvent._4_4_;
  iVar2 = cullingGroupEvent.m_Index;
  distanceBandIndex = (this->fields).cullingBandIndex;
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  uVar3 = cullingGroupEvent._4_4_;
  cullingGroupEvent.m_PrevState = (uint8_t)uVar1;
  cullingGroupEvent.m_ThisState = SUB41(uVar1,1);
  cullingGroupEvent._6_2_ = SUB42(uVar1,2);
  cullingGroupEvent_00.m_PrevState = cullingGroupEvent.m_PrevState;
  cullingGroupEvent_00.m_ThisState = cullingGroupEvent.m_ThisState;
  cullingGroupEvent_00._6_2_ = cullingGroupEvent._6_2_;
  cullingGroupEvent_00.m_Index = iVar2;
  cullingGroupEvent._4_4_ = uVar3;
  value = CullingApiWrapper::CullingApiWrapper_Visible
                    (cullingGroupEvent_00,distanceBandIndex,(MethodInfo *)0x0);
  if (((this->fields).overrideDistanceBandIndex != -1) &&
     (iVar4 = func_?(&cullingGroupEvent,0),
     iVar4 <= (this->fields).overrideDistanceBandIndex)) {
    value = 1;
  }
  this_00 = (this->fields).root;
  if (this_00 == (GameObject *)0x0) {
code_?:
    func_?(0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,value,(MethodInfo *)0x0);
  pGVar6 = (this->fields).children;
  if (pGVar6 != (GameObject__Array *)0x0) {
    ppGVar7 = pGVar6->vector;
    for (uVar8 = 0; (int)uVar8 < (int)pGVar6->max_length; uVar8 = uVar8 + 1) {
      if (pGVar6->max_length <= uVar8) {
        uVar1 = func_?(0,0);
        func_?(uVar1);
        goto code_?;
      }
      if (*ppGVar7 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*ppGVar7,value,(MethodInfo *)0x0);
      ppGVar7 = ppGVar7 + 1;
    }
  }
  return;
}


/* Void SetCullingRadius(Single) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_SetCullingRadius
               (CullingSubscriberDynamic *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < pBVar1->max_length) {
      pBVar1->vector[uVar2].radius = radius;
      return;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic_UpdateControllerUpdate
               (CullingSubscriberDynamic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  uVar2 = (this->fields)._CullingIndex_k__BackingField;
  if ((pBVar1 == (BoundingSphere__Array *)0x0) ||
     (this_00 = (this->fields).rootTransform, this_00 == (Transform *)0x0)) {
    func_?(0);
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
  VStack_4.x = 0.0;
  uVar7 = func_?(0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CullingSubscriberDynamic(Single, Int32, GameObject, GameObject[]) */

void Assembly-CSharp.dll::CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
               (CullingSubscriberDynamic *this,float radius,int32_t cullingBandIndex,
               GameObject *root,GameObject__Array *children,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).overrideDistanceBandIndex = -1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).cullingBandIndex = cullingBandIndex;
  (this->fields).root = root;
  if (root == (GameObject *)0x0) {
code_?:
    func_?();
  }
  else {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (root,(MethodInfo *)0x0);
    (this->fields).rootTransform = pTVar1;
    (this->fields).children = children;
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if ((pBVar3 == (BoundingSphere__Array *)0x0) ||
       (pTVar1 = (this->fields).rootTransform, pTVar1 == (Transform *)0x0)) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    fVar5 = pVVar4->y;
    fVar6 = pVVar4->z;
    if (uVar2 < pBVar3->max_length) {
      pBVar3->vector[uVar2].position.x = pVVar4->x;
      pBVar3->vector[uVar2].position.y = fVar5;
      pBVar3->vector[uVar2].position.z = fVar6;
      pBVar3 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar3 != (BoundingSphere__Array *)0x0) {
        uVar2 = (this->fields)._CullingIndex_k__BackingField;
        if (uVar2 < pBVar3->max_length) {
          pBVar3->vector[uVar2].radius = radius;
          if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

