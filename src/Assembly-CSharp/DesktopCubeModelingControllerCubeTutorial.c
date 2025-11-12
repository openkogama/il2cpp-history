
/* Void DeactivateAllToolButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  pGVar1 = (this->fields).cubeTool;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).paintTool;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).deleteTool;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_Initialize
               (DesktopCubeModelingControllerCubeTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).materialsController = materialsController;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).materialsController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cubeModelingStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cubeModelingStateMachine != (CubeModelingStateMachine *)0x0) {
    uVar7 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                      (cubeModelingStateMachine,(MethodInfo *)0x0);
    pDVar8 = (this->fields).desktopCubeModelingController;
    (this->fields).defaultMaterial = uVar7;
    if (pDVar8 != (DesktopCubeModelingToolsController *)0x0) {
      bVar6 = iRam_? != 0;
      (pDVar8->fields).cubeModelingStateMachine = cubeModelingStateMachine;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)&(pDVar8->fields).cubeModelingStateMachine >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      this_00 = (UnityAction_2_System_Object_System_Int32_ *)
                FUN_?(
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
      UnityAction_2_System_Object_System_Int32___ctor
                (this_00,(Object *)this,
                 MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 ,(MethodInfo *)0x0);
      FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
                ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                  *)this_00,(MethodInfo *)0x0);
      if (materialsController != (MaterialsController *)0x0) {
        pUVar9 = (materialsController->fields).materialChange;
        pDVar10 = (Delegate *)
                 FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
        FUN_?(pDVar10,this);
        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar9,pDVar10,(MethodInfo *)0x0);
        pUVar11 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
        if (pDVar10 == (Delegate *)0x0) {
          (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
        }
        else {
          pUVar9 = (UnityAction_1_System_Byte_ *)
                   FUN_?(pDVar10,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
          if (pUVar9 == (UnityAction_1_System_Byte_ *)0x0) {
            FUN_?(pDVar10,pUVar11);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (materialsController->fields).materialChange = pUVar9;
          pUVar11 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
          lVar3 = FUN_?(pDVar10,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
          if (lVar3 == 0) {
            FUN_?(pDVar10,pUVar11);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(materialsController->fields).materialChange >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pUVar13 = (materialsController->fields).materialsPop;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,
                   MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
                   (MethodInfo *)0x0);
        pUVar13 = (UnityAction *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar13,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pUVar13 == (UnityAction *)0x0) {
          (materialsController->fields).materialsPop = (UnityAction *)0x0;
        }
        else {
          pUVar14 = (UnityAction *)0x0;
          if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar14 = pUVar13;
          }
          if (pUVar14 == (UnityAction *)0x0) {
            FUN_?(pUVar13);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (materialsController->fields).materialsPop = pUVar14;
          pUVar14 = (UnityAction *)0x0;
          if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar14 = pUVar13;
          }
          if (pUVar14 == (UnityAction *)0x0) {
            FUN_?(pUVar13);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(materialsController->fields).materialsPop >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void MaterialsPop() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_MaterialsPop
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(
                       TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                       );
  bVar2 = iRam_? != 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(DesktopCubeModelingControllerCubeTutorial **)(lVar1 + 0x20) = this;
  if (bVar2) {
    uVar3 = (uint)(lVar1 + 0x20U >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (lVar1 == 0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (DesktopCubeModelingControllerCubeTutorial *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,lVar1);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_OnDestroy
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).cubeModelingStateMachine = (CubeModelingStateMachine *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cubeModelingStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_00,(MethodInfo *)0x0);
  pMVar6 = (this->fields).materialsController;
  if (pMVar6 != (MaterialsController *)0x0) {
    pUVar7 = (pMVar6->fields).materialChange;
    pDVar8 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    FUN_?(pDVar8,this);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar7,pDVar8,(MethodInfo *)0x0);
    pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    if (pDVar8 == (Delegate *)0x0) {
      (pMVar6->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
    }
    else {
      pUVar7 = (UnityAction_1_System_Byte_ *)
                FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      if (pUVar7 == (UnityAction_1_System_Byte_ *)0x0) {
        FUN_?(pDVar8,pUVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pMVar6->fields).materialChange = pUVar7;
      pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      lVar3 = FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      if (lVar3 == 0) {
        FUN_?(pDVar8,pUVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar6->fields).materialChange >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar6 = (this->fields).materialsController;
    if (pMVar6 != (MaterialsController *)0x0) {
      pUVar11 = (pMVar6->fields).materialsPop;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
                 (MethodInfo *)0x0);
      pUVar11 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pUVar11,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUVar11 == (UnityAction *)0x0) {
        (pMVar6->fields).materialsPop = (UnityAction *)0x0;
      }
      else {
        pUVar12 = (UnityAction *)0x0;
        if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar12 = pUVar11;
        }
        if (pUVar12 == (UnityAction *)0x0) {
          FUN_?(pUVar11);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pMVar6->fields).materialsPop = pUVar12;
        pUVar12 = (UnityAction *)0x0;
        if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar12 = pUVar11;
        }
        if (pUVar12 == (UnityAction *)0x0) {
          FUN_?(pUVar11);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar6->fields).materialsPop >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__FirstTimeEventManager,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pFVar13 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
      if ((pFVar13 != (FirstTimeState *)0x0) &&
         (pBVar14 = (pFVar13->fields).bitArray, pBVar14 != (BitArray *)0x0)) {
        if ((pBVar14->fields).m_length < 0x92) {
          mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                    (pBVar14,0x92,(MethodInfo *)0x0);
        }
        pBVar14 = (pFVar13->fields).bitArray;
        if (pBVar14 != (BitArray *)0x0) {
          pvVar15 = (void *)0x0;
          mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar14,0x91,1,(MethodInfo *)0x0)
          ;
          pFVar16 = TypeInfo__FirstTimeEventManager->static_fields;
          if (pFVar16->firstTimeStatePublisher !=
              (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
               *)0x0) {
            pAVar17 = pFVar16->firstTimeStatePublisher;
            pvVar15 = (pAVar17->fields)._._.method;
            (*(pAVar17->fields)._._.invoke_impl)
                      ((pAVar17->fields)._._.method_code,pFVar16->firstTimeState,0x91,pvVar15);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar18 != (MVGameControllerBase *)0x0) &&
              (pMVar19 = (pMVar18->fields).game, pMVar19 != (MVNetworkGame *)0x0)) &&
             (pMVar20 = (pMVar19->fields).operationRequests,
             pMVar20 != (MVNetworkGame_OperationRequests *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                   );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            value = (Object *)FUN_?(uRam_?,&stack0x00000008);
            if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          ->klass->rgctx_data[0x22].method;
              uVar21 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this_02,0xbf,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar15 >> 8),2),
                         method_00);
              pPVar22 = (pMVar20->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar22 != (PhotonPeer *)0x0) {
                (*(pPVar22->klass->vtable).SendOperation.methodPtr)
                          (pPVar22,CONCAT71((int7)((ulonglong)uVar21 >> 8),0x54),this_02,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar22->klass->vtable).SendOperation.method);
                return;
              }
            }
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


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_OnFirstTimeState
               (DesktopCubeModelingControllerCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (firstTimeEvent == (this->fields).exitFirstTimeEvent) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  DesktopCubeModelingControllerCubeTutorial_UpdateDelete(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar2 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar2 != (FirstTimeState *)0x0) &&
     (pBVar3 = (pFVar2->fields).bitArray, pBVar3 != (BitArray *)0x0)) {
    if (((pBVar3->fields).m_length < 0x8e) ||
       (bVar4 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar3,0x8d,(MethodInfo *)0x0), bVar4 == 0)) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar2 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar2 != (FirstTimeState *)0x0) &&
       (pBVar3 = (pFVar2->fields).bitArray, pBVar3 != (BitArray *)0x0)) {
      if ((0x7c < (pBVar3->fields).m_length) &&
         (bVar4 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (pBVar3,0x7c,(MethodInfo *)0x0), bVar4 != 0)) {
        pFVar5 = (this->fields).materialButton;
        if ((pFVar5 == (FirstTimeCubeEditFadeButtons *)0x0) ||
           (pCVar6 = (pFVar5->fields).canvasGroup, pCVar6 == (CanvasGroup *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (pCVar6->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        cVar10 = (*pcRam_?)(pvVar7);
        if ((cVar10 == '\0') && ((pFVar5->fields).doFading == 0)) {
          pFVar5 = (this->fields).materialButton;
          if ((pFVar5 == (FirstTimeCubeEditFadeButtons *)0x0) ||
             (pCVar6 = (pFVar5->fields).canvasGroup, pCVar6 == (CanvasGroup *)0x0))
          goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar6,_UNK_?,(MethodInfo *)0x0);
          pCVar6 = (pFVar5->fields).canvasGroup;
          if (pCVar6 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                    (pCVar6,1,(MethodInfo *)0x0);
        }
      }
      pGVar1 = (this->fields).paintTool;
      if (pGVar1 != (GameObject *)0x0) {
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return;
        }
        if ((this->fields).paintHasBeenActivated != 0) {
          return;
        }
        DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
        pGVar1 = (this->fields).paintTool;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          this_00 = (this->fields).desktopCubeModelingToolsController;
          (this->fields).paintHasBeenActivated = 1;
          if (this_00 != (DesktopCubeModelingToolsController *)0x0) {
            DesktopCubeModelingToolsController::
            DesktopCubeModelingToolsController_SetAllToTransparent(this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator OverRideIfDefaultMaterial() */

