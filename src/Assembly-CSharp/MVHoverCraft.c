
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
    this_01 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                        );
    unaff_EBX = this_01;
    if (this_01 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController::SmoothCharacterController_Init
                (this_01,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
                 (MVWorldObjectClient *)this,(MethodInfo *)0x0);
      pMVar2 = (this_01->fields).controller;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar4 = (pVVar3->upVector).x;
      uVar5 = (pVVar3->upVector).y;
      if (pMVar2 != (MvCharacterController *)0x0) {
        center.y = (float)uVar5 * _UNK_?;
        center.x = (float)uVar4 * _UNK_?;
        center.z = (pVVar3->upVector).z * _UNK_?;
        MvCharacterController::MvCharacterController_Init(pMVar2,1.3,2.0,center,(MethodInfo *)0x0);
        pMVar2 = (this_01->fields).controller;
        pHVar6 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                           ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (pMVar2 != (MvCharacterController *)0x0) {
          (pMVar2->fields).IgnoreWoIds = pHVar6;
          func_?();
          pGVar1 = (this->fields)._._._._._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            this_02 = (HoverCraftMotor *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 HoverCraftMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HoverCraftMotor>__
                                );
            if (this_02 != (HoverCraftMotor *)0x0) {
              HoverCraftMotor::HoverCraftMotor_UpdateConfiguration
                        (this_02,(this->fields)._._._.blueprintData,(MethodInfo *)0x0);
              pVVar7 = (this->fields)._._.seatManager;
              if ((pVVar7 != (VehicleSeatManager *)0x0) &&
                 (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (pVVar7->fields).seats,
                 this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 )) {
                RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_00,seatID,
                                   MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                  );
                if (RVar8 != (RegexCharClass_SingleRange)0x0) {
                  unaff_EBX = *(SmoothCharacterController **)((int)RVar8 + 0x14);
                  iVar9 = func_?(unaff_EBX,TypeInfo__IVehicleCamera);
                  if (iVar9 == 0) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,
                               (MethodInfo *)0x0);
                    return (MVVehicleBase_LocalObjectsBase *)0x0;
                  }
                  pIStack_10 = TypeInfo__IVehicleCamera;
                  if (unaff_EBX == (SmoothCharacterController *)0x0) {
                    pIVar11 = (IVehicleCamera *)0x0;
                  }
                  else {
                    pIVar11 = (IVehicleCamera *)func_?(unaff_EBX,TypeInfo__IVehicleCamera);
                    if (pIVar11 == (IVehicleCamera *)0x0) goto code_?;
                  }
                  (this_02->fields)._._VehicleCamera_k__BackingField = pIVar11;
                  func_?(&(this_02->fields)._._VehicleCamera_k__BackingField,pIVar11);
                  this_03 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)
                            func_?(TypeInfo__MVHoverCraft__LocalObjectsHoverCraft);
                  unaff_EBX = (SmoothCharacterController *)0x0;
                  if (this_03 != (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)0x0) {
                    MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                    MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
                              (this_03,(MVSimpleOneSeatVehicle *)this,this_01,
                               (SimpleVehicleMotorBase *)this_02,(MethodInfo *)0x0);
                    return (MVVehicleBase_LocalObjectsBase *)this_03;
                  }
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
  func_?(unaff_EBX,pIStack_10);
  pcVar12 = (code *)swi(3);
  pMVar13 = (MVVehicleBase_LocalObjectsBase *)(*pcVar12)();
  return pMVar13;
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
  BStack_2.m_Extents.x = (pVVar6->oneVector).x;
  BStack_2.m_Extents.y = (pVVar6->oneVector).y;
  BStack_2.m_Extents.z = (pVVar6->oneVector).z * _UNK_?;
  fVar5 = BStack_2.m_Extents.x * _UNK_?;
  fVar4 = BStack_2.m_Extents.y * _UNK_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  center.z = fVar3;
  center.x = (float)(undefined4)uStack_7;
  center.y = (float)uStack_7._4_4_;
  size.y = fVar4;
  size.x = fVar5;
  size.z = BStack_2.m_Extents.z;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            (__return_storage_ptr__,center,size,(MethodInfo *)0x0);
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
  MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
            ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
  pMVar1 = MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_HoverCraftHull,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pMVar1 = (MVWorldObjectClient *)0x0;
code_?:
    pGVar2 = (this->fields)._._._._._.gameObject;
    if (((pGVar2 == (GameObject *)0x0) ||
        (this_00 = (HoverCraftVisualization *)
                   Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                             ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar2,
                              HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                             ), this_00 == (HoverCraftVisualization *)0x0)) ||
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    cVar3 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)();
    if (cVar3 == '\0') {
      pGVar2 = (this->fields)._._._._._.gameObject;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (pGVar2,
                 InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      this_01 = (CullingSubscriberDynamic *)func_?();
      if (this_01 == (CullingSubscriberDynamic *)0x0) goto code_?;
      CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                (this_01,4.0,3,pGVar2,(GameObject__Array *)0x0,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberDynamic = this_01;
      func_?();
      if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
      (*(pMVar1->klass->vtable).set_Visible.methodPtr)();
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    }
    pMVar4 = (this->fields)._._.IsVehicleDead;
    if (pMVar4 == (MVRuntimeDataVariable *)0x0) goto code_?;
    a = (pMVar4->fields).OnChange;
    this_02 = (UnityAction_1_System_Object_ *)func_?();
    if (this_02 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,MethodInfo__MVHoverCraft__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar5 = (MVCubeModelInstance *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    cubeModelBase = (MVCubeModelInstance *)0x0;
    if (pMVar5 == (MVCubeModelInstance *)0x0) {
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      pHVar6 = MVHoverCraft_CreateHoverCraftVisualizationSettings
                         ((HoverCraftVisualization_HoverCraftVisualizationSettings *)
                          &stack0xffffffc8,this,(MethodInfo *)0x0);
      uVar7._0_1_ = pHVar6->useThruster;
      uVar7._1_3_ = *(undefined3 *)&pHVar6->field_0x1;
      fVar8 = pHVar6->thrustersSize;
      pTVar9 = (pHVar6->thrustersColor).colors;
      if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
         (pGVar2 = (pMVar1->fields).gameObject, pGVar2 == (GameObject *)0x0)) goto code_?;
      hoverCraftHull =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (pGVar2,(MethodInfo *)0x0);
      maxHealthVal = (this->fields)._.maxHealth;
      vsm = (this->fields)._._.seatManager;
      health = (this->fields)._.Health;
      uVar10 = 0x56a6;
      uVar11 = 0x1028;
      bVar12 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)();
      hoverCraftVisualizationSettings.thrustersColor.alphas._2_2_ = uVar11;
      hoverCraftVisualizationSettings.thrustersColor.alphas._0_2_ = uVar10;
      hoverCraftVisualizationSettings.thrustersSize = fVar8;
      hoverCraftVisualizationSettings.useThruster = (bool)uVar7;
      hoverCraftVisualizationSettings._1_3_ = SUB43(uVar7,1);
      hoverCraftVisualizationSettings.thrustersColor.colors._0_2_ = (int16_t)pTVar9;
      hoverCraftVisualizationSettings.thrustersColor.colors._2_2_ = (short)((uint)pTVar9 >> 0x10);
      HoverCraftVisualization::HoverCraftVisualization_Init
                (this_00,hoverCraftHull,vsm,maxHealthVal,health,bVar12,
                 hoverCraftVisualizationSettings,(MethodInfo *)0x0);
      (this->fields)._._.visualization = (VehicleVisualizationBase *)this_00;
      func_?();
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffd8,-0x10,-2,0,(MethodInfo *)0x0);
      uVar13._0_2_ = 0;
      uVar13._2_2_ = 0;
      iVar14 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffe0,2,5,6,(MethodInfo *)0x0);
      this_03 = (EditableCubeModelWrapper *)func_?();
      if (this_03 == (EditableCubeModelWrapper *)0x0) goto code_?;
      max.z = iVar14;
      max.x = (int16_t)uVar13;
      max.y = SUB42(uVar13,2);
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                (this_03,cubeModelBase,(IntVector)0x32,max,0x32,(MethodInfo *)0x0);
      (this->fields)._.editableCubeModelWrapper = this_03;
      func_?();
      if ((((this->fields)._._._.blueprintData == (Dictionary_2_System_Object_System_Object_ *)0x0)
          || (pSVar15 = StringLiteral_randomLeaveVehicle,
             bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                               ((this->fields)._._._.blueprintData,
                                (Object *)StringLiteral_randomLeaveVehicle,
                                (Object **)&stack0xfffffff4,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                               ), bVar12 == 0)) || (pSVar15 == (String *)0x0)) {
        return;
      }
      pSVar16 = (String *)0x0;
      if (pSVar15->klass == (String__Class *)TypeInfo__System__Single) {
        pSVar16 = pSVar15;
      }
      if (pSVar16 == (String *)0x0) {
        return;
      }
      if ((pSVar15->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar17 = (float *)func_?();
        (this->fields).randomLeaveVehicle = *pfVar17;
        return;
      }
      goto code_?;
    }
    if (pMVar5->klass ==
        (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      cubeModelBase = pMVar5;
    }
    if (cubeModelBase != (MVCubeModelInstance *)0x0) {
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)cubeModelBase;
      cubeModelBase = (MVCubeModelInstance *)0x0;
      if (pMVar5->klass ==
          (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        cubeModelBase = pMVar5;
      }
      if (cubeModelBase != (MVCubeModelInstance *)0x0) goto code_?;
    }
  }
  else {
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelInstance__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVCubeModelInstance)) goto code_?;
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  source = (this->fields)._._._._._.gameObject;
  if (source != (GameObject *)0x0) {
    pVVar1 = (VehicleVisualizationBase *)
             Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
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
    if (((TypeInfo__HoverCraftVisualization->_1).typeHierarchyDepth <=
         (this_00->klass->_1).typeHierarchyDepth) &&
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__HoverCraftVisualization->_1).typeHierarchyDepth - 1] ==
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
    VStack_4.x = (pVVar3->downVector).x;
    VStack_4.y = (pVVar3->downVector).y;
    VStack_4.z = (pVVar3->downVector).z;
    pGVar5 = (this->fields)._._._._._.gameObject;
    if ((pGVar5 != (GameObject *)0x0) &&
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffcc,pTVar6,(MethodInfo *)0x0);
      puVar8 = (undefined *)pQVar7->x;
      ppVVar9 = (Vector3__Class **)pQVar7->y;
      fVar10 = pQVar7->z;
      fVar11 = pQVar7->w;
      if (cRam_? == '\0') {
        ppVVar9 = &TypeInfo__UnityEngine__Vector3;
        puVar8 = &UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = (float)ppVVar9;
      rotation.x = (float)puVar8;
      rotation.z = fVar10;
      rotation.w = fVar11;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffd0,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      VStack_13.x = pVVar12->x;
      VStack_13.y = pVVar12->y;
      VStack_13.z = pVVar12->z;
      fVar10 = VStack_13.x + VStack_4.x;
      fStack_14 = VStack_13.y + VStack_4.y;
      fStack_15 = VStack_13.z + VStack_4.z;
      if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar16 != (PrefabPool *)0x0) {
          particlePrefab = (pPVar16->fields).particleExplosion;
          pGVar5 = (this->fields)._._._._._.gameObject;
          if ((pGVar5 != (GameObject *)0x0) &&
             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar5,(MethodInfo *)0x0),
             pTVar6 != (Transform *)0x0)) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_4,pTVar6,(MethodInfo *)0x0);
            uVar17 = pVVar12->x;
            uVar18 = pVVar12->y;
            VStack_4.y = (float)uVar18 + fStack_14;
            VStack_4.x = (float)uVar17 + fVar10;
            VStack_4.z = pVVar12->z + fStack_15;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_00 = (ExplosionEvent *)0x0;
            local = 1;
