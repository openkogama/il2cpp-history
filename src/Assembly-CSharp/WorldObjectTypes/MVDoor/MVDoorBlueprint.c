
/* Void DeSelect() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_DeSelect
               (MVDoorBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).editableCubeModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).DeSelect.methodPtr)(pMVar1,(pMVar1->klass->vtable).DeSelect.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_Initialize
               (MVDoorBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DoorLogic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DoorCubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (MVDoor *)
            MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_DoorLogic,(MethodInfo *)0x0);
  if (pMVar1 == (MVDoor *)0x0) {
    (this->fields).doorLogic = (MVDoor *)0x0;
  }
  else {
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).doorLogic = pMVar1;
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).doorLogic >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 != (MVDoor *)0x0) {
    (pMVar1->fields)._DoorBlueprint_k__BackingField = this;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&(pMVar1->fields)._DoorBlueprint_k__BackingField >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pMVar1 = (this->fields).doorLogic;
    if (pMVar1 != (MVDoor *)0x0) {
      doorType = (pMVar1->fields).doorConfig.doorType;
      PStack_10._arg0 = (Object *)(pMVar1->fields).doorConfig.name;
      PStack_10._arg1 = *(Object **)&(pMVar1->fields).doorConfig.beginOpen;
      if ((pMVar1 != (MVDoor *)0x0) &&
         (pMVar11 = (pMVar1->fields).doorObject, pMVar11 != (MVDoorObject *)0x0)) {
        pTVar12 = (pMVar11->fields).animationRoot;
        pTVar13 = (((this->fields).doorLogic)->fields)._._.transform;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (pTVar13 != (Transform *)0x0) {
          uStack_15._0_4_ = (pVVar14->zeroVector).x;
          uStack_15._4_4_ = (pVVar14->zeroVector).y;
          fStack_16 = (pVVar14->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar17 = (pTVar13->fields)._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar17,&uStack_15);
          pMVar19 = (MVCubeModelInstance *)
                    MVBlueprintBase::MVBlueprintBase_GetChild
                              ((MVBlueprintBase *)this,StringLiteral_DoorCubeModel,(MethodInfo *)0x0
                              );
          if (pMVar19 != (MVCubeModelInstance *)0x0) {
            pMVar20 = pMVar19->klass;
            bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
            if (((pMVar20->_1).naturalAligment < bVar2) ||
               ((MVCubeModelInstance__Class *)(pMVar20->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
                TypeInfo__MVCubeModelInstance)) {
              FUN_?(pMVar19);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (*(pMVar20->vtable).set_Visible.methodPtr)
                      (pMVar19,CONCAT71((int7)((ulonglong)TypeInfo__MVCubeModelInstance >> 8),1));
            if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            pVVar21 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetEditPoints
                                (&VStack_22,doorType,(MethodInfo *)0x0);
            uVar23._0_2_ = (pVVar21->Item1).x;
            uVar23._2_2_ = (pVVar21->Item1).y;
            uVar23._4_2_ = (pVVar21->Item1).z;
            uVar24 = (pVVar21->Item2).x;
            uVar25 = (pVVar21->Item2).y;
            uVar26 = (pVVar21->Item2).z;
            uStack_27 = (undefined4)uVar23;
            iStack_28 = uVar23._4_2_;
            uStack_29 = uVar24;
            uStack_30 = uVar25;
            iStack_31 = uVar26;
            pEVar32 = (EditableCubeModelWrapper *)FUN_?(TypeInfo__EditableCubeModelWrapper);
            bVar8 = iRam_? != 0;
            (pEVar32->fields).cubeModelBase = pMVar19;
            if (bVar8) {
              uVar4 = (uint)((ulonglong)&pEVar32->fields >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar6 == *puVar7;
                if (bVar8) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            aIStackX_18[0]._0_4_ = CONCAT22(uStack_30,uStack_29);
            piVar33 = &(pMVar19->fields)._._.interactionFlags;
            *piVar33 = *piVar33 | 0x10;
            aIStackX_18[0].z = iStack_31;
            uStack_15._0_6_ = (IntVector)CONCAT24(iStack_28,uStack_27);
            EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
                      (pEVar32,(IntVector *)&uStack_15,aIStackX_18,0x14,(MethodInfo *)0x0);
            iVar9 = iRam_?;
            (this->fields).editableCubeModelWrapper = pEVar32;
            if (iVar9 != 0) {
              uVar4 = (uint)((ulonglong)&(this->fields).editableCubeModelWrapper >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar6 == *puVar7;
                if (bVar8) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
                iVar9 = iRam_?;
              } while (!bVar8);
            }
            pEVar32 = (this->fields).editableCubeModelWrapper;
            if (pEVar32 != (EditableCubeModelWrapper *)0x0) {
              (this->fields).editableCubeModel = (pEVar32->fields).cubeModelBase;
              iVar34 = 0;
              if (iVar9 != 0) {
                uVar4 = (uint)((ulonglong)&(this->fields).editableCubeModel >> 0xc);
                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                do {
                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                  LOCK();
                  bVar8 = uVar6 == *puVar7;
                  if (bVar8) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                  iVar34 = iRam_?;
                } while (!bVar8);
              }
              pMVar1 = (this->fields).doorLogic;
              if (pMVar1 != (MVDoor *)0x0) {
                (pMVar1->fields).doorModelInstance = (this->fields).editableCubeModel;
                if (iVar34 != 0) {
                  uVar4 = (uint)((ulonglong)&(pMVar1->fields).doorModelInstance >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pMVar19 = (this->fields).editableCubeModel;
                if ((pMVar19 != (MVCubeModelInstance *)0x0) &&
                   (pTVar13 = (pMVar19->fields)._._.transform, pTVar13 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            (pTVar13,pTVar12,1,(MethodInfo *)0x0);
                  pMVar19 = (this->fields).editableCubeModel;
                  if (pMVar19 != (MVCubeModelInstance *)0x0) {
                    pTVar12 = (pMVar19->fields)._._.transform;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_doorType___0__has_no_case_for_lo);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uVar35 = TypeRef__System__Activator__T._0_4_;
                    uVar36 = _UNK_?;
                    fVar37 = _UNK_?;
                    if (((doorType != DoorType__Enum_Door) &&
                        (doorType != DoorType__Enum_SlidingDoor)) &&
                       (uVar35 = _UNK_?, uVar36 = _UNK_?, fVar37 = _UNK_?,
                       doorType != DoorType__Enum_TrapDoor)) {
                      aIStackX_18[0]._0_4_ = doorType;
                      arg0 = (Object *)
                             FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType
                                           ,aIStackX_18);
                      pSVar38 = StringLiteral_doorType___0__has_no_case_for_lo;
                      PStack_39._arg0 = (Object *)0x0;
                      PStack_39._arg1 = (Object *)0x0;
                      PStack_39._arg2 = (Object *)0x0;
                      PStack_39._args = (Object__Array *)0x0;
                      mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                                (&PStack_39,arg0,(MethodInfo *)0x0);
                      PStack_10._arg0 = PStack_39._arg0;
                      PStack_10._arg1 = PStack_39._arg1;
                      PStack_10._arg2 = PStack_39._arg2;
                      PStack_10._args = PStack_39._args;
                      pSVar38 = mscorlib.dll::System::String::String_FormatHelper
                                          ((IFormatProvider *)0x0,pSVar38,&PStack_10,
                                           (MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                ((Object *)pSVar38,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      VStack_22._0_8_ =
                           *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector
                      ;
                      uVar35 = VStack_22.Item1._0_4_;
                      uVar36 = VStack_22._4_4_;
                      fVar37 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                    }
                    if (pTVar12 != (Transform *)0x0) {
                      iStack_28 = (int16_t)uVar36;
                      uStack_29 = (undefined2)((uint)uVar36 >> 0x10);
                      uStack_30 = SUB42(fVar37,0);
                      iStack_31 = (int16_t)((uint)fVar37 >> 0x10);
                      uStack_27 = uVar35;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar17 = (pTVar12->fields)._._.m_CachedPtr;
                      if (pvVar17 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar12,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
                      {
                        uVar18 = func_?(&UNK_?);
                        FUN_?(uVar18,0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcRam_? = pcVar3;
                      (*pcRam_?)(pvVar17);
                      pMVar19 = (this->fields).editableCubeModel;
                      if (pMVar19 != (MVCubeModelInstance *)0x0) {
                        MVCubeModelInstance::MVCubeModelInstance_EnableCulling
                                  (pMVar19,(MethodInfo *)0x0);
                        pMVar1 = (this->fields).doorLogic;
                        if (pMVar1 != (MVDoor *)0x0) {
                          piVar33 = &(pMVar1->fields)._._.interactionFlags;
                          *piVar33 = *piVar33 | 0x30;
                          pMVar19 = (this->fields).editableCubeModel;
                          if (pMVar19 != (MVCubeModelInstance *)0x0) {
                            piVar33 = &(pMVar19->fields)._._.interactionFlags;
                            *piVar33 = *piVar33 | 0x30;
                            pMVar1 = (this->fields).doorLogic;
                            if (pMVar1 != (MVDoor *)0x0) {
                              bVar8 = iRam_? != 0;
                              (pMVar1->fields).useInteractorData = (this->fields)._._._._.data;
                              if (bVar8) {
                                uVar4 = (uint)((ulonglong)&(pMVar1->fields).useInteractorData >>
                                               0xc);
                                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                do {
                                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                  LOCK();
                                  bVar8 = uVar6 == *puVar7;
                                  if (bVar8) {
                                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar8);
                              }
                              pMVar1 = (this->fields).doorLogic;
                              if (pMVar1 != (MVDoor *)0x0) {
                                MVDoor::MVDoor_UpdateUseInteractor(pMVar1,(MethodInfo *)0x0);
                                pMVar1 = (this->fields).doorLogic;
                                if (((pMVar1 != (MVDoor *)0x0) &&
                                    (pMVar11 = (pMVar1->fields).doorObject,
                                    pMVar11 != (MVDoorObject *)0x0)) &&
                                   ((pMVar19 = (this->fields).editableCubeModel,
                                    pMVar19 != (MVCubeModelInstance *)0x0 &&
                                    (pTVar12 = (pMVar11->fields).cube, pTVar12 != (Transform *)0x0))))
                                {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_SetParent_1
                                            (pTVar12,(pMVar19->fields)._._.transform,0,
                                             (MethodInfo *)0x0);
                                  MVDoorBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
              }
            }
            goto code_?;
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::
     MVDoorBlueprint_InitializeInventory(MVDoorBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DoorLogic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = (MVDoor *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_DoorLogic,(MethodInfo *)0x0);
  if (pMVar1 == (MVDoor *)0x0) {
    (this->fields).doorLogic = (MVDoor *)0x0;
  }
  else {
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).doorLogic = pMVar1;
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).doorLogic >> 0xc);
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
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnDataUpdate
               (MVDoorBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 == (MVDoor *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pMVar1->fields).useInteractorData = (this->fields)._._._._.data;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pMVar1->fields).useInteractorData >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 == (MVDoor *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StarRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar8 = (pMVar1->fields).useInteractor;
  if ((((pMVar1->fields).doorConfig.playersCanOpen & pUVar8 == (UseInteractor *)0x0) == 0) ||
     ((pMVar1->fields)._DoorBlueprint_k__BackingField == (MVDoorBlueprint *)0x0)) {
    if ((pMVar1->fields).doorConfig.playersCanOpen != 0) {
      if (pUVar8 != (UseInteractor *)0x0) {
        this_05 = (pUVar8->fields).useInteractorVisuals;
        goto code_?;
      }
      if ((pMVar1->fields).doorConfig.playersCanOpen != 0) {
        return;
      }
    }
    if (pUVar8 != (UseInteractor *)0x0) {
      MVDoor::MVDoor_DestroyUseInteractor(pMVar1,(MethodInfo *)0x0);
    }
  }
  else {
    pMVar9 = (pMVar1->fields).doorObject;
    wo = (pMVar1->fields)._DoorBlueprint_k__BackingField;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pGVar10 = (pMVar9->fields).useInteractionRotator;
    triggerCollider = (((pMVar1->fields).doorObject)->fields).useCollider;
    useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
    FUN_?(useFunction,pMVar1,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_);
    pUVar8 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
    UseInteractor::UseInteractor__ctor
              (pUVar8,(MVWorldObjectClient *)wo,pGVar10,0,triggerCollider,useFunction,
               (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,1,0,(MethodInfo *)0x0)
    ;
    bVar3 = iRam_? != 0;
    (pMVar1->fields).useInteractor = pUVar8;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pMVar1->fields).useInteractor >> 0xc);
      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar5;
        if (bVar3) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pTVar11 = (pMVar9->fields).triggerBoxEvents;
    pUVar8 = (pMVar1->fields).useInteractor;
    pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar12,(Object *)pUVar8,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar11 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pTVar11 = (pMVar9->fields).triggerBoxEvents;
    pUVar8 = (pMVar1->fields).useInteractor;
    pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar12,(Object *)pUVar8,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar11 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
              (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pGVar10 = (pMVar9->fields).useInteractionRotator;
    this_00 = (GameCoinLogic *)FUN_?(TypeInfo__GameCoinLogic);
    GameCoinLogic::GameCoinLogic__ctor(this_00,pGVar10,1,(MethodInfo *)0x0);
    pUVar8 = (pMVar1->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar8,(UseRequirement *)this_00,(MethodInfo *)0x0)
    ;
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pGVar10 = (pMVar9->fields).useInteractionRotator;
    this_01 = (LevelBasedUseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor(this_01,pGVar10,1,(MethodInfo *)0x0);
    pUVar8 = (pMVar1->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar8,(UseRequirement *)this_01,(MethodInfo *)0x0)
    ;
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pGVar10 = (pMVar9->fields).useInteractionRotator;
    this_02 = (StarRequirement *)FUN_?(TypeInfo__StarRequirement);
    StarRequirement::StarRequirement__ctor(this_02,pGVar10,1,(MethodInfo *)0x0);
    pUVar8 = (pMVar1->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar8,(UseRequirement *)this_02,(MethodInfo *)0x0)
    ;
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pGVar10 = (pMVar9->fields).useInteractionRotator;
    this_03 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
    GameRankRequirement::GameRankRequirement__ctor
              (this_03,pGVar10,(MVWorldObjectClient *)pMVar1,1,(MethodInfo *)0x0);
    pUVar8 = (pMVar1->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar8,(UseRequirement *)this_03,(MethodInfo *)0x0)
    ;
    pMVar9 = (pMVar1->fields).doorObject;
    if (pMVar9 == (MVDoorObject *)0x0) goto code_?;
    pGVar10 = (pMVar9->fields).useInteractionRotator;
    pIVar13 = (Il2CppClass *)
              FUN_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost);
    pMVar14 = MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__;
    bVar3 = iRam_? != 0;
    pIVar13->name =
         (char *)MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__->virtualMethodPointer;
    *(MethodInfo **)&(pIVar13->byval_arg).attrs = pMVar14;
    (pIVar13->byval_arg).data.array = (Il2CppArrayType *)pMVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&pIVar13->byval_arg >> 0xc);
      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar5;
        if (bVar3) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    uVar15 = pMVar14->parameters_count;
    pIVar13->element_class = pIVar13;
    if (((pMVar14->flags & 0x10) == 0) || (uVar15 != 0)) {
      pIVar13->element_class = (Il2CppClass *)(pIVar13->byval_arg).data;
      pcVar16 = pIVar13->name;
    }
    else {
      pcVar16 = &UNK_?;
    }
    pIVar13->namespaze = pcVar16;
    *(code **)&(pIVar13->this_arg).attrs = FUN_?;
    useRequirement = (UseRequirement *)FUN_?();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar17 = iRam_?;
    *(undefined4 *)((longlong)&useRequirement[1].monitor + 4) = 0xffffffff;
    useRequirement[1].klass = (UseRequirement__Class *)0x0;
    *(undefined4 *)&useRequirement[1].monitor = 0;
    useRequirement[2].monitor = (MonitorData *)pGVar10;
    if (iVar17 != 0) {
      uVar4 = (uint)((ulonglong)&useRequirement[2].monitor >> 0xc);
      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar5;
        if (bVar3) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar17 = iRam_?;
      } while (!bVar3);
    }
    useRequirement[3].klass = (UseRequirement__Class *)pIVar13;
    if (iVar17 != 0) {
      uVar4 = (uint)((ulonglong)(useRequirement + 3) >> 0xc);
      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar5;
        if (bVar3) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    *(bool *)&useRequirement[3].monitor = useRequirement[3].klass != (UseRequirement__Class *)0x0;
    this_04 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    value = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
            FUN_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    FUN_?(value,useRequirement);
    if (this_04 == (SpawnRoleDataMediator *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled(this_04,value,(MethodInfo *)0x0);
    useRequirement[1].klass =
         (UseRequirement__Class *)
         CONCAT44(*(float *)((longlong)&useRequirement[1].klass + 4) + _UNK_?,
                  SUB84(useRequirement[1].klass,0) + 0.0);
    *(float *)&useRequirement[1].monitor = *(float *)&useRequirement[1].monitor + 0.0;
    pUVar8 = (pMVar1->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement(pUVar8,useRequirement,(MethodInfo *)0x0);
    pUVar8 = (pMVar1->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    this_05 = (pUVar8->fields).useInteractorVisuals;
code_?:
    if (this_05 == (UseInteractorVisualization *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_05,(pMVar1->fields).useInteractorData,(pUVar8->fields).woOwnerID,
               (MethodInfo *)0x0);
  }
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnEnterObject
               (MVDoorBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).doorLogic;
  if (((pMVar1 != (MVDoor *)0x0) &&
      (pMVar2 = (pMVar1->fields).doorObject, pMVar2 != (MVDoorObject *)0x0)) &&
     (this_00 = (pMVar2->fields).cube, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      pEVar3 = (this->fields).editableCubeModelWrapper;
      if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar4 = (*(pEVar3->klass->vtable).OnEnterObject.methodPtr)
                          (pEVar3,e,(pEVar3->klass->vtable).OnEnterObject.method);
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnExitObject
               (MVDoorBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  MVDoorBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).doorLogic;
  if (((pMVar1 != (MVDoor *)0x0) &&
      (pMVar2 = (pMVar1->fields).doorObject, pMVar2 != (MVDoorObject *)0x0)) &&
     (this_00 = (pMVar2->fields).cube, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pEVar3 = (this->fields).editableCubeModelWrapper;
      if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar4 = (*(pEVar3->klass->vtable).OnExitObject.methodPtr)
                          (pEVar3,e,(pEVar3->klass->vtable).OnExitObject.method);
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_Select
               (MVDoorBlueprint *this,Color *color,MethodInfo *method)

{
  pMVar1 = (this->fields).editableCubeModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    fStack_2 = color->r;
    fStack_3 = color->g;
    fStack_4 = color->b;
    fStack_5 = color->a;
    (*(pMVar1->klass->vtable).Select_1.methodPtr)
              (pMVar1,&fStack_2,(pMVar1->klass->vtable).Select_1.method);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCubeSize() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_SetCubeSize
               (MVDoorBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).doorLogic;
  if ((pMVar1 != (MVDoor *)0x0) &&
     (pMVar2 = (pMVar1->fields).doorObject, pMVar2 != (MVDoorObject *)0x0)) {
    pMVar3 = (this->fields).editableCubeModel;
    this_00 = (pMVar2->fields).cube;
    if (pMVar3 != (MVCubeModelInstance *)0x0) {
      pBVar4 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         (&BStack_5,(MVCubeModelBase *)pMVar3,(MethodInfo *)0x0);
      BStack_6.m_Center.x = (pBVar4->m_Center).x;
      BStack_6.m_Center.y = (pBVar4->m_Center).y;
      BStack_6._8_8_ = *(undefined8 *)&(pBVar4->m_Center).z;
      uVar7._0_4_ = (pBVar4->m_Extents).y;
      uVar7._4_4_ = (pBVar4->m_Extents).z;
      if (this_00 != (Transform *)0x0) {
        VStack_8._0_8_ = BStack_6.m_Center._0_8_;
        VStack_8.z = BStack_6.m_Center.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar9 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&VStack_8);
        this_01 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)this_00,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
                            );
        if ((this_01 != (MeshFilter *)0x0) &&
           (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                               (this_01,(MethodInfo *)0x0), pMVar11 != (Mesh *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (pMVar11->fields)._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar11,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9);
          pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_01,(MethodInfo *)0x0);
          pMVar3 = (this->fields).editableCubeModel;
          if (pMVar3 != (MVCubeModelInstance *)0x0) {
            BStack_6.m_Extents._4_8_ = uVar7;
            corners = MVCubeModelInstance::MVCubeModelInstance_GetCorners
                                (pMVar3,&BStack_6,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh(pMVar11,corners,0,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVDoorBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
               (MVDoorBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x21070b100;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::
MVDoorBlueprint_get_DocumentationType(MVDoorBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 != (MVDoor *)0x0) {
    return (pMVar1->fields).doorConfig.docType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}

