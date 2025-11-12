
/* HoverCraftVisualization+HoverCraftVisualizationSettings CreateHoverCraftVisualizationSettings()
    */

HoverCraftVisualization_HoverCraftVisualizationSettings *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_CreateHoverCraftVisualizationSettings
          (HoverCraftVisualization_HoverCraftVisualizationSettings *__return_storage_ptr__,
          MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_thrustersSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  pOVar2 = (Object *)0x0;
  pOStackX_8 = (Object *)0x0;
  apOStackX_10[0] = (Object *)0x0;
  __return_storage_ptr__->useThruster = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->thrustersSize = 0.0;
  (__return_storage_ptr__->thrustersColor).colors = (ThrustersColorColorKey__Array *)0x0;
  (__return_storage_ptr__->thrustersColor).alphas = (ThrustersColorAlphaKey__Array *)0x0;
  bVar3 = 0;
  bVar4 = 1;
  pOStackX_20 = (Object *)0x0;
  if (*(int *)&(TypeInfo__HoverCraftVisualization->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HoverCraftVisualization);
  }
  pHVar5 = TypeInfo__HoverCraftVisualization->static_fields;
  uVar6 = *(undefined4 *)&(pHVar5->DefaultThrustersColor).colors;
  uVar7 = *(undefined4 *)((longlong)&(pHVar5->DefaultThrustersColor).colors + 4);
  uVar8 = *(undefined4 *)&(pHVar5->DefaultThrustersColor).alphas;
  uVar9 = *(undefined4 *)((longlong)&(pHVar5->DefaultThrustersColor).alphas + 4);
  bVar10 = 0;
  if ((this->fields)._._._.blueprintData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->field_0x3 = 0;
    bVar11 = iRam_? != 0;
    __return_storage_ptr__->thrustersSize = fVar1;
    __return_storage_ptr__->useThruster = bVar4;
    *(undefined4 *)&(__return_storage_ptr__->thrustersColor).colors = uVar6;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->thrustersColor).colors + 4) = uVar7;
    *(undefined4 *)&(__return_storage_ptr__->thrustersColor).alphas = uVar8;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->thrustersColor).alphas + 4) = uVar9;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&__return_storage_ptr__->thrustersColor >> 0xc);
      uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      do {
        uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    return __return_storage_ptr__;
  }
  bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((this->fields)._._._.blueprintData,(Object *)StringLiteral_thrustersOn,
                     &pOStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if ((bVar16 != 0) && (pOStackX_8 != (Object *)0x0)) {
    pOVar17 = pOVar2;
    if (pOStackX_8->klass == pORam0000000182db23f8) {
      pOVar17 = pOStackX_8;
    }
    if (pOVar17 != (Object *)0x0) {
      if ((pOStackX_8->klass->_0).element_class != (pORam0000000182db23f8->_0).element_class) {
        FUN_?(pOStackX_8);
        pcVar18 = (code *)swi(3);
        pHVar19 = (HoverCraftVisualization_HoverCraftVisualizationSettings *)(*pcVar18)();
        return pHVar19;
      }
      bVar4 = *(bool *)&pOStackX_8[1].klass;
    }
  }
  pDVar20 = (this->fields)._._._.blueprintData;
  if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar20,(Object *)StringLiteral_thrustersSize,apOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar16 != 0) && (apOStackX_10[0] != (Object *)0x0)) {
      pOVar17 = pOVar2;
      if (apOStackX_10[0]->klass == pORam0000000182db2448) {
        pOVar17 = apOStackX_10[0];
      }
      if (pOVar17 != (Object *)0x0) {
        if ((apOStackX_10[0]->klass->_0).element_class != (pORam0000000182db2448->_0).element_class)
        {
          FUN_?(apOStackX_10[0]);
          pcVar18 = (code *)swi(3);
          pHVar19 = (HoverCraftVisualization_HoverCraftVisualizationSettings *)(*pcVar18)();
          return pHVar19;
        }
        fVar1 = *(float *)&apOStackX_10[0][1].klass;
      }
    }
    pDVar20 = (this->fields)._._._.blueprintData;
    if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar20,(Object *)StringLiteral_thrustersColor,&pOStackX_20,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar16 != 0) {
        if (pOStackX_20 != (Object *)0x0) {
          if (pOStackX_20->klass == pORam0000000182db23f8) {
            pOVar2 = pOStackX_20;
          }
          if (pOVar2 != (Object *)0x0) {
            if ((pOStackX_20->klass->_0).element_class != (pORam0000000182db23f8->_0).element_class)
            {
              FUN_?(pOStackX_20);
              pcVar18 = (code *)swi(3);
              pHVar19 = (HoverCraftVisualization_HoverCraftVisualizationSettings *)(*pcVar18)();
              return pHVar19;
            }
            bVar3 = *(byte *)&pOStackX_20[1].klass;
            bVar10 = 1;
          }
        }
        if ((bVar10 & bVar3) != 0) {
          pTVar21 = WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
                    ThrustersColorSerializer_Deserialize
                              (aTStack_22,(this->fields)._._._.blueprintData,(MethodInfo *)0x0);
          uVar6 = *(undefined4 *)&pTVar21->colors;
          uVar7 = *(undefined4 *)((longlong)&pTVar21->colors + 4);
          uVar8 = *(undefined4 *)&pTVar21->alphas;
          uVar9 = *(undefined4 *)((longlong)&pTVar21->alphas + 4);
        }
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  pHVar19 = (HoverCraftVisualization_HoverCraftVisualizationSettings *)(*pcVar18)();
  return pHVar19;
}


