
/* Void Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_Changed
               (MVRotator *this,CubeModelChangedEventArgs *cubeModelChangedEventArgs,
               MethodInfo *method)

{
  MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVRotator::MVRotator_Destroy(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRotator);
  }
  this_00 = TypeInfo__MVRotator->static_fields->selectedRotators;
  if (this_00 != (HashSet_1_MVRotator_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::HashSet_1_MVRotator__Remove
              (this_00,this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
    MVMovable::MVMovable_Destroy((MVMovable *)this,(MethodInfo *)0x0);
    this_01 = (this->fields).cullingSubscriberBase;
    if (this_01 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVRotator::MVRotator_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVRotator *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = MVGroup::MVGroup_GetLocalBounds
                     (&BStack_2,(MVGroup *)this,boundsContext,(MethodInfo *)0x0);
  fVar3 = (pBVar1->m_Center).z;
  fVar4 = (pBVar1->m_Extents).x;
  fVar5 = (pBVar1->m_Extents).y;
  fVar6 = (pBVar1->m_Extents).z;
  if (boundsContext == BoundsContext__Enum_Preview) {
    puVar7 = (undefined8 *)func_?();
    uStack_8 = *puVar7;
    fVar9 = *(float *)(puVar7 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar9;
    a.x = (float)(undefined4)uStack_8;
    a.y = (float)uStack_8._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                       (&BStack_2.m_Extents,a,(MethodInfo *)0x0);
    uStack_8._0_4_ = pVVar10->x;
    uStack_8._4_4_ = pVVar10->y;
    puVar7 = (undefined8 *)func_?();
    fStack_11 = (float)((ulonglong)*puVar7 >> 0x20);
    func_?();
    func_?();
    (__return_storage_ptr__->m_Center).x = fStack_11;
    (__return_storage_ptr__->m_Center).y = 0.0;
    (__return_storage_ptr__->m_Center).z = fVar3;
    (__return_storage_ptr__->m_Extents).x = fVar4;
    (__return_storage_ptr__->m_Extents).y = fVar5;
    (__return_storage_ptr__->m_Extents).z = fVar6;
    return __return_storage_ptr__;
  }
  fVar3 = (pBVar1->m_Center).y;
  fVar4 = (pBVar1->m_Center).z;
  fVar5 = (pBVar1->m_Extents).x;
  (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar5;
  fVar3 = (pBVar1->m_Extents).z;
  (__return_storage_ptr__->m_Extents).y = (pBVar1->m_Extents).y;
  (__return_storage_ptr__->m_Extents).z = fVar3;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVRotator::MVRotator_Initialize(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_02 = TypeInfo__MVRotator___Initialize_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_02);
  if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
  (this_00->fields).originalScale.y = (float)this;
  MVMovable::MVMovable_Initialize((MVMovable *)this,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x9100;
  *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar1;
  pVVar3 = MVMovable::MVMovable_get_AngularVelocity
                     ((Vector3 *)&stack0xffffffdc,(MVMovable *)this,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  (this->fields)._InitAngularVelocity_k__BackingField.x = pVVar3->x;
  (this->fields)._InitAngularVelocity_k__BackingField.y = fVar4;
  (this->fields)._InitAngularVelocity_k__BackingField.z = fVar5;
  pvVar6 = (void *)0x0;
  uVar7 = 0;
  func_?(&stack0xfffffff0,0xfffffff1,0xfffffff1,0xfffffff1,0);
  (this_00->fields)._._._._.m_CachedPtr = pvVar6;
  *(undefined2 *)&(this_00->fields).state = uVar7;
  uVar1 = 0;
  uVar7 = 0;
  func_?(&stack0xffffffe8,0xf,0xf,0xf,0);
  *(undefined4 *)((int)&(this_00->fields).state + 2) = uVar1;
  *(undefined2 *)((int)&(this_00->fields).originalScale.x + 2) = uVar7;
  pIVar8 = WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (pIVar8 == (IInputSignalReceiver *)0x0) {
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar9 = mscorlib.dll::System::String::String_Concat_1
                        ((Object *)StringLiteral_Rotator_,arg1,
                         (Object *)StringLiteral__init___movable_s_cube_model_is_,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar9,(MethodInfo *)0x0);
    return;
  }
  this_01 = (MVPreviewAvatar *)
            WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar10,(Object *)this_00,MethodInfo__MVRotator___Initialize_c__AnonStorey0____m__0__,
             MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__);
  if (this_01 == (MVPreviewAvatar *)0x0) goto code_?;
  MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId(this_01,(int32_t)pUVar10,(MethodInfo *)0x0)
  ;
  pMVar11 = (MVWorldObjectClient *)
           WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (pMVar11 == (MVWorldObjectClient *)0x0) goto code_?;
  IVar12 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags(pMVar11,(MethodInfo *)0x0);
  uVar1 = 0;
  MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
            (pMVar11,IVar12 & (InteractionFlags__Enum_CanEnterPlay|
                              InteractionFlags__Enum_CanEarnGamePointsMinor|
                              InteractionFlags__Enum_CanEarnGamePoints|
                              InteractionFlags__Enum_CanUseGameRank|
                              InteractionFlags__Enum_GlobalSounds|
                              InteractionFlags__Enum_CanCloneRoot|InteractionFlags__Enum_CanUseTeam|
                              InteractionFlags__Enum_Sounds|InteractionFlags__Enum_TranslatbleXZ2D|
                              InteractionFlags__Enum_CanUseStars|InteractionFlags__Enum_CanUseLevel|
                              InteractionFlags__Enum_CanUseGameCoins|
                              InteractionFlags__Enum_CantAddChildren|InteractionFlags__Enum_IsUsable
                              |InteractionFlags__Enum_IsPreview|InteractionFlags__Enum_CanResetLogic
                              |InteractionFlags__Enum_HasSettings|
                              InteractionFlags__Enum_CanAddToInventory|
                              InteractionFlags__Enum_CanClone|InteractionFlags__Enum_CanEdit|
                              InteractionFlags__Enum_NotTranslatbleXZ|
                              InteractionFlags__Enum_NotTranslatbleY|
                              InteractionFlags__Enum_CanRotateZ|InteractionFlags__Enum_CanRotateY|
                              InteractionFlags__Enum_CanRotateX|
                              InteractionFlags__Enum_DontPushGroupToSelectionStack|
                              InteractionFlags__Enum_NotUserTransformable|
                              InteractionFlags__Enum_SelectionRequiresEditGroup|
                              InteractionFlags__Enum_IsTerrain|InteractionFlags__Enum_HasCubeModel|
                             InteractionFlags__Enum_Selectable),method_00);
  this_02 = (MVCubeModelBase *)
            WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<EditStateEventArgs>,uVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar10,(Object *)this,
             MethodInfo__MVRotator__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
             ,
             MethodInfo__System__EventHandler<EditStateEventArgs>__EventHandler_System__Object__void__
            );
  if (this_02 == (MVCubeModelBase *)0x0) goto code_?;
  MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
            (this_02,(EventHandler_1_EditStateEventArgs_ *)pUVar10,(MethodInfo *)0x0);
  bVar13 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0)
  ;
  if (bVar13 != 0) {
    pIVar8 = WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0)
    ;
    if (pIVar8 == (IInputSignalReceiver *)0x0) goto code_?;
    (*(code *)pIVar8->klass[3]._0.implementedInterfaces)();
    this_03 = (RuntimePrototypeCubeModel *)
              WindTurbine::WindTurbine_get_InputSignalReceiver
                        ((WindTurbine *)this,(MethodInfo *)0x0);
    pSVar9 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                        ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,(MethodInfo *)0x0);
    if (this_03 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
              (this_03,(int32_t)pSVar9,(MethodInfo *)0x0);
    pMVar11 = (MVWorldObjectClient *)
             WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0)
    ;
    if (pMVar11 == (MVWorldObjectClient *)0x0) goto code_?;
    IVar12 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags(pMVar11,(MethodInfo *)0x0)
    ;
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              (pMVar11,IVar12 | InteractionFlags__Enum_IsPreview,method_01);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar10,(Object *)this,
             MethodInfo__MVRotator__OnStateChanged_UnityEngine__CullingGroupEvent_,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  this_04 = (CullingSubscriberBase *)func_?();
  CullingSubscriberBase::CullingSubscriberBase__ctor_1
            (this_04,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar10,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = this_04;
  MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
  pIVar8 = WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (pIVar8 == (IInputSignalReceiver *)0x0) goto code_?;
  pDVar14 = (Delegate *)pIVar8[0x1c].monitor;
  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar10,(Object *)this,MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_,
             MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__);
  pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                      (pDVar14,(Delegate *)pUVar10,(MethodInfo *)0x0);
  pDVar14 = (Delegate *)0x0;
  if (pDVar15 == (Delegate *)0x0) {
code_?:
    pIVar8[0x1c].monitor = (MonitorData *)pDVar14;
    pUVar16 = (this->fields)._._._._.PositionChanged;
    pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar10,(Object *)this,
               MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUVar17 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar16,(Delegate *)pUVar10,(MethodInfo *)0x0);
    pUVar16 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUVar17 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
      (this->fields)._._._._.PositionChanged = pUVar16;
      return;
    }
    if (pUVar17->klass ==
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>) {
      pUVar16 = pUVar17;
    }
    if (pUVar16 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
  }
  else {
    if ((Action_1_CubeModelChangedEventArgs___Class *)pDVar15->klass ==
        TypeInfo__System__Action<CubeModelChangedEventArgs>) {
      pDVar14 = pDVar15;
    }
    if (pDVar14 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_MVCubeModelBase_BeingEditedChanged
               (MVRotator *this,Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVCubeModelBase;
  if (sender == (Object *)0x0) {
    func_?(0);
    sender = extraout_EDX;
  }
  else {
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((sender->klass->_1).naturalAligment < bVar2) ||
       ((MVCubeModelBase__Class *)(sender->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_00 = (MVCubeModelBase *)0x0;
    if (bVar3) {
      this_00 = (MVCubeModelBase *)sender;
    }
    if (this_00 != (MVCubeModelBase *)0x0) {
      value = MVCubeModelBase::MVCubeModelBase_get_BeingEdited(this_00,(MethodInfo *)0x0);
      MVMovable::MVMovable_set_PausedMovement((MVMovable *)this,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(sender,pMVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnPositionChanged
               (MVRotator *this,Object *sender,PositionChangedEventArgs *positionChangedEventArgs,
               MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  pVVar1 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_Position.method)
                     (auStack_2,this,(this->klass->vtable).set_Position.methodPtr);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnSelectedChanged
               (MVRotator *this,bool selected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (selected == 0) {
    if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVRotator);
    }
    pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
    if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::HashSet_1_MVRotator__Remove
              (pHVar1,this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
  }
  else {
    if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVRotator);
    }
    pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
    if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Add_MVRotator_);
  }
  if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRotator);
  }
  pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
  if (pHVar1 != (HashSet_1_MVRotator_ *)0x0) {
    JVar2 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)pHVar1,
                       MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__);
    if (JVar2 == JsonSchemaType__Enum_None) {
      bVar3 = 1;
    }
    else {
      if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVRotator);
      }
      pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
      if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
      JVar2 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)pHVar1,
                         MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__);
      if (JVar2 == JsonSchemaType__Enum_String) {
        if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVRotator);
        }
        pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
        if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
        bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                          ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pHVar1,
                           (NativeAdType__Enum)this,
                           MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Contains_MVRotator_
                          );
      }
      else {
        bVar3 = 0;
      }
    }
    this_00 = (MVCubeModelBase *)
              WindTurbine::WindTurbine_get_InputSignalReceiver
                        ((WindTurbine *)this,(MethodInfo *)0x0);
    if (this_00 != (MVCubeModelBase *)0x0) {
      bVar4 = MVCubeModelBase::MVCubeModelBase_get_BeingEdited(this_00,(MethodInfo *)0x0);
      if ((bVar4 == 0) && (bVar3 != 0)) {
        if (selected == 0) {
          if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
            func_?();
          }
          pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
          if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
          bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                  NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                            ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pHVar1,
                             (NativeAdType__Enum)this,
                             MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Contains_MVRotator_
                            );
        }
        else {
          bVar3 = 1;
        }
        if (this == (MVRotator *)0x0) goto code_?;
        MVMovable::MVMovable_set_PausedMovement((MVMovable *)this,bVar3,(MethodInfo *)0x0);
      }
      MVWorldObjectClient::MVWorldObjectClient_OnSelectedChanged
                ((MVWorldObjectClient *)this,selected,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnStateChanged
               (MVRotator *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    newVisible = CullingApiWrapper::CullingApiWrapper_Visible
                           (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    MVMovable::MVMovable_SetVisible((MVMovable *)this,newVisible,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetWorldObjectToPurchased
               (MVRotator *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pIVar1 = WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    (*(code *)pIVar1->klass[2]._1.cctor_thread)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetupCulling(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__MVRotator__OnStateChanged_UnityEngine__CullingGroupEvent_,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  this_00 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1
            (this_00,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar1,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = this_00;
  MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
  pIVar2 = WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (pIVar2 != (IInputSignalReceiver *)0x0) {
    pAStack3 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    a = (Delegate *)pIVar2[0x1c].monitor;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_,
               MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__)
    ;
    pUStack4 =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine(a,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUStack4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if ((Action_1_CubeModelChangedEventArgs___Class *)pUStack4->klass ==
          TypeInfo__System__Action<CubeModelChangedEventArgs>) {
        pUVar5 = pUStack4;
      }
      pUStack6 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
           TypeInfo__System__Action<CubeModelChangedEventArgs>;
      if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    pUStack6 =
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    a_00 = (this->fields)._._._._.PositionChanged;
    _UNK_? = pUVar5;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUStack4 =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a_00,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUStack4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUStack4->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar5 = pUStack4;
      }
      pUStack6 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (this->fields)._._._._.PositionChanged = pUVar5;
    return;
  }
  pAStack3 = (Action_1_CubeModelChangedEventArgs___Class *)0x0;
  func_?();
  pUStack4 = extraout_ECX;
  pUStack6 =
       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupCullingSphere() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetupCullingSphere
               (MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  this_00 = (MVCubeModelBase *)
            WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (this_00 != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_GetWorldBounds(&BStack_5,this_00,(MethodInfo *)0x0);
    puVar6 = (undefined8 *)(*(code *)(this->klass->vtable).get_Position.method)();
    uStack_7 = *puVar6;
    fVar8 = *(float *)(puVar6 + 1);
    puVar6 = (undefined8 *)func_?();
    uStack_9 = *puVar6;
    fVar10 = *(float *)(puVar6 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar8;
    a.x = (float)(undefined4)uStack_7;
    a.y = uStack_7._4_4_;
    b.z = fVar10;
    b.x = (float)(undefined4)uStack_9;
    b.y = uStack_9._4_4_;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&BStack_5.m_Extents,a,b,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar11->x;
    uStack_2._4_4_ = pVVar11->y;
    fStack_1 = pVVar11->z;
    fVar12 = (float10)func_?();
    uStack_9 = CONCAT44((float)fVar12,(undefined4)uStack_9);
    pVVar11 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                       (&BStack_5.m_Extents,(InputToPlayerMovementAndroid *)&stack0xffffffa0,
                        (MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar11->x;
    uStack_3._4_4_ = pVVar11->y;
    fStack_4 = pVVar11->z;
    fVar12 = (float10)func_?();
    pCVar13 = (this->fields).cullingSubscriberBase;
    uStack_7 = CONCAT44((float)fVar12,(undefined4)uStack_7);
    pVVar11 = (Vector3 *)(*(code *)(this->klass->vtable).get_Position.method)();
    if (pCVar13 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (pCVar13,uStack_7._4_4_ + uStack_9._4_4_,*pVVar11,(MethodInfo *)0x0);
      pCVar13 = (this->fields).cullingSubscriberBase;
      if (pCVar13 != (CullingSubscriberBase *)0x0) {
        LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                  ((LockCursorManager3DMode *)pCVar13,(Action_1_Boolean_ *)0x2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void WorldObjectClient_SelectedChangedHandler(Object, SelectedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_WorldObjectClient_SelectedChangedHandler
               (MVRotator *this,Object *sender,SelectedEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = MVWorldObjectClient::MVWorldObjectClient_get_Selected
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_01 = (MVCubeModelBase *)
            WindTurbine::WindTurbine_get_InputSignalReceiver((WindTurbine *)this,(MethodInfo *)0x0);
  if (this_01 != (MVCubeModelBase *)0x0) {
    bVar1 = MVCubeModelBase::MVCubeModelBase_get_BeingEdited(this_01,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (e != (SelectedEventArgs *)0x0) {
      if ((e->fields).Selected == 0) {
        if ((((uint)(TypeInfo__MVRotator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVRotator->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = TypeInfo__MVRotator->static_fields->selectedRotators;
        if (this_00 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
        JVar2 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)this_00,
                           MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__
                          );
        value = 0 < (int)JVar2;
      }
      else {
        value = true;
      }
      if (this != (MVRotator *)0x0) {
        MVMovable::MVMovable_set_PausedMovement((MVMovable *)this,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVRotator() */

