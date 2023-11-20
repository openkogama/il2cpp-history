
/* HoverCraftVisualization+HoverCraftVisualizationSettings CreateHoverCraftVisualizationSettings()
    */

HoverCraftVisualization_HoverCraftVisualizationSettings *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_CreateHoverCraftVisualizationSettings
          (HoverCraftVisualization_HoverCraftVisualizationSettings *__return_storage_ptr__,
          MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__HoverCraftVisualization);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_thrustersColor);
    func_?(&StringLiteral_thrustersOn);
    func_?(&StringLiteral_thrustersSize);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  iVar3 = 0x100;
  pOStack_4 = (Object *)0x0;
  *(undefined4 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->thrustersSize = 0.0;
  (__return_storage_ptr__->thrustersColor).colors = (ThrustersColorColorKey__Array *)0x0;
  (__return_storage_ptr__->thrustersColor).alphas = (ThrustersColorAlphaKey__Array *)0x0;
  pOStack_5 = _UNK_?;
  if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftVisualization);
  }
  pTVar6 = (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).colors;
  pTStack_7 = (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).alphas;
  if ((this->fields)._._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((this->fields)._._._.blueprintData,(Object *)StringLiteral_thrustersOn,
                       &pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar8 != 0) && (pOStack_1 != (Object *)0x0)) {
      pOVar9 = (Object *)0x0;
      if ((Boolean__Class *)pOStack_1->klass == TypeInfo__System__Boolean) {
        pOVar9 = pOStack_1;
      }
      if (pOVar9 == (Object *)0x0) goto code_?;
      pOVar9 = pOStack_1;
      pSVar10 = (Single__Class *)TypeInfo__System__Boolean;
      if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pOStack_5 = pOStack_1;
        pbVar11 = (byte *)func_?();
        iVar3 = (uint)*pbVar11 << 8;
        goto code_?;
      }
code_?:
      func_?(pOVar9,pSVar10);
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      pHVar13 = (HoverCraftVisualization_HoverCraftVisualizationSettings *)(*pcVar12)();
      return pHVar13;
    }