/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_CreateLocalObjects
          (MVHoverCraft *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  HoverCraftMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HoverCraftMotor>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IVehicleCamera);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVHoverCraft__LocalObjectsHoverCraft);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Expected_camera_type_is_VehicleC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (this_00 = (SmoothCharacterController *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                          ), this_00 != (SmoothCharacterController *)0x0)) {
    SmoothCharacterController::SmoothCharacterController_Init
              (this_00,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
               (MVWorldObjectClient *)this,(MethodInfo *)0x0);
    pMVar2 = (this_00->fields).controller;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar3 = _UNK_?;
    uVar4 = _UNK_?;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar5->upVector).x;
    fVar7 = (float)uVar6 * _UNK_?;
    fVar8 = (pVVar5->upVector).y * _UNK_?;
    fVar9 = (pVVar5->upVector).z * _UNK_?;
    if (pMVar2 != (MvCharacterController *)0x0) {
      (pMVar2->fields).center.x = fVar7;
      (pMVar2->fields).center.y = fVar8;
      (pMVar2->fields).elipsoidRadius.x = fVar3;
      (pMVar2->fields).elipsoidRadius.y = (float)uVar4;
      (pMVar2->fields).centerBase.x = fVar7;
      (pMVar2->fields).centerBase.y = fVar8;
      (pMVar2->fields).centerBase.z = fVar9;
      (pMVar2->fields).center.z = fVar9;
      (pMVar2->fields).elipsoidRadius.z = fVar3;
      fVar8 = (pMVar2->fields).elipsoidRadius.y;
      (pMVar2->fields).radiusBase.x = (pMVar2->fields).elipsoidRadius.x;
      (pMVar2->fields).radiusBase.y = fVar8;
      (pMVar2->fields).radiusBase.z = fVar3;
      pMVar2 = (this_00->fields).controller;
      pHVar10 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (pMVar2 != (MvCharacterController *)0x0) {
        bVar11 = iRam_? != 0;
        (pMVar2->fields).IgnoreWoIds = pHVar10;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(pMVar2->fields).IgnoreWoIds >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar14 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pGVar1 = (this->fields)._._._._._.gameObject;
        if ((pGVar1 != (GameObject *)0x0) &&
           (this_01 = (HoverCraftMotor *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 HoverCraftMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HoverCraftMotor>__
                                ), this_01 != (HoverCraftMotor *)0x0)) {
          HoverCraftMotor::HoverCraftMotor_UpdateConfiguration
                    (this_01,(this->fields)._._._.blueprintData,(MethodInfo *)0x0);
          pVVar16 = (this->fields)._._.seatManager;
          if ((pVVar16 != (VehicleSeatManager *)0x0) &&
             (pLVar17 = (pVVar16->fields).seats, pLVar17 != (List_1_VehicleSeatBase_ *)0x0)) {
            if ((uint)(pLVar17->fields)._size <= (uint)seatID) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar18 = (code *)swi(3);
              pMVar19 = (MVVehicleBase_LocalObjectsBase *)(*pcVar18)();
              return pMVar19;
            }
            pVVar20 = (pLVar17->fields)._items;
            if (pVVar20 != (VehicleSeatBase__Array *)0x0) {
              if ((uint)pVVar20->max_length <= (uint)seatID) {
                FUN_?();
                pcVar18 = (code *)swi(3);
                pMVar19 = (MVVehicleBase_LocalObjectsBase *)(*pcVar18)();
                return pMVar19;
              }
              if (pVVar20->vector[seatID] != (VehicleSeatBase *)0x0) {
                pMVar21 = (pVVar20->vector[seatID]->fields).seatCamera;
                lVar22 = FUN_?(pMVar21);
                pIVar23 = TypeInfo__IVehicleCamera;
                if (lVar22 == 0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,
                             (MethodInfo *)0x0);
                  this_02 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)0x0;
                }
                else {
                  if (pMVar21 == (MVCameraBase *)0x0) {
                    pIVar24 = (IVehicleCamera *)0x0;
                  }
                  else {
                    pIVar24 = (IVehicleCamera *)FUN_?(pMVar21,TypeInfo__IVehicleCamera);
                    if (pIVar24 == (IVehicleCamera *)0x0) {
                      FUN_?(pMVar21,pIVar23);
                      pcVar18 = (code *)swi(3);
                      pMVar19 = (MVVehicleBase_LocalObjectsBase *)(*pcVar18)();
                      return pMVar19;
                    }
                  }
                  bVar11 = iRam_? != 0;
                  (this_01->fields)._._VehicleCamera_k__BackingField = pIVar24;
                  if (bVar11) {
                    uVar12 = (uint)((ulonglong)&(this_01->fields)._._VehicleCamera_k__BackingField
                                   >> 0xc);
                    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
                    do {
                      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                      LOCK();
                      bVar11 = uVar14 == *puVar15;
                      if (bVar11) {
                        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar11);
                  }
                  this_02 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)
                            FUN_?(TypeInfo__MVHoverCraft__LocalObjectsHoverCraft);
                  MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                  MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
                            (this_02,(MVSimpleOneSeatVehicle *)this,this_00,
                             (SimpleVehicleMotorBase *)this_01,(MethodInfo *)0x0);
                }
                return (MVVehicleBase_LocalObjectsBase *)this_02;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  pMVar19 = (MVVehicleBase_LocalObjectsBase *)(*pcVar18)();
  return pMVar19;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_Destroy(MVHoverCraft *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
              ((this->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberDynamic >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
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
    woList = MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
    pBVar1 = MVGroup::MVGroup_ComputeBoundsForWOs
                        (aBStack_2,woList,boundsContext,(MethodInfo *)0x0);
    fVar3 = (pBVar1->m_Center).y;
    uVar4 = *(undefined8 *)&(pBVar1->m_Center).z;
    fVar5 = (pBVar1->m_Extents).y;
    fVar6 = (pBVar1->m_Extents).z;
    (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar3;
    *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar4;
    (__return_storage_ptr__->m_Extents).y = fVar5;
    (__return_storage_ptr__->m_Extents).z = fVar6;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar7->zeroVector).x;
  fVar6 = (pVVar7->zeroVector).y;
  fVar3 = (pVVar7->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar8 = _UNK_?;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar7->oneVector).y;
  fVar10 = (pVVar7->oneVector).z;
  uVar11 = (pVVar7->oneVector).x;
  fVar12 = (float)uVar11 * TypeRef__System__Activator__T._0_4_;
  (__return_storage_ptr__->m_Center).x = fVar5;
  (__return_storage_ptr__->m_Center).y = fVar6;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = fVar12 * fVar8;
  (__return_storage_ptr__->m_Extents).y = (fVar9 + fVar9) * fVar8;
  (__return_storage_ptr__->m_Extents).z = (fVar10 + fVar10) * fVar8;
  return __return_storage_ptr__;
}


/* MVVehicleBase+HealthChangeAffects HealthChangeResult(Single) */

MVVehicleBase_HealthChangeAffects
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_HealthChangeResult
          (MVHoverCraft *this,float health,MethodInfo *method)

{
  pMVar1 = (this->fields)._._.IsVehicleDead;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((pMVar1->fields).value,(MethodInfo *)0x0);
    fVar3 = (this->fields)._.previousHealth;
    (this->fields)._.previousHealth = health;
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar4 = (code *)swi(3);
        MVar5 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
        return MVar5;
      }
      MStackX_8.causeVehicleDestruction = false;
      if ((*(char *)&pOVar2[1].klass != '\0' || fVar3 <= health) ||
         (fVar3 = (this->fields).randomLeaveVehicle, fVar3 <= 0.0)) {
        if (health <= 0.0) {
          pMVar1 = (this->fields)._._.IsVehicleDead;
          if (pMVar1 == (MVRuntimeDataVariable *)0x0) goto code_?;
          pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar1->fields).value,(MethodInfo *)0x0);
          if (pOVar2 == (Object *)0x0) goto code_?;
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar2,lRam_?);
            pcVar4 = (code *)swi(3);
            MVar5 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
            return MVar5;
          }
          MStackX_8.causeVehicleDestruction = *(char *)&pOVar2[1].klass == '\0';
        }
        MStackX_8.detachAvatar = MStackX_8.causeVehicleDestruction;
      }
      else {
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (_UNK_? < fVar3) {
          fVar3 = _UNK_?;
        }
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                          (0.0,_UNK_?,(MethodInfo *)0x0);
        MStackX_8.causeVehicleDestruction = health <= 0.0;
        MStackX_8.detachAvatar = fVar6 <= fVar3;
      }
      return MStackX_8;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  MVar5 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
  return MVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_Initialize
               (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberDynamic);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVHoverCraft__OnIsDeadChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_randomLeaveVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HoverCraftHull);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance *)0x0;
  apMStack_2[0] = (MVCubeModelInstance *)0x0;
  MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
            ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
  pMVar3 = (MVCubeModelInstance *)
            MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_HoverCraftHull,(MethodInfo *)0x0);
  pMVar4 = 
  HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
  ;
  pMVar5 = pMVar1;
  if (pMVar3 != (MVCubeModelInstance *)0x0) {
    bVar6 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar6) ||
       (pMVar5 = pMVar3,
       (MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
       TypeInfo__MVCubeModelInstance)) {
      FUN_?(pMVar3);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pGVar8 = (this->fields)._._._._._.gameObject;
  if (pGVar8 != (GameObject *)0x0) {
    if ((
        HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                   );
    }
    this_00 = (HoverCraftVisualization *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar8,0,((pMVar4->field7_0x38).rgctx_data)->method);
    if ((this_00 != (HoverCraftVisualization *)0x0) &&
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
      cVar9 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)
                        (this,(this->klass->vtable).get_IsInSpawner.method);
      if (cVar9 == '\0') {
        pGVar8 = (this->fields)._._._._._.gameObject;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                  (pGVar8,
                   InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                  );
        uVar10 = 0;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        this_01 = (CullingSubscriberDynamic *)FUN_?(TypeInfo__CullingSubscriberDynamic);
        CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                  (this_01,_UNK_?,3,pGVar8,(GameObject__Array *)0x0,0,(MethodInfo *)0x0);
        bVar11 = iRam_? != 0;
        (this->fields).cullingSubscriberDynamic = this_01;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(this->fields).cullingSubscriberDynamic >> 0xc);
          uVar10 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar13 == *puVar14;
            if (bVar11) {
              *puVar14 = uVar13 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        if (pMVar5 == (MVCubeModelInstance *)0x0) goto code_?;
        (*(pMVar5->klass->vtable).set_Visible.methodPtr)(pMVar5,CONCAT71((int7)(uVar10 >> 8),1));
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,1,(MethodInfo *)0x0);
      }
      pMVar15 = (this->fields)._._.IsVehicleDead;
      if (pMVar15 != (MVRuntimeDataVariable *)0x0) {
        a = (pMVar15->fields).OnChange;
        this_02 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)this,MethodInfo__MVHoverCraft__OnIsDeadChange_System__Object_,
                   (MethodInfo *)0x0);
        pMVar3 = (MVCubeModelInstance *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pMVar3 == (MVCubeModelInstance *)0x0) {
          (pMVar15->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          pMVar16 = pMVar1;
          if (pMVar3->klass ==
              (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar16 = pMVar3;
          }
          if (pMVar16 == (MVCubeModelInstance *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (pMVar15->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pMVar16;
          pMVar16 = pMVar1;
          if (pMVar3->klass ==
              (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar16 = pMVar3;
          }
          if (pMVar16 == (MVCubeModelInstance *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)&(pMVar15->fields).OnChange >> 0xc);
          uVar10 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar13 == *puVar14;
            if (bVar11) {
              *puVar14 = uVar13 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pHVar17 = MVHoverCraft_CreateHoverCraftVisualizationSettings
                            (aHStack_18,this,(MethodInfo *)0x0);
        aHStack_18[0].thrustersColor.alphas = (pHVar17->thrustersColor).alphas;
        aHStack_18[0].useThruster = pHVar17->useThruster;
        aHStack_18[0]._1_3_ = *(undefined3 *)&pHVar17->field_0x1;
        aHStack_18[0].thrustersSize = pHVar17->thrustersSize;
        aHStack_18[0].thrustersColor.colors = (pHVar17->thrustersColor).colors;
        if ((pMVar5 != (MVCubeModelInstance *)0x0) &&
           (pGVar8 = (pMVar5->fields)._._.gameObject, pGVar8 != (GameObject *)0x0)) {
          hoverCraftHull =
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar8,(MethodInfo *)0x0);
          vsm = (this->fields)._._.seatManager;
          maxHealthVal = (this->fields)._.maxHealth;
          health = (this->fields)._.Health;
          bVar19 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)
                            (this,(this->klass->vtable).get_IsInSpawner.method);
          HoverCraftVisualization::HoverCraftVisualization_Init
                    (this_00,hoverCraftHull,vsm,maxHealthVal,health,bVar19,aHStack_18,
                     (MethodInfo *)0x0);
          bVar11 = iRam_? != 0;
          (this->fields)._._.visualization = (VehicleVisualizationBase *)this_00;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&(this->fields)._._.visualization >> 0xc);
            uVar10 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar13 == *puVar14;
              if (bVar11) {
                *puVar14 = uVar13 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          this_03 = (EditableCubeModelWrapper *)FUN_?(TypeInfo__EditableCubeModelWrapper);
          bVar11 = iRam_? != 0;
          (this_03->fields).cubeModelBase = pMVar5;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&this_03->fields >> 0xc);
            uVar10 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar13 == *puVar14;
              if (bVar11) {
                *puVar14 = uVar13 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          piVar20 = &(pMVar5->fields)._._.interactionFlags;
          *piVar20 = *piVar20 | 0x10;
          IStackX_18.x = 2;
          IStackX_18.y = 5;
          aIStack_21[0].z = -5;
          IStackX_18.z = 6;
          uStackX_20 = 0xfffefff0;
          aIStack_21[0].x = -0x10;
          aIStack_21[0].y = -2;
          EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
                    (this_03,aIStack_21,&IStackX_18,0x32,(MethodInfo *)0x0);
          bVar11 = iRam_? != 0;
          (this->fields)._.editableCubeModelWrapper = this_03;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&(this->fields)._.editableCubeModelWrapper >> 0xc);
            uVar10 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar13 == *puVar14;
              if (bVar11) {
                *puVar14 = uVar13 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          if ((((this->fields)._._._.blueprintData !=
                (Dictionary_2_System_Object_System_Object_ *)0x0) &&
              (bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                                 ((this->fields)._._._.blueprintData,
                                  (Object *)StringLiteral_randomLeaveVehicle,(Object **)apMStack_2,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                 ), bVar19 != 0)) && (apMStack_2[0] != (MVCubeModelInstance *)0x0))
          {
            if (apMStack_2[0]->klass == pMRam0000000182db2448) {
              pMVar1 = apMStack_2[0];
            }
            if (pMVar1 != (MVCubeModelInstance *)0x0) {
              if ((apMStack_2[0]->klass->_0).element_class !=
                  (pMRam0000000182db2448->_0).element_class) {
                FUN_?(apMStack_2[0]);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (this->fields).randomLeaveVehicle = (float)(apMStack_2[0]->fields)._._._.id;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_InitializeInventory
               (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = 
  HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
  ;
  this_00 = (this->fields)._._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   HoverCraftVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HoverCraftVisualization>__
                   );
    }
    pVVar2 = (VehicleVisualizationBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    bVar3 = iRam_? != 0;
    (this->fields)._._.visualization = pVVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._._.visualization >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pVVar2 = (this->fields)._._.visualization;
    if (pVVar2 != (VehicleVisualizationBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,0,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pVVar2 == (VehicleVisualizationBase *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pvVar9 = (pVVar2->fields)._._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pVVar2,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar9,0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_OnDataUpdate
               (MVHoverCraft *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HoverCraftVisualization *)(this->fields)._._.visualization;
  if (this_00 != (HoverCraftVisualization *)0x0) {
    bVar1 = (TypeInfo__HoverCraftVisualization->_1).naturalAligment;
    if (((this_00->klass->_1).naturalAligment < bVar1) ||
       ((this_00->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
      FUN_?(this_00);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pHVar3 = MVHoverCraft_CreateHoverCraftVisualizationSettings(&HStack_4,this,(MethodInfo *)0x0);
  if (this_00 != (HoverCraftVisualization *)0x0) {
    HStack_5.useThruster = pHVar3->useThruster;
    HStack_5._1_3_ = *(undefined3 *)&pHVar3->field_0x1;
    HStack_5.thrustersSize = pHVar3->thrustersSize;
    HStack_5.thrustersColor.colors = (pHVar3->thrustersColor).colors;
    HStack_5.thrustersColor.alphas = (pHVar3->thrustersColor).alphas;
    HoverCraftVisualization::HoverCraftVisualization_UpdateSettings
              (this_00,&HStack_5,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_OnIsDeadChange
               (MVHoverCraft *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isDead == (Object *)0x0) goto code_?;
  if ((isDead->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(isDead);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)&isDead[1].klass != '\0') {
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    pGVar3 = (this->fields)._._._._._.gameObject;
    uStack_4._0_4_ = (pVVar2->downVector).x;
    uStack_4._4_4_ = (pVVar2->downVector).y;
    fVar5 = (pVVar2->downVector).z;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_7._0_4_ = 0.0;
    auStack_7._4_4_ = 0.0;
    stack0xffffffffffffff40 = 0;
    pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar8);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar10 = (float)auStack_7._8_4_ + (float)auStack_7._8_4_;
    fVar11 = (float)auStack_7._4_4_ + (float)auStack_7._4_4_;
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar12 = ((float)auStack_7._0_4_ + (float)auStack_7._0_4_) * (float)auStack_7._0_4_;
    uVar9._0_4_ = (pVVar2->forwardVector).x;
    uVar9._4_4_ = (pVVar2->forwardVector).y;
    fVar13 = ((float)auStack_7._0_4_ + (float)auStack_7._0_4_) * fStack_14;
    fVar15 = (pVVar2->forwardVector).z;
    fVar16 = (_UNK_? - (fVar10 * (float)auStack_7._8_4_ + fVar11 * (float)auStack_7._4_4_)
             ) * (float)uVar9 +
             (fVar11 * (float)auStack_7._0_4_ - fVar10 * fStack_14) * uVar9._4_4_ +
             (fVar11 * fStack_14 + fVar10 * (float)auStack_7._0_4_) * fVar15 + (float)uStack_4;
    afStackX_10[0] =
         (_UNK_? - (fVar10 * (float)auStack_7._8_4_ + fVar12)) * uVar9._4_4_ +
         (fVar10 * fStack_14 + fVar11 * (float)auStack_7._0_4_) * (float)uVar9 +
         (fVar10 * (float)auStack_7._4_4_ - fVar13) * fVar15 + uStack_4._4_4_;
    fVar5 = (fVar10 * (float)auStack_7._0_4_ - fVar11 * fStack_14) * (float)uVar9 +
             (fVar13 + fVar10 * (float)auStack_7._4_4_) * uVar9._4_4_ +
             (_UNK_? - (fVar11 * (float)auStack_7._4_4_ + fVar12)) * fVar15 + fVar5;
    auStack_7._0_8_ = uVar9;
    if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar17 == (PrefabPool *)0x0) goto code_?;
      pGVar3 = (this->fields)._._._._._.gameObject;
      particlePrefab = (pPVar17->fields).particleExplosion;
      if ((pGVar3 == (GameObject *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      fStack_18 = 0.0;
      pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar8,&uStack_4);
      fVar16 = (float)uStack_4 + fVar16;
      fVar15 = uStack_4._4_4_ + afStackX_10[0];
      fVar5 = fVar5 + fStack_18;
      if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
        FUN_?();
      }
      explosionEvent = (ExplosionEvent *)0x0;
      local = 1;
      stack0xffffffffffffff40 = CONCAT44(fStack_14,fVar5);
      auStack_7._4_4_ = fVar15;
      auStack_7._0_4_ = fVar16;
    }
    else {
      pGVar3 = (this->fields)._._._._._.gameObject;
      if ((pGVar3 == (GameObject *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0)) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      fStack_18 = 0.0;
      pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar8,&uStack_4);
      explosionEvent =
           (ExplosionEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)
      ;
      fVar12 = fStack_18;
      fVar15 = afStackX_10[0];
      fVar10 = (float)uStack_4;
      fVar11 = uStack_4._4_4_;
      auStack_7._0_4_ = (float)uStack_4 + fVar16;
      (explosionEvent->fields)._._RuntimeEventType_k__BackingField = 3;
      auStack_7._4_4_ = uStack_4._4_4_ + afStackX_10[0];
      stack0xffffffffffffff40 = CONCAT44(fStack_14,fVar5 + fStack_18);
      pIVar19 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_WorldPosToFineGrainedLocalPos
                         ((IntVector *)afStackX_10,(Vector3 *)auStack_7,(MethodInfo *)0x0);
      bVar20 = cRam_? == '\0';
      iVar21 = pIVar19->y;
      iVar22 = pIVar19->z;
      (explosionEvent->fields)._.position.x = pIVar19->x;
      (explosionEvent->fields)._.position.y = iVar21;
      (explosionEvent->fields)._.position.z = iVar22;
      if (bVar20) {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        fVar10 = (float)uStack_4;
        fVar11 = uStack_4._4_4_;
        fVar12 = fStack_18;
      }
      pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar17 == (PrefabPool *)0x0) goto code_?;
      particlePrefab = (pPVar17->fields).particleExplosion;
      if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
        FUN_?();
      }
      local = 0;
      stack0xffffffffffffff40 = CONCAT44(fStack_14,fVar5 + fVar12);
      auStack_7._4_4_ = fVar11 + fVar15;
      auStack_7._0_4_ = fVar10 + fVar16;
    }
    SharedWorldObjectGameplayFunctions+Explosion::
    SharedWorldObjectGameplayFunctions_Explosion_Explode
              (particlePrefab,(Vector3 *)auStack_7,_UNK_?,_UNK_?,_UNK_?,
               local,explosionEvent,ignoreIDs,(MethodInfo *)0x0);
  }
  return;
}


/* VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_SetupVehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVHoverCraft *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->usingEnergy = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->storage = 0;
  __return_storage_ptr__->consumption = 0;
  if ((this->fields)._._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (this->fields)._._._.blueprintData;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = Extensions::Extensions_GetBool
                      (pDVar1,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pHVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
    ;
    pDVar1 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar2;
    if (*(int *)&(pHVar3->_1).field_0x1c == 0) {
      FUN_?(pHVar3);
      pHVar3 = 
      TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings;
    }
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,StringLiteral_vehicleEnergyStorage,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMinValue,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMaxValue,0x37,(MethodInfo *)0x0);
    key = StringLiteral_vehicleEnergyConsumption;
    pDVar1 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->storage = iVar4;
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,key,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue,
                       6,(MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVVehicleBase::MVVehicleBase__ctor
              ((MVVehicleBase *)this,data,(ObjectPrefab *)(pPVar1->fields).mvHoverCraftPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._._._._.interactionFlags;
    *piVar2 = *piVar2 | 0x9000;
    (this->fields)._._.documentationType = 0x19;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* HoverCraftVisualization get_HoverCraftVisualization() */

HoverCraftVisualization *
Assembly-CSharp.dll::MVHoverCraft::MVHoverCraft_get_HoverCraftVisualization
          (MVHoverCraft *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HoverCraftVisualization *)(this->fields)._._.visualization;
  if (pHVar1 != (HoverCraftVisualization *)0x0) {
    bVar2 = (TypeInfo__HoverCraftVisualization->_1).naturalAligment;
    if (((pHVar1->klass->_1).naturalAligment < bVar2) ||
       ((pHVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__HoverCraftVisualization)) {
      FUN_?(pHVar1,TypeInfo__HoverCraftVisualization);
      pcVar3 = (code *)swi(3);
      pHVar1 = (HoverCraftVisualization *)(*pcVar3)();
      return pHVar1;
    }
  }
  return pHVar1;
}

