
/* Void EnterEdit(Transform) */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_EnterEdit
               (AdvancedGhostCubeModelWrapper *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.cubeModelBase;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (pTVar2 = (pMVar1->fields)._._.transform, pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,transform,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.cubeModelBase;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pTVar2 = (pMVar1->fields)._._.transform;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar2 != (Transform *)0x0) {
        uStack_4._0_4_ = (pVVar3->zeroVector).x;
        uStack_4._4_4_ = (pVVar3->zeroVector).y;
        fStack_5 = (pVVar3->zeroVector).z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar6,&uStack_4);
        pMVar1 = (this->fields)._.cubeModelBase;
        if (pMVar1 != (MVCubeModelInstance *)0x0) {
          pTVar2 = (pMVar1->fields)._._.transform;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
          if (pTVar2 != (Transform *)0x0) {
            fStack_10 = (pQVar9->identityQuaternion).x;
            fStack_11 = (pQVar9->identityQuaternion).y;
            fStack_12 = (pQVar9->identityQuaternion).z;
            fStack_13 = (pQVar9->identityQuaternion).w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar6,&fStack_10);
            pMVar1 = (this->fields)._.cubeModelBase;
            if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
               (pGVar14 = (pMVar1->fields)._._.gameObject, pGVar14 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar14,1,(MethodInfo *)0x0);
              pMVar15 = 
              UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
              ;
              pMVar1 = (this->fields)._.cubeModelBase;
              if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
                 (pTVar2 = (pMVar1->fields)._._.transform, pTVar2 != (Transform *)0x0)) {
                if ((
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(
                               UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                               );
                }
                pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0);
                if (pGVar14 != (GameObject *)0x0) {
                  p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponents_1
                                      (pGVar14,((pMVar15->field7_0x38).rgctx_data)->method);
                  uVar16 = 0;
                  if (p_Var10 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                    pp_Var13 = p_Var10->vector;
                    while( true ) {
                      if ((int)p_Var10->max_length <= (int)uVar16) {
                        return;
                      }
                      if ((uint)p_Var10->max_length <= uVar16) {
                        FUN_?();
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      obj = (Object *)*pp_Var13;
                      if (obj == (Object *)0x0) break;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar17 = obj[1].klass;
                      if (pOVar17 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
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
                      (*pcRam_?)(pOVar17);
                      uVar16 = uVar16 + 1;
                      pp_Var13 = pp_Var13 + 1;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ExitEdit() */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
               (AdvancedGhostCubeModelWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
  pMVar1 = 
  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
  ;
  pMVar2 = (this->fields)._.cubeModelBase;
  if ((pMVar2 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar2->fields)._._.transform, this_00 != (Transform *)0x0)) {
    if ((
        UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                   );
    }
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                         (this_01,((pMVar1->field7_0x38).rgctx_data)->method);
      uVar3 = 0;
      if (p_Var4 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var8 = p_Var4->vector;
        while( true ) {
          if ((int)p_Var4->max_length <= (int)uVar3) {
            (this->fields).cubeModelIsBeingEdited = 0;
            return;
          }
          if ((uint)p_Var4->max_length <= uVar3) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          obj = (Object *)*pp_Var8;
          if (obj == (Object *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar5 = obj[1].klass;
          if (pOVar5 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pOVar5);
          uVar3 = uVar3 + 1;
          pp_Var8 = pp_Var8 + 1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine, Transform) */

bool Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_OnEnterObject
               (AdvancedGhostCubeModelWrapper *this,EditorStateMachine *e,Transform *transform,
               MethodInfo *method)

{
  (this->fields).cubeModelIsBeingEdited = 1;
  AdvancedGhostCubeModelWrapper_EnterEdit(this,transform,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,e,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)e,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar2->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    uStack_4 = 0;
    if (pMVar3 != (MVCameraBase *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_4 = 0;
      (*(pMVar3->klass->vtable).FocusOnObject.methodPtr)
                (pMVar3,(this->fields)._.cubeModelBase,TypeRef__System__Activator__T._0_4_,
                 &uStack_4,&uStack_7,(pMVar3->klass->vtable).FocusOnObject.method);
      pMVar8 = (this->fields)._.cubeModelBase;
      if (((pMVar8 != (MVCubeModelInstance *)0x0) && (e != (EditorStateMachine *)0x0)) &&
         (this_01 = (e->fields).selectionController, this_01 != (SelectionController *)0x0)) {
        value = (Object *)0x0;
        SelectionController::SelectionController_SelectWO
                  (this_01,(pMVar8->fields)._._._.id,0,1,(MethodInfo *)0x0);
        uStackX_10 = 0;
        iVar9._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
        iVar9._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
        iVar9._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
        if (iVar9 < 0) {
          if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
            value = (Object *)FUN_?(TypeInfo__EditorEvent);
            FUN_?(value + 1,&uStackX_10);
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(value + 1) >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
          }
        }
        else {
          value = (Object *)((ulonglong)uStackX_14 << 0x20);
        }
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_OnExitObject
               (AdvancedGhostCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  AdvancedGhostCubeModelWrapper_ExitEdit(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(e,(MethodInfo *)0x0);
    auStackX_10[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void SetToTransformParent() */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::
     AdvancedGhostCubeModelWrapper_SetToTransformParent
               (AdvancedGhostCubeModelWrapper *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.cubeModelBase;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (pTVar2 = (pMVar1->fields)._._.transform, pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,(this->fields).transformParent,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.cubeModelBase;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pTVar2 = (pMVar1->fields)._._.transform;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar2 != (Transform *)0x0) {
        uStack_4._0_4_ = (pVVar3->zeroVector).x;
        uStack_4._4_4_ = (pVVar3->zeroVector).y;
        fStack_5 = (pVVar3->zeroVector).z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar6,&uStack_4);
        pMVar1 = (this->fields)._.cubeModelBase;
        if (pMVar1 != (MVCubeModelInstance *)0x0) {
          pTVar2 = (pMVar1->fields)._._.transform;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
          if (pTVar2 == (Transform *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fStack_10 = (pQVar9->identityQuaternion).x;
          fStack_11 = (pQVar9->identityQuaternion).y;
          fStack_12 = (pQVar9->identityQuaternion).z;
          fStack_13 = (pQVar9->identityQuaternion).w;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar6,&fStack_10);
          return;
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AdvancedGhostCubeModelWrapper(MVCubeModelInstance, Transform) */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper__ctor
               (AdvancedGhostCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,
               Transform *transformParent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  (this->fields)._.cubeModelBase = cubeModelBase;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  iVar7 = iRam_?;
  if (cubeModelBase != (MVCubeModelInstance *)0x0) {
    piVar8 = &(cubeModelBase->fields)._._.interactionFlags;
    *piVar8 = *piVar8 | 0x10;
    (this->fields).transformParent = transformParent;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).transformParent >> 0xc);
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
    AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
    uStackX_10 = 0xfffcfff5;
    IStackX_8.x = 0xb;
    IStackX_8.y = 4;
    IStackX_8.z = 0xb;
    aIStack_9[0].x = -0xb;
    aIStack_9[0].y = -4;
    aIStack_9[0].z = -0xb;
    EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
              ((EditableCubeModelWrapper *)this,aIStack_9,&IStackX_8,0xb4,(MethodInfo *)0x0);
    if ((cubeModelBase->fields)._.chunkInstances != (ChunkInstances *)0x0) {
      plStack_10 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
      alStack_1[1] = 0;
      pplStack_11 = &plStack_10;
      plStack_12 = alStack_1;
      do {
        if (plStack_10 == (longlong *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        plVar15 = plStack_10;
        if (cVar14 == '\0') {
          alStack_1[0] = FUN_?(plStack_10,TypeInfo__System__IDisposable);
          if (alStack_1[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
          }
          return;
        }
        if (plStack_10 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        lVar3 = *plStack_10;
        uVar16 = 0;
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          do {
            if (*(IEnumerator__Class **)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar17 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) + 1) *
                        0x10 + 0x138 + lVar3);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar17 = (undefined8 *)
                 FUN_?(plStack_10,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        plVar15 = (longlong *)(*(code *)*puVar17)(plVar15,puVar17[1]);
        if (plVar15 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pKVar18 = 
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ;
        if (*(Il2CppClass **)(*plVar15 + 0x40) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
            ->_0).element_class) {
code_?:
          FUN_?(plVar15,pKVar18);
          goto code_?;
        }
        obj = (Object *)plVar15[7];
        if (obj == (Object *)0x0) {
code_?:
          plVar15 = (longlong *)FUN_?();
          goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar19 = obj[1].klass;
        if (pOVar19 == (Object__Class *)0x0) {
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          goto code_?;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20);
          goto code_?;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(pOVar19,1);
      } while( true );
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