code_?:
    pDVar14 = (this->fields)._._._.blueprintData;
    if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar14,(Object *)StringLiteral_thrustersSize,&pOStack_2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar8 != 0) && (pOStack_2 != (Object *)0x0)) {
      pOVar9 = (Object *)0x0;
      if ((Single__Class *)pOStack_2->klass == TypeInfo__System__Single) {
        pOVar9 = pOStack_2;
      }
      if (pOVar9 != (Object *)0x0) {
        pOVar9 = pOStack_2;
        pSVar10 = TypeInfo__System__Single;
        if ((pOStack_2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar15 = (float *)func_?(pOStack_2);
        pOStack_5 = (Object *)*pfVar15;
      }
    }
    pDVar14 = (this->fields)._._._.blueprintData;
    if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar14,(Object *)StringLiteral_thrustersColor,&pOStack_4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar8 == 0) goto code_?;
    if (pOStack_4 == (Object *)0x0) {
code_?:
      bVar16 = 0;
    }
    else {
      pOVar9 = (Object *)0x0;
      if ((Boolean__Class *)pOStack_4->klass == TypeInfo__System__Boolean) {
        pOVar9 = pOStack_4;
      }
      if (pOVar9 == (Object *)0x0) goto code_?;
      pOVar9 = pOStack_4;
      pSVar10 = (Single__Class *)TypeInfo__System__Boolean;
      if ((pOStack_4->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      puVar17 = (undefined1 *)func_?(pOStack_4);
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),*puVar17);
      bVar16 = 1;
    }
    if ((bVar16 & (byte)iVar3) != 0) {
      TVar18 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
               ThrustersColorSerializer_Deserialize
                         ((this->fields)._._._.blueprintData,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  TVar18.alphas = pTStack_7;
  TVar18.colors = pTVar6;
code_?:
  *(undefined4 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->thrustersSize = 0.0;
  (__return_storage_ptr__->thrustersColor).colors = (ThrustersColorColorKey__Array *)0x0;
  (__return_storage_ptr__->thrustersColor).alphas = (ThrustersColorAlphaKey__Array *)0x0;
  __return_storage_ptr__->useThruster = (bool)((uint)iVar3 >> 8);
  __return_storage_ptr__->thrustersSize = (float)pOStack_5;
  __return_storage_ptr__->thrustersColor = TVar18;
  func_?(&__return_storage_ptr__->thrustersColor,0);
  return __return_storage_ptr__;
}


/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_CreateLocalObjects
          (MVHoverCraft *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    HoverCraftMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HoverCraftMotor>__
                   );
    func_?(&
                    SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                   );
    func_?(&TypeInfo__IVehicleCamera);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVHoverCraft__LocalObjectsHoverCraft);
    func_?(&StringLiteral_Expected_camera_type_is_VehicleC);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_02 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                        );
    if (this_02 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController::SmoothCharacterController_Init
                (this_02,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
                 (MVWorldObjectClient *)this,(MethodInfo *)0x0);
      this_00 = (this_02->fields).controller;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar3 = (pVVar2->upVector).x;
      uVar4 = (pVVar2->upVector).y;
      unaff_ESI = (MvCharacterController *)0x0;
      if (this_00 != (MvCharacterController *)0x0) {
        center.y = (float)uVar4 * _UNK_?;
        center.x = (float)uVar3 * _UNK_?;
        center.z = (pVVar2->upVector).z * _UNK_?;
        MvCharacterController::MvCharacterController_Init(this_00,1.3,2.0,center,(MethodInfo *)0x0);
        unaff_ESI = (this_02->fields).controller;
        pHVar5 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                           ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (unaff_ESI != (MvCharacterController *)0x0) {
          (unaff_ESI->fields).IgnoreWoIds = pHVar5;
          func_?();
          pGVar1 = (this->fields)._._._._._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            this_03 = (HoverCraftMotor *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 HoverCraftMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HoverCraftMotor>__
                                );
            if (this_03 != (HoverCraftMotor *)0x0) {
              HoverCraftMotor::HoverCraftMotor_UpdateConfiguration
                        (this_03,(this->fields)._._._.blueprintData,(MethodInfo *)0x0);
              pVVar6 = (this->fields)._._.seatManager;
              if ((pVVar6 != (VehicleSeatManager *)0x0) &&
                 (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (pVVar6->fields).seats,
                 this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 )) {
                RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_01,seatID,
                                   MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                  );
                if (RVar7 != (RegexCharClass_SingleRange)0x0) {
                  unaff_ESI = *(MvCharacterController **)((int)RVar7 + 0x18);
                  iVar8 = func_?(unaff_ESI,TypeInfo__IVehicleCamera);
                  if (iVar8 == 0) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,
                               (MethodInfo *)0x0);
                    return (MVVehicleBase_LocalObjectsBase *)0x0;
                  }
                  pIStack_9 = TypeInfo__IVehicleCamera;
                  if (unaff_ESI == (MvCharacterController *)0x0) {
                    pIVar10 = (IVehicleCamera *)0x0;
code_?:
                    (this_03->fields)._._VehicleCamera_k__BackingField = pIVar10;
                    func_?(&(this_03->fields)._._VehicleCamera_k__BackingField,pIVar10);
                    this_04 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)
                              func_?(TypeInfo__MVHoverCraft__LocalObjectsHoverCraft);
                    MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                    MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
                              (this_04,(MVSimpleOneSeatVehicle *)this,this_02,
                               (SimpleVehicleMotorBase *)this_03,(MethodInfo *)0x0);
                    return (MVVehicleBase_LocalObjectsBase *)this_04;
                  }
                  pIVar10 = (IVehicleCamera *)func_?(unaff_ESI,TypeInfo__IVehicleCamera);
                  if (pIVar10 != (IVehicleCamera *)0x0) goto code_?;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,pIStack_9);
  pcVar11 = (code *)swi(3);
  pMVar12 = (MVVehicleBase_LocalObjectsBase *)(*pcVar11)();
  return pMVar12;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_Destroy(MVHoverCraft *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
              ((this->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    func_?(&(this->fields).cullingSubscriberDynamic,0);
  }
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVHoverCraft *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if ((boundsContext != BoundsContext__Enum_Insert) &&
     (boundsContext != BoundsContext__Enum_BoxVisualization)) {
    pBVar1 = MVGroup::MVGroup_GetLocalBounds
                       (&BStack_2,(MVGroup *)this,boundsContext,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_7._0_4_ = (pVVar6->zeroVector).x;
  uStack_7._4_4_ = (pVVar6->zeroVector).y;
  fVar3 = (pVVar6->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar6->oneVector).x;
  uVar9 = (pVVar6->oneVector).y;
  fVar10 = (float)uVar8 * _UNK_?;
  fVar11 = (float)uVar9 * _UNK_?;
  fVar5 = (pVVar6->oneVector).z * _UNK_?;
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_7;
  fVar4 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = (float)uStack_7._4_4_;
  fVar5 = fVar5 * _UNK_?;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = fVar10 * fVar4;
  (__return_storage_ptr__->m_Extents).y = fVar11 * fVar4;
  (__return_storage_ptr__->m_Extents).z = fVar5;
  return __return_storage_ptr__;
}


/* MVVehicleBase+HealthChangeAffects HealthChangeResult(Single) */

MVVehicleBase_HealthChangeAffects
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_HealthChangeResult
          (MVHoverCraft *this,float health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.IsVehicleDead;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    fVar2 = (this->fields)._.previousHealth;
    (this->fields)._.previousHealth = health;
    if (pOVar1 != (Object *)0x0) {
      pBVar3 = TypeInfo__System__Boolean;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pcVar4 = (char *)func_?(pOVar1);
        if ((*pcVar4 == '\0' && health < fVar2) &&
           (pMVar5 = (MVHoverCraft *)(this->fields).randomLeaveVehicle, 0.0 < (float)pMVar5)) {
          if ((float)pMVar5 < 0.0) {
            this = (MVHoverCraft *)0x0;
          }
          else {
            this = pMVar5;
            if ((float)_UNK_? < (float)pMVar5) {
              this = _UNK_?;
            }
          }
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                            (0.0,100.0,(MethodInfo *)0x0);
          this._0_2_ = (MVVehicleBase_HealthChangeAffects)
                       CONCAT11(health <= 0.0,fVar2 <= (float)this);
          return this._0_2_;
        }
        MVar6 = MVVehicleBase::MVVehicleBase_HealthChangeResult
                          ((MVVehicleBase *)this,health,(MethodInfo *)0x0);
        return MVar6;
      }
      goto code_?;
    }
  }
  func_?();
  pOVar1 = extraout_ECX;
  pBVar3 = extraout_EDX;
code_?:
  func_?(pOVar1,pBVar3);
  pcVar7 = (code *)swi(3);
  MVar6 = (MVVehicleBase_HealthChangeAffects)(*pcVar7)();
  return MVar6;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_Initialize
               (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberDynamic);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&
                    InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                   );
    func_?(&
                    HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__MVHoverCraft__OnIsDeadChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_randomLeaveVehicle);
    func_?(&StringLiteral_HoverCraftHull);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
            ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
  pIVar2 = (Il2CppClass *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_HoverCraftHull,(MethodInfo *)0x0);
  value_00 = TypeInfo__MVCubeModelInstance;
  if ((pIVar2 == (Il2CppClass *)0x0) ||
     (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= *(byte *)&pIVar2->image[4].assembly &&
      (*(MVCubeModelInstance__Class **)
        ((pIVar2->image[2].typeCount - 4) +
        (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) ==
       TypeInfo__MVCubeModelInstance)))) {
    pGVar3 = (this->fields)._._._._._.gameObject;
    pIStack_4 = pIVar2;
    if ((pGVar3 == (GameObject *)0x0) ||
       ((pHVar5 = (HoverCraftVisualization *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_1
                            (pGVar3,
                             HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                            ), uStack_6 = pHVar5, pHVar5 == (HoverCraftVisualization *)0x0 ||
        (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pHVar5,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    cVar7 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
    if (cVar7 == '\0') {
      pGVar3 = (this->fields)._._._._._.gameObject;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (pGVar3,
                 InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pHVar5,(MethodInfo *)0x0);
      this_00 = (CullingSubscriberDynamic *)func_?();
      CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                (this_00,4.0,3,pGVar3,(GameObject__Array *)0x0,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberDynamic = this_00;
      func_?();
      if (pIStack_4 == (Il2CppClass *)0x0) goto code_?;
      (*(code *)pIStack_4->image[0x12].codeGenModule)();
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)uStack_6,1,(MethodInfo *)0x0);
    }
    uStack_8 = (MVCubeModelInstance__Class *)(this->fields)._._.IsVehicleDead;
    if (uStack_8 == (MVCubeModelInstance__Class *)0x0) goto code_?;
    pIVar2 = ((Il2CppClass *)uStack_8)->element_class;
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,MethodInfo__MVHoverCraft__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pIStack_4 = (Il2CppClass *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pIVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pIVar2 = (Il2CppClass *)0x0;
    if (pIStack_4 == (Il2CppClass *)0x0) {
      ((Il2CppClass *)uStack_8)->element_class = (Il2CppClass *)0x0;
code_?:
      pIStack_4 = (Il2CppClass *)&((Il2CppClass *)uStack_8)->element_class;
      uStack_8 = (MVCubeModelInstance__Class *)pIVar2;
      func_?();
      pHVar9 = MVHoverCraft_CreateHoverCraftVisualizationSettings
                         ((HoverCraftVisualization_HoverCraftVisualizationSettings *)
                          &stack0xffffffc4,this,(MethodInfo *)0x0);
      uVar10._0_1_ = pHVar9->useThruster;
      uVar10._1_3_ = *(undefined3 *)&pHVar9->field_0x1;
      fVar11 = pHVar9->thrustersSize;
      pTVar12 = (pHVar9->thrustersColor).colors;
      if ((pIStack_4 == (Il2CppClass *)0x0) ||
         ((GameObject *)pIStack_4->element_size == (GameObject *)0x0)) goto code_?;
      hoverCraftHull =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)pIStack_4->element_size,(MethodInfo *)0x0);
      maxHealthVal = (this->fields)._.maxHealth;
      vsm = (this->fields)._._.seatManager;
      health = (this->fields)._.Health;
      pTVar13 = (ThrustersColorAlphaKey__Array *)&UNK_?;
      bVar14 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
      pHVar5 = uStack_6;
      uStack_8 = (MVCubeModelInstance__Class *)CONCAT31(uStack_8._1_3_,bVar14);
      hoverCraftVisualizationSettings.thrustersSize = fVar11;
      hoverCraftVisualizationSettings.useThruster = (bool)uVar10;
      hoverCraftVisualizationSettings._1_3_ = SUB43(uVar10,1);
      hoverCraftVisualizationSettings.thrustersColor.colors._0_2_ = (int16_t)pTVar12;
      hoverCraftVisualizationSettings.thrustersColor.colors._2_2_ = (short)((uint)pTVar12 >> 0x10);
      hoverCraftVisualizationSettings.thrustersColor.alphas = pTVar13;
      HoverCraftVisualization::HoverCraftVisualization_Init
                (uStack_6,hoverCraftHull,vsm,maxHealthVal,health,bVar14,
                 hoverCraftVisualizationSettings,(MethodInfo *)0x0);
      (this->fields)._._.visualization = (VehicleVisualizationBase *)pHVar5;
      func_?();
      pTVar13 = (ThrustersColorAlphaKey__Array *)0xfffffffe;
      pcVar15 = (char *)0x0;
      iVar16 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffd4,-0x10,-2,0,(MethodInfo *)0x0);
      uVar17._0_2_ = 0;
      uVar17._2_2_ = 0;
      iVar18 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffdc,2,5,6,(MethodInfo *)0x0);
      method_00 = TypeInfo__EditableCubeModelWrapper;
      value = (EditableCubeModelWrapper *)func_?();
      uStack_8 = (MVCubeModelInstance__Class *)CONCAT22(iVar18,(undefined2)uStack_8);
      uStack_6 = (HoverCraftVisualization *)CONCAT22(iVar16,(undefined2)uStack_6);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pIVar2 = pIStack_4;
      (value->fields).cubeModelBase = (MVCubeModelInstance *)pIStack_4;
      func_?();
      uVar19._0_1_ = pIVar2->naturalAligment;
      uVar19._1_1_ = pIVar2->packingSize;
      uVar19._2_2_ = *(undefined2 *)&pIVar2->field_0xba;
      uVar19 = uVar19 | 0x10;
      pIVar2->naturalAligment = (char)uVar19;
      pIVar2->packingSize = (char)(uVar19 >> 8);
      *(short *)&pIVar2->field_0xba = (short)(uVar19 >> 0x10);
      bVar20 = cRam_? == '\0';
      pIVar2->vtable[0].methodPtr = pIVar2->vtable[0].methodPtr;
      if (bVar20) {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      value_00 = (MVCubeModelInstance__Class *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar13);
      if (value_00 == (MVCubeModelInstance__Class *)0x0) goto code_?;
      (value_00->_0).name = (char *)value;
      func_?();
      (value_00->_0).namespaze = pcVar15;
      *(undefined2 *)&(value_00->_0).byval_arg.data = uStack_6._2_2_;
      *(undefined4 *)((int)&(value_00->_0).byval_arg.data + 2) = uVar17;
      *(undefined2 *)&(value_00->_0).byval_arg.type = uStack_8._2_2_;
      (value_00->_0).this_arg.data.__klassIndex = 0x32;
      pMVar21 = (value->fields).cubeModelBase;
      this_02 = (Func_1_Object_ *)func_?();
      mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                (this_02,(Object *)value_00,
                 MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__,
                 (MethodInfo *)0x0);
      if (pMVar21 == (MVCubeModelInstance *)0x0) goto code_?;
      (pMVar21->fields)._._ModelingConstraintBuilder_k__BackingField =
           (Func_1_IModelingConstraint_ *)this_02;
      func_?();
      (this->fields)._.editableCubeModelWrapper = value;
      func_?();
      if ((((this->fields)._._._.blueprintData == (Dictionary_2_System_Object_System_Object_ *)0x0)
          || (bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                                ((this->fields)._._._.blueprintData,
                                 (Object *)StringLiteral_randomLeaveVehicle,&pOStack_1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                ), bVar14 == 0)) || (pOStack_1 == (Object *)0x0)) {
        return;
      }
      pOVar22 = (Object *)0x0;
      if ((Single__Class *)pOStack_1->klass == TypeInfo__System__Single) {
        pOVar22 = pOStack_1;
      }
      if (pOVar22 == (Object *)0x0) {
        return;
      }
      if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar23 = (float *)func_?();
        (this->fields).randomLeaveVehicle = *pfVar23;
        return;
      }
      goto code_?;
    }
    if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pIStack_4->image ==
        TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pIVar2 = pIStack_4;
    }
    pIVar24 = (Il2CppClass *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pIVar2 != (Il2CppClass *)0x0) {
      ((Il2CppClass *)uStack_8)->element_class = pIVar2;
      pIVar2 = (Il2CppClass *)0x0;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pIStack_4->image ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pIVar2 = pIStack_4;
      }
      value_00 = (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pIVar2 != (Il2CppClass *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    func_?();
code_?:
    pIStack_4 = (Il2CppClass *)func_?();
code_?:
    uStack_8 = value_00;
    pIStack_4 = (Il2CppClass *)func_?();
    pIVar24 = extraout_ECX;
  }
  uStack_8 = (MVCubeModelInstance__Class *)pIVar24;
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_InitializeInventory
               (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                   );
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pVVar1 = (VehicleVisualizationBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       (this_00,
                        HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                       );
    (this->fields)._._.visualization = pVVar1;
    func_?(&(this->fields)._._.visualization,pVVar1);
    pVVar1 = (this->fields)._._.visualization;
    if (pVVar1 != (VehicleVisualizationBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pVVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_OnDataUpdate
               (MVHoverCraft *this,MethodInfo *method)

{
  MVVehicleBase::MVVehicleBase_OnDataUpdate((MVVehicleBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftVisualization);
    cRam_? = '\x01';
  }
  this_00 = (HoverCraftVisualization *)(this->fields)._._.visualization;
  if (this_00 != (HoverCraftVisualization *)0x0) {
    if (((TypeInfo__HoverCraftVisualization->_1).naturalAligment <=
         (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__HoverCraftVisualization->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
      pHVar1 = MVHoverCraft_CreateHoverCraftVisualizationSettings
                         ((HoverCraftVisualization_HoverCraftVisualizationSettings *)
                          &stack0xffffffec,this,(MethodInfo *)0x0);
      HoverCraftVisualization::HoverCraftVisualization_UpdateSettings
                (this_00,*pHVar1,(MethodInfo *)0x0);
      return;
    }
    func_?(this_00,TypeInfo__HoverCraftVisualization);
  }
  MVHoverCraft_CreateHoverCraftVisualizationSettings
            ((HoverCraftVisualization_HoverCraftVisualizationSettings *)&stack0xffffffec,this,
             (MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_OnIsDeadChange
               (MVHoverCraft *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    cRam_? = '\x01';
  }
  if (isDead != (Object *)0x0) {
    pBVar1 = TypeInfo__System__Boolean;
    if ((isDead->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar2 = (char *)func_?(isDead);
    if (*pcVar2 == '\0') {
      return;
    }
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar3->downVector).x;
    uVar5 = (pVVar3->downVector).y;
    fVar6 = (pVVar3->downVector).z;
    pGVar7 = (this->fields)._._._._._.gameObject;
    if ((pGVar7 != (GameObject *)0x0) &&
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
      ppVVar10 = (Vector3__Class **)pQVar9->x;
      fVar11 = pQVar9->y;
      fVar12 = pQVar9->z;
      fVar13 = pQVar9->w;
      if (cRam_? == '\0') {
        ppVVar10 = &TypeInfo__UnityEngine__Vector3;
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = fVar11;
      rotation.x = (float)ppVVar10;
      rotation.z = fVar12;
      rotation.w = fVar13;
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffb0,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      uVar15 = pVVar14->x;
      uVar16 = pVVar14->y;
      fVar11 = (float)uVar15 + (float)uVar4;
      fVar12 = (float)uVar16 + (float)uVar5;
      fVar6 = pVVar14->z + fVar6;
      if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar17 != (PrefabPool *)0x0) {
          pPVar18 = (pPVar17->fields).particleExplosion;
          pGVar7 = (this->fields)._._._._._.gameObject;
          if ((pGVar7 != (GameObject *)0x0) &&
             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
             pTVar8 != (Transform *)0x0)) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
            uVar19 = pVVar14->x;
            uVar20 = pVVar14->y;
            fVar13 = pVVar14->z;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position_00.y = (float)uVar20 + fVar12;
            position_00.x = (float)uVar19 + fVar11;
            position_00.z = fVar13 + fVar6;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (pPVar18,position_00,40.0,10.0,2000.0,1,(ExplosionEvent *)0x0,ignoreIDs,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar7 = (this->fields)._._._._._.gameObject;
        if ((pGVar7 != (GameObject *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
          uVar21 = pVVar14->x;
          uVar22 = pVVar14->y;
          fVar13 = pVVar14->z;
          fVar23 = (float)uVar21 + fVar11;
          this_00 = (ExplosionEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          worldPosition.y = (float)uVar22 + fVar12;
          worldPosition.x = fVar23;
          worldPosition.z = fVar13 + fVar6;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                    (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar17 != (PrefabPool *)0x0) {
            pPVar18 = (pPVar17->fields).particleExplosion;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
            }
            position.z = fVar13 + fVar6;
            position.x = (float)uVar21 + fVar11;
            position.y = (float)uVar22 + fVar12;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (pPVar18,position,40.0,10.0,2000.0,0,this_00,ignoreIDs,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  isDead = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(isDead,pBVar1);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_SetupVehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVHoverCraft *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                   );
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->usingEnergy = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->storage = 0;
  __return_storage_ptr__->consumption = 0;
  if ((this->fields)._._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (this->fields)._._._.blueprintData;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    bVar2 = Extensions::Extensions_GetBool
                      (pDVar1,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pHVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
    ;
    pDVar1 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar2;
    if ((pHVar3->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pHVar3);
      pHVar3 = 
      TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings;
    }
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,StringLiteral_vehicleEnergyStorage,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMinValue,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMaxValue,0x37,(MethodInfo *)0x0);
    pHVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
    ;
    __return_storage_ptr__->storage = iVar4;
    iVar4 = Extensions::Extensions_GetClampedInt
                      ((this->fields)._._._.blueprintData,StringLiteral_vehicleEnergyConsumption,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       consumptionMinValue,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       consumptionMaxValue,6,(MethodInfo *)0x0);
    __return_storage_ptr__->consumption = iVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->storage = -1;
  return __return_storage_ptr__;
}


/* MVHoverCraft(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft__ctor
               (MVHoverCraft *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle__ctor
              ((MVSimpleOneSeatVehicle *)this,data,(pPVar1->fields).mvHoverCraftPrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x9000;
    *(undefined4 *)((int)&(this->fields)._._._._._.interactionFlags + 4) = uVar2;
    (this->fields)._._.documentationType = 0x19;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* HoverCraftVisualization get_HoverCraftVisualization() */

HoverCraftVisualization *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_get_HoverCraftVisualization
          (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftVisualization);
    cRam_? = '\x01';
  }
  pHVar1 = (HoverCraftVisualization *)(this->fields)._._.visualization;
  if (pHVar1 == (HoverCraftVisualization *)0x0) {
    return (HoverCraftVisualization *)0x0;
  }
  if (((TypeInfo__HoverCraftVisualization->_1).naturalAligment <=
       (pHVar1->klass->_1).naturalAligment) &&
     ((pHVar1->klass->_1).typeHierarchy[(TypeInfo__HoverCraftVisualization->_1).naturalAligment - 1]
      == (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
    return pHVar1;
  }
  func_?(pHVar1,TypeInfo__HoverCraftVisualization);
  pcVar2 = (code *)swi(3);
  pHVar1 = (HoverCraftVisualization *)(*pcVar2)();
  return pHVar1;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_get_IsDead
               (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.IsVehicleDead;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