code_?:
            position.z = VStack_4.z;
            position.x = VStack_4.x;
            position.y = VStack_4.y;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (particlePrefab,position,40.0,10.0,2000.0,local,this_00,ignoreIDs,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar5 = (this->fields)._._._._._.gameObject;
        if ((pGVar5 != (GameObject *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_13,pTVar6,(MethodInfo *)0x0);
          uVar19._0_4_ = pVVar12->x;
          uVar19._4_4_ = pVVar12->y;
          fVar11 = pVVar12->z;
          VStack_13.y = uVar19._4_4_ + fStack_14;
          VStack_13.x = (float)uVar19 + fVar10;
          VStack_13.z = fVar11 + fStack_15;
          VStack_4._0_8_ = uVar19;
          VStack_4.z = fVar11;
          this_00 = (ExplosionEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          if (this_00 != (ExplosionEvent *)0x0) {
            worldPosition.z = VStack_13.z;
            worldPosition.x = VStack_13.x;
            worldPosition.y = VStack_13.y;
            MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
            ExplosionEvent__ctor_3
                      (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__PrefabPool);
              cRam_? = '\x01';
            }
            pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
            if (pPVar16 != (PrefabPool *)0x0) {
              particlePrefab = (pPVar16->fields).particleExplosion;
              VStack_4.y = uVar19._4_4_ + fStack_14;
              VStack_4.x = (float)uVar19 + fVar10;
              VStack_4.z = fVar11 + fStack_15;
              if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
              }
              local = 0;
              goto code_?;
            }
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
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  if (((TypeInfo__HoverCraftVisualization->_1).typeHierarchyDepth <=
       (pHVar1->klass->_1).typeHierarchyDepth) &&
     ((pHVar1->klass->_1).typeHierarchy
      [(TypeInfo__HoverCraftVisualization->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
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