void Assembly-CSharp.dll::MVRotator::MVRotator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<MVRotator>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<MVRotator>__HashSet__);
  TypeInfo__MVRotator->static_fields->selectedRotators = (HashSet_1_MVRotator_ *)this;
  return;
}


/* MVRotator(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRotator::MVRotator__ctor
               (MVRotator *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    VStack_1.z = (float)_UNK_?;
    VStack_1.y = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
    VStack_1.z = (float)TypeInfo__MVMovable;
    VStack_1.y = (float)&UNK_?;
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMovable>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
  (this->fields)._.MoveableChildren = (List_1_MVMovable_ *)this_00;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_1,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields)._.localPos.x = pVVar2->x;
  (this->fields)._.localPos.y = fVar3;
  (this->fields)._.localPos.z = fVar4;
  (this->fields)._.distance = 5.0;
  (this->fields)._.parentMoverID = -1;
  (this->fields)._.isVisible = 1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar5 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
  piVar6 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar6 = (uint)*piVar6 | 0x2000;
  *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar5;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRotator::MVRotator_get_DocumentationType(MVRotator *this,MethodInfo *method)

{
  pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                     ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  if ((float)uVar2 == 0.0) {
    pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                       ((Vector3 *)&stack0xffffffd8,(MVMovable *)this,(MethodInfo *)0x0);
    uVar3 = pVVar1->y;
    if ((float)uVar3 != 0.0) {
      pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                         ((Vector3 *)&stack0xffffffcc,(MVMovable *)this,(MethodInfo *)0x0);
      if (pVVar1->z == 0.0) {
        return MVWorldObjectDocumentationType__Enum_HorizontalRotator;
      }
    }
  }
  pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                     ((Vector3 *)&stack0xffffffcc,(MVMovable *)this,(MethodInfo *)0x0);
  uVar4 = pVVar1->x;
  if ((float)uVar4 != 0.0) {
    pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                       ((Vector3 *)&stack0xffffffd8,(MVMovable *)this,(MethodInfo *)0x0);
    uVar5 = pVVar1->y;
    if ((float)uVar5 == 0.0) {
      pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                         ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
      if (pVVar1->z == 0.0) {
        return MVWorldObjectDocumentationType__Enum_VerticalRotator;
      }
    }
  }
  return MVWorldObjectDocumentationType__Enum_Missing;
}


/* Boolean get_Horizontal() */

