
/* HoverCraftVisualization+HoverCraftVisualizationSettings CreateHoverCraftVisualizationSettings()
    */

HoverCraftVisualization_HoverCraftVisualizationSettings *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_CreateHoverCraftVisualizationSettings
          (HoverCraftVisualization_HoverCraftVisualizationSettings *__return_storage_ptr__,
          MVHoverCraft *this,MethodInfo *method)

{
  pHVar1 = __return_storage_ptr__;
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
  pTStack_2 = (ThrustersColorAlphaKey__Array *)0x0;
  pTStack_3 = (ThrustersColorAlphaKey__Array *)0x0;
  pTStack_4 = (ThrustersColorAlphaKey__Array *)0x0;
  *(undefined4 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->thrustersSize = 0.0;
  (__return_storage_ptr__->thrustersColor).colors = (ThrustersColorColorKey__Array *)0x0;
  (__return_storage_ptr__->thrustersColor).alphas = (ThrustersColorAlphaKey__Array *)0x0;
  bStack_5 = 0;
  __return_storage_ptr__._3_1_ = 1;
  bVar6 = __return_storage_ptr__._3_1_;
  __return_storage_ptr__._3_1_ = 1;
  fStack_7 = _UNK_?;
  if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftVisualization);
  }
  pTVar8 = &TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor;
  pTVar9 = pTVar8->colors;
  pTStack_10 = pTVar8->alphas;
  pDVar11 = (this->fields)._._._.blueprintData;
  TVar12 = *pTVar8;
  if (pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar11,(Object *)StringLiteral_thrustersOn,(Object **)&pTStack_2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  __return_storage_ptr__._3_1_ = bVar6;
  if ((bVar13 != 0) && (pTStack_2 != (ThrustersColorAlphaKey__Array *)0x0)) {
    pTVar14 = (ThrustersColorAlphaKey__Array *)0x0;
    if ((Boolean__Class *)pTStack_2->klass == TypeInfo__System__Boolean) {
      pTVar14 = pTStack_2;
    }
    if (pTVar14 != (ThrustersColorAlphaKey__Array *)0x0) {
      pTVar14 = pTStack_2;
      pSVar15 = (Single__Class *)TypeInfo__System__Boolean;
      if ((((Boolean__Class *)pTStack_2->klass)->_0).element_class !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pTStack_10 = pTStack_2;
      pbVar16 = (bool *)func_?();
      __return_storage_ptr__._3_1_ = *pbVar16;
    }
  }
  TVar17.alphas = pTStack_10;
  TVar17.colors = pTVar9;
  TVar12.alphas = pTStack_10;
  TVar12.colors = pTVar9;
  pDVar11 = (this->fields)._._._.blueprintData;
  if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar11,(Object *)StringLiteral_thrustersSize,(Object **)&pTStack_3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar6 != 0) && (pTStack_3 != (ThrustersColorAlphaKey__Array *)0x0)) {
      pTVar14 = (ThrustersColorAlphaKey__Array *)0x0;
      if ((Single__Class *)pTStack_3->klass == TypeInfo__System__Single) {
        pTVar14 = pTStack_3;
      }
      if (pTVar14 != (ThrustersColorAlphaKey__Array *)0x0) {
        pTVar14 = pTStack_3;
        pSVar15 = TypeInfo__System__Single;
        if ((((Single__Class *)pTStack_3->klass)->_0).element_class !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar18 = (float *)func_?(pTStack_3);
        fStack_7 = *pfVar18;
      }
    }
    pDVar11 = (this->fields)._._._.blueprintData;
    if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar11,(Object *)StringLiteral_thrustersColor,(Object **)&pTStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar6 == 0) goto code_?;
      if (pTStack_4 == (ThrustersColorAlphaKey__Array *)0x0) {
code_?:
        bVar19 = 0;
      }
      else {
        pTVar14 = (ThrustersColorAlphaKey__Array *)0x0;
        if ((Boolean__Class *)pTStack_4->klass == TypeInfo__System__Boolean) {
          pTVar14 = pTStack_4;
        }
        if (pTVar14 == (ThrustersColorAlphaKey__Array *)0x0) goto code_?;
        pTVar14 = pTStack_4;
        pSVar15 = (Single__Class *)TypeInfo__System__Boolean;
        if ((((Boolean__Class *)pTStack_4->klass)->_0).element_class !=
            (TypeInfo__System__Boolean->_0).element_class) goto code_?;
        pbVar20 = (byte *)func_?(pTStack_4);
        bStack_5 = *pbVar20;
        bVar19 = 1;
      }
      TVar12 = TVar17;
      if ((bStack_5 & bVar19) != 0) {
        TVar12 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                 ThrustersColorSerializer_Deserialize
                           ((this->fields)._._._.blueprintData,(MethodInfo *)0x0);
      }