IEnumerator *
Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial
          (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(
                        TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                        );
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void SetMaterial(Byte) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_SetMaterial
               (DesktopCubeModelingControllerCubeTutorial *this,uint8_t materialId,
               MethodInfo *method)

{
  this_00 = (this->fields).cubeModelingStateMachine;
  if (this_00 == (CubeModelingStateMachine *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  materialId_00 =
       CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                 (this_00,(MethodInfo *)0x0);
  this_01 = (this->fields).materialsButtonImage;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_02 = (pMVar3->fields)._MaterialRepository_k__BackingField,
     this_02 != (MVMaterialRepository *)0x0)) {
    pMVar4 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_02,materialId_00,(MethodInfo *)0x0);
    if ((pMVar4 != (MVMaterial *)0x0) && (this_01 != (RawImage *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_01,(Texture *)(pMVar4->fields)._ButtonTexture_k__BackingField,
                 (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         ((pGVar5 = (pMVar3->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0 &&
          ((pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode,
           pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
           (pGVar7 = (pGVar6->fields).LaserCommands,
           pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
         )) {
        pAVar8 = (pGVar7->fields).OnCubeMaterialChanged;
        if (pAVar8 != (Action_1_Byte__1 *)0x0) {
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,materialId_00,(pAVar8->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateDelete() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_UpdateDelete
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  pGVar1 = (this->fields).deleteTool;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 != '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar6 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar6 != (FirstTimeState *)0x0) &&
       (this_00 = (pFVar6->fields).bitArray, this_00 != (BitArray *)0x0)) {
      if ((this_00->fields).m_length < 0x8f) {
        return;
      }
      bVar7 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                        (this_00,0x8e,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        return;
      }
      pGVar1 = (this->fields).cubeTool;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).paintTool;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields).deleteTool;
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            pGVar1 = (this->fields).deleteTool;
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,1,(MethodInfo *)0x0);
              this_01 = (this->fields).desktopCubeModelingToolsController;
              if (this_01 != (DesktopCubeModelingToolsController *)0x0) {
                DesktopCubeModelingToolsController::
                DesktopCubeModelingToolsController_SetAllToTransparent(this_01,(MethodInfo *)0x0);
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


/* Void UpdatePaint() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_UpdatePaint
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
    if (((pBVar2->fields).m_length < 0x8e) ||
       (bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar2,0x8d,(MethodInfo *)0x0), bVar3 == 0)) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar1 != (FirstTimeState *)0x0) &&
       (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
      if ((0x7c < (pBVar2->fields).m_length) &&
         (bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (pBVar2,0x7c,(MethodInfo *)0x0), bVar3 != 0)) {
        pFVar4 = (this->fields).materialButton;
        if ((pFVar4 == (FirstTimeCubeEditFadeButtons *)0x0) ||
           (pCVar5 = (pFVar4->fields).canvasGroup, pCVar5 == (CanvasGroup *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pCVar5->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar5,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        cVar9 = (*pcRam_?)(pvVar6);
        if ((cVar9 == '\0') && ((pFVar4->fields).doFading == 0)) {
          pFVar4 = (this->fields).materialButton;
          if ((pFVar4 == (FirstTimeCubeEditFadeButtons *)0x0) ||
             (pCVar5 = (pFVar4->fields).canvasGroup, pCVar5 == (CanvasGroup *)0x0))
          goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar5,_UNK_?,(MethodInfo *)0x0);
          pCVar5 = (pFVar4->fields).canvasGroup;
          if (pCVar5 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                    (pCVar5,1,(MethodInfo *)0x0);
        }
      }
      pGVar10 = (this->fields).paintTool;
      if (pGVar10 != (GameObject *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar10,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return;
        }
        if ((this->fields).paintHasBeenActivated != 0) {
          return;
        }
        DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
        pGVar10 = (this->fields).paintTool;
        if (pGVar10 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar10,1,(MethodInfo *)0x0);
          this_00 = (this->fields).desktopCubeModelingToolsController;
          (this->fields).paintHasBeenActivated = 1;
          if (this_00 != (DesktopCubeModelingToolsController *)0x0) {
            DesktopCubeModelingToolsController::
            DesktopCubeModelingToolsController_SetAllToTransparent(this_00,(MethodInfo *)0x0);
            return;
          }
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


/* Void <OnFirstTimeState>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_b__13_0
               (DesktopCubeModelingControllerCubeTutorial *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)this,(MethodInfo *)0x0);
  if (x != (IUIStack *)0x0) {
    cVar1 = FUN_?(5);
    if (cVar1 != '\0') {
      FUN_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