bool Assembly-CSharp.dll::MVRotator::MVRotator_get_Horizontal(MVRotator *this,MethodInfo *method)

{
  pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                     ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  if ((float)uVar2 == 0.0) {
    pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                       ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
    uVar3 = pVVar1->y;
    if ((float)uVar3 != 0.0) {
      pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                         ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
      if (pVVar1->z == 0.0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Vector3 get_InitAngularVelocity() */

Vector3 * Assembly-CSharp.dll::MVRotator::MVRotator_get_InitAngularVelocity
                    (Vector3 *__return_storage_ptr__,MVRotator *this,MethodInfo *method)

{
  fVar1 = (this->fields)._InitAngularVelocity_k__BackingField.y;
  fVar2 = (this->fields)._InitAngularVelocity_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._InitAngularVelocity_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_Vertical() */

bool Assembly-CSharp.dll::MVRotator::MVRotator_get_Vertical(MVRotator *this,MethodInfo *method)

{
  pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                     ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  if ((float)uVar2 != 0.0) {
    pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                       ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
    uVar3 = pVVar1->y;
    if ((float)uVar3 == 0.0) {
      pVVar1 = MVMovable::MVMovable_get_AngularVelocity
                         ((Vector3 *)&stack0xffffffe4,(MVMovable *)this,(MethodInfo *)0x0);
      if (pVVar1->z == 0.0) {
        return 1;
      }
    }
  }
  return 0;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVRotator::MVRotator_get_WOCM(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  return pMVar1;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVRotator::MVRotator_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVRotator *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                     (auStack_2,this,(this->klass->vtable).set_WorldPosition.methodPtr);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_InitAngularVelocity(Vector3) */

void Assembly-CSharp.dll::MVRotator::MVRotator_set_InitAngularVelocity
               (MVRotator *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._InitAngularVelocity_k__BackingField.x = value.x;
  (this->fields)._InitAngularVelocity_k__BackingField.y = value.y;
  (this->fields)._InitAngularVelocity_k__BackingField.z = value.z;
  return;
}