code_?:
      pTStack_10 = TVar12.alphas;
      pTStack_21 = TVar12.colors;
      *(undefined4 *)pHVar1 = 0;
      pHVar1->thrustersSize = 0.0;
      (pHVar1->thrustersColor).colors = (ThrustersColorColorKey__Array *)0x0;
      (pHVar1->thrustersColor).alphas = (ThrustersColorAlphaKey__Array *)0x0;
      pHVar1->useThruster = __return_storage_ptr__._3_1_;
      (pHVar1->thrustersColor).colors = pTStack_21;
      pHVar1->thrustersSize = fStack_7;
      (pHVar1->thrustersColor).alphas = pTStack_10;
      func_?(&pHVar1->thrustersColor,0);
      return pHVar1;
    }
  }
  func_?();
  pTVar14 = extraout_ECX;
  pSVar15 = extraout_EDX;
code_?:
  func_?(pTVar14,pSVar15);
  pcVar22 = (code *)swi(3);
  pHVar1 = (HoverCraftVisualization_HoverCraftVisualizationSettings *)(*pcVar22)();
  return pHVar1;
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
                    ppIVar11 = &(this_03->fields)._._VehicleCamera_k__BackingField;
                    *ppIVar11 = pIVar10;
                    func_?(ppIVar11,pIVar10);
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
  pcVar12 = (code *)swi(3);
  pMVar13 = (MVVehicleBase_LocalObjectsBase *)(*pcVar12)();
  return pMVar13;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_Destroy(MVHoverCraft *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberDynamic;
  ppCVar1 = &(this->fields).cullingSubscriberDynamic;
  if (this_00 != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy(this_00,(MethodInfo *)0x0);
    *ppCVar1 = (CullingSubscriberDynamic *)0x0;
    func_?(ppCVar1,0);
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
        if (*pcVar4 == '\0' && health < fVar2) {
          pMVar5 = (MVHoverCraft *)(this->fields).randomLeaveVehicle;
          if (0.0 < (float)pMVar5) {
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
  this_04 = (CullingSubscriberDynamic *)0x0;
  MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
            ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_HoverCraftHull,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
code_?:
    pGVar2 = (this->fields)._._._._._.gameObject;
    if (((pGVar2 == (GameObject *)0x0) ||
        (this_01 = (Behaviour *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentInChildren_1
                             (pGVar2,
                              HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                             ), this_01 == (Behaviour *)0x0)) ||
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    cVar3 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
    if (cVar3 == '\0') {
      pGVar2 = (this->fields)._._._._._.gameObject;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (pGVar2,
                 InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0);
      this_04 = (CullingSubscriberDynamic *)func_?();
      CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                (this_04,4.0,3,pGVar2,(GameObject__Array *)0x0,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberDynamic = this_04;
      func_?();
      if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
      (*(code *)(pMVar1->klass->vtable).set_Visible.method)();
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                (this_01,1,(MethodInfo *)0x0);
    }
    pMVar4 = (this->fields)._._.IsVehicleDead;
    if (pMVar4 == (MVRuntimeDataVariable *)0x0) goto code_?;
    a = (pMVar4->fields).OnChange;
    this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_02,(Object *)this,MethodInfo__MVHoverCraft__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar5 = (MVCubeModelInstance *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pMVar5 == (MVCubeModelInstance *)0x0) {
      pMVar6 = (MVCubeModelInstance *)0x0;
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      pHVar7 = MVHoverCraft_CreateHoverCraftVisualizationSettings
                         ((HoverCraftVisualization_HoverCraftVisualizationSettings *)
                          &stack0xffffffc8,this,(MethodInfo *)0x0);
      uVar8._0_1_ = pHVar7->useThruster;
      uVar8._1_3_ = *(undefined3 *)&pHVar7->field_0x1;
      fVar9 = pHVar7->thrustersSize;
      pTVar10 = (pHVar7->thrustersColor).colors;
      if ((pMVar6 == (MVCubeModelInstance *)0x0) ||
         (pGVar2 = (pMVar6->fields)._._.gameObject, pGVar2 == (GameObject *)0x0))
      goto code_?;
      hoverCraftHull =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (pGVar2,(MethodInfo *)0x0);
      maxHealthVal = (this->fields)._.maxHealth;
      vsm = (this->fields)._._.seatManager;
      health = (this->fields)._.Health;
      pTVar11 = (ThrustersColorAlphaKey__Array *)&UNK_?;
      bVar12 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
      hoverCraftVisualizationSettings.thrustersSize = fVar9;
      hoverCraftVisualizationSettings.useThruster = (bool)uVar8;
      hoverCraftVisualizationSettings._1_3_ = SUB43(uVar8,1);
      hoverCraftVisualizationSettings.thrustersColor.colors._0_2_ = (int16_t)pTVar10;
      hoverCraftVisualizationSettings.thrustersColor.colors._2_2_ = (short)((uint)pTVar10 >> 0x10);
      hoverCraftVisualizationSettings.thrustersColor.alphas = pTVar11;
      HoverCraftVisualization::HoverCraftVisualization_Init
                ((HoverCraftVisualization *)&UNK_?,hoverCraftHull,vsm,maxHealthVal,health,
                 bVar12,hoverCraftVisualizationSettings,(MethodInfo *)0x0);
      (this->fields)._._.visualization = (VehicleVisualizationBase *)&UNK_?;
      func_?();
      uVar13._0_2_ = 0;
      uVar13._2_2_ = 0;
      iVar14 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffd8,-0x10,-2,0,(MethodInfo *)0x0);
      uVar15._0_2_ = 0;
      uVar15._2_2_ = 0;
      iVar16 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffe0,2,5,6,(MethodInfo *)0x0);
      this_03 = (EditableCubeModelWrapper *)func_?();
      min.z = iVar14;
      min.x = (int16_t)uVar13;
      min.y = SUB42(uVar13,2);
      max.z = iVar16;
      max.x = (int16_t)uVar15;
      max.y = SUB42(uVar15,2);
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                (this_03,pMVar6,min,max,0x32,(MethodInfo *)0x0);
      (this->fields)._.editableCubeModelWrapper = this_03;
      func_?();
      this_00 = (this->fields)._._._.blueprintData;
      if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         ((bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                             (this_00,(Object *)StringLiteral_randomLeaveVehicle,
                              (Object **)&stack0xffffffec,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                             ), bVar12 == 0 || (this_04 == (CullingSubscriberDynamic *)0x0)))) {
        return;
      }
      pCVar17 = (CullingSubscriberDynamic *)0x0;
      if ((Single__Class *)this_04->klass == TypeInfo__System__Single) {
        pCVar17 = this_04;
      }
      if (pCVar17 == (CullingSubscriberDynamic *)0x0) {
        return;
      }
      if ((((Single__Class *)this_04->klass)->_0).element_class ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar18 = (float *)func_?();
        (this->fields).randomLeaveVehicle = *pfVar18;
        return;
      }
      goto code_?;
    }
    pMVar6 = (MVCubeModelInstance *)0x0;
    if (pMVar5->klass ==
        (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar6 = pMVar5;
    }
    if (pMVar6 != (MVCubeModelInstance *)0x0) {
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pMVar6;
      pMVar6 = (MVCubeModelInstance *)0x0;
      if (pMVar5->klass ==
          (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar6 = pMVar5;
      }
      if (pMVar6 != (MVCubeModelInstance *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    bVar19 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar19 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar19 - 1] ==
        TypeInfo__MVCubeModelInstance)) goto code_?;
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
    ppVVar2 = &(this->fields)._._.visualization;
    *ppVVar2 = pVVar1;
    func_?(ppVVar2,pVVar1);
    if (*ppVVar2 != (VehicleVisualizationBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)*ppVVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    bVar1 = (TypeInfo__HoverCraftVisualization->_1).naturalAligment;
    if ((bVar1 <= (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy[bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
      pHVar2 = MVHoverCraft_CreateHoverCraftVisualizationSettings
                         ((HoverCraftVisualization_HoverCraftVisualizationSettings *)
                          &stack0xffffffec,this,(MethodInfo *)0x0);
      HoverCraftVisualization::HoverCraftVisualization_UpdateSettings
                (this_00,*pHVar2,(MethodInfo *)0x0);
      return;
    }
    func_?(this_00,TypeInfo__HoverCraftVisualization);
  }
  MVHoverCraft_CreateHoverCraftVisualizationSettings
            ((HoverCraftVisualization_HoverCraftVisualizationSettings *)&stack0xffffffec,this,
             (MethodInfo *)0x0);
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  pDVar1 = (this->fields)._._._.blueprintData;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    bVar2 = Extensions::Extensions_GetBool
                      (pDVar1,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pDVar1 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar2;
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings->_1
        ).cctor_finished_or_no_cctor == 0) {
      func_?(
                     TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                     );
    }
    iVar3 = Extensions::Extensions_GetClampedInt
                      (pDVar1,StringLiteral_vehicleEnergyStorage,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).storageMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).storageMaxValue,0x37
                       ,(MethodInfo *)0x0);
    __return_storage_ptr__->storage = iVar3;
    iVar3 = Extensions::Extensions_GetClampedInt
                      ((this->fields)._._._.blueprintData,StringLiteral_vehicleEnergyConsumption,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue,
                       6,(MethodInfo *)0x0);
    __return_storage_ptr__->consumption = iVar3;
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
    return pHVar1;
  }
  bVar2 = (TypeInfo__HoverCraftVisualization->_1).naturalAligment;
  if ((bVar2 <= (pHVar1->klass->_1).naturalAligment) &&
     ((pHVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
      (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
    return pHVar1;
  }
  func_?(pHVar1,TypeInfo__HoverCraftVisualization);
  pcVar3 = (code *)swi(3);
  pHVar1 = (HoverCraftVisualization *)(*pcVar3)();
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

