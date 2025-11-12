
/* Void Awake() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Awake
               (MovableVisualization *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).prevUpdateDirtyTime = fVar3 - _UNK_?;
  return;
}


/* Void ChangeLOD(Boolean) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_ChangeLOD
               (MovableVisualization *this,bool newVisible,MethodInfo *method)

{
  if (newVisible == 0) {
    if ((this->fields).isVisible == 0) {
      return;
    }
    this_00 = (this->fields).cmbClone;
    uVar1 = 0;
  }
  else {
    if ((this->fields).isVisible != 0) {
      return;
    }
    if ((this->fields).canBeVisible == 0) {
      return;
    }
    this_00 = (this->fields).cmbClone;
    uVar1 = CONCAT71(in_register_00000011,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ,uVar1,this_00,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    }
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
    uVar3 = 0;
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var7 = p_Var3->vector;
      while( true ) {
        if ((int)p_Var3->max_length <= (int)uVar3) {
          (this->fields).isVisible = (bool)uVar1;
          return;
        }
        if ((uint)p_Var3->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        obj = (Object *)*pp_Var7;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
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
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pOVar5);
        uVar3 = uVar3 + 1;
        pp_Var7 = pp_Var7 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GameObject CreateMeshClone(MVCubeModelBase) */

GameObject *
Assembly-CSharp.dll::MovableVisualization::MovableVisualization_CreateMeshClone
          (MVCubeModelBase *cmb,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeRef__UnityEngine__MeshFilter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__clone);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)0x0;
  lStackX_18 = 0;
  if ((cmb != (MVCubeModelBase *)0x0) &&
     (pGVar2 = (cmb->fields)._.gameObject, pGVar2 != (GameObject *)0x0)) {
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar3,StringLiteral__clone,(MethodInfo *)0x0);
    pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (pGVar2,pSVar3,(MethodInfo *)0x0);
    pGStackX_20 = pGVar2;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      pTVar5 = (cmb->fields)._.transform;
      if ((pTVar5 != (Transform *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar5,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        pKVar6 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                   *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar4,pTVar5,(MethodInfo *)0x0);
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0);
        pTVar5 = (cmb->fields)._.transform;
        if (pTVar5 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            pGVar2 = (GameObject *)(*pcVar8)();
            return pGVar2;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            pGVar2 = (GameObject *)(*pcVar8)();
            return pGVar2;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar7);
          if (pTVar4 != (Transform *)0x0) {
            uStack_10 = 0;
            uStack_11 = 0;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              pGVar2 = (GameObject *)(*pcVar8)();
              return pGVar2;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              pGVar2 = (GameObject *)(*pcVar8)();
              return pGVar2;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar7);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            pTVar5 = (cmb->fields)._.transform;
            if (pTVar5 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_12 = 0;
              uStack_13 = 0;
              pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                pGVar2 = (GameObject *)(*pcVar8)();
                return pGVar2;
              }
              pcVar8 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar8 = (code *)swi(3);
                pGVar2 = (GameObject *)(*pcVar8)();
                return pGVar2;
              }
              pcRam_? = pcVar8;
              (*pcRam_?)(pvVar7);
              if (pTVar4 != (Transform *)0x0) {
                uStack_14 = uStack_12;
                uStack_15 = uStack_13;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  pGVar2 = (GameObject *)(*pcVar8)();
                  return pGVar2;
                }
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  pGVar2 = (GameObject *)(*pcVar8)();
                  return pGVar2;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(pvVar7);
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                pTVar5 = (cmb->fields)._.transform;
                if (pTVar5 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  obj = (pTVar5->fields)._._.m_CachedPtr;
                  if (obj == (Object *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    pGVar2 = (GameObject *)(*pcVar8)();
                    return pGVar2;
                  }
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    pGVar2 = (GameObject *)(*pcVar8)();
                    return pGVar2;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(obj);
                  if (pTVar4 == (Transform *)0x0) {
code_?:
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    pGVar2 = (GameObject *)(*pcVar8)();
                    return pGVar2;
                  }
                  uStack_10 = 0;
                  uStack_11 = 0;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    pGVar2 = (GameObject *)(*pcVar8)();
                    return pGVar2;
                  }
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9);
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)cmb,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(unaff_R15,(MethodInfo *)0x0);
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)cmb,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(unaff_R15,(MethodInfo *)0x0);
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)cmb,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(unaff_R15,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
                    FUN_?();
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
code_?:
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
                    plVar16 = (longlong *)FUN_?();
code_?:
                    FUN_?(plVar16,pKVar6);
code_?:
                    FUN_?();
code_?:
                    FUN_?();
                  }
                  else {
                    pcRam_? = pcVar8;
                    (*pcRam_?)(pvVar7,&uStack_10);
                    if ((cmb->fields).chunkInstances == (ChunkInstances *)0x0)
                    goto code_?;
                    aplStackX_8[0] =
                         (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
                    uStack_17 = 0;
                    pplStack_18 = aplStackX_8;
                    plStack_19 = &lStackX_18;
                    while (aplStackX_8[0] != (longlong *)0x0) {
                      cVar20 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
                      plVar16 = aplStackX_8[0];
                      if (cVar20 == '\0') {
                        lStackX_18 = FUN_?(aplStackX_8[0],TypeInfo__System__IDisposable);
                        if (lStackX_18 != 0) {
                          FUN_?(0,TypeInfo__System__IDisposable,lStackX_18);
                        }
                        exclude = (Type__Array *)FUN_?(TypeInfo__System__Type,2);
                        pIVar21 = TypeRef__UnityEngine__MeshFilter;
                        if (*(int *)(lRam_? + 0xe4) == 0) {
                          FUN_?();
                        }
                        if (pIVar21 != (Il2CppType *)0x0) {
                          if (*(int *)(lRam_? + 0xe4) == 0) {
                            FUN_?();
                          }
                          lVar22 = FUN_?(pIVar21,1);
                          pTVar1 = (Transform *)FUN_?(lVar22 + 0x20);
                        }
                        if (exclude != (Type__Array *)0x0) {
                          if ((pTVar1 != (Transform *)0x0) &&
                             (lVar22 = FUN_?(pTVar1,(exclude->klass->_0).element_class),
                             lVar22 == 0)) {
                            uVar9 = FUN_?();
                            FUN_?(uVar9,0);
                            pcVar8 = (code *)swi(3);
                            pGVar2 = (GameObject *)(*pcVar8)();
                            return pGVar2;
                          }
                          FUN_?(exclude,0,pTVar1);
                          pIVar21 = TypeRef__UnityEngine__MeshRenderer;
                          if (TypeRef__UnityEngine__MeshRenderer != (Il2CppType *)0x0) {
                            if (*(int *)(lRam_? + 0xe4) == 0) {
                              FUN_?();
                            }
                            lVar22 = FUN_?(pIVar21,1);
                            lVar22 = FUN_?(lVar22 + 0x20);
                            if ((lVar22 != 0) &&
                               (lVar22 = FUN_?(lVar22,(exclude->klass->_0).element_class),
                               lVar22 == 0)) {
                              uVar9 = FUN_?();
                              FUN_?(uVar9,0);
                              pcVar8 = (code *)swi(3);
                              pGVar2 = (GameObject *)(*pcVar8)();
                              return pGVar2;
                            }
                          }
                          FUN_?(exclude,1);
                          MovableVisualization_RemoveAllComponentsInChildrenExclude
                                    (exclude,pGVar2,(MethodInfo *)0x0);
                          return pGVar2;
                        }
                        goto code_?;
                      }
                      if (aplStackX_8[0] == (longlong *)0x0) goto code_?;
                      lVar22 = *aplStackX_8[0];
                      uVar23 = 0;
                      if (*(ushort *)(lVar22 + 0x12e) != 0) {
                        do {
                          if (*(IEnumerator__Class **)
                               (*(longlong *)(lVar22 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
                              TypeInfo__System__Collections__IEnumerator) {
                            puVar24 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar22 + 0xb0) + 8 +
                                               (ulonglong)uVar23 * 0x10) + 1) * 0x10 + 0x138 +
                                     lVar22);
                            goto code_?;
                          }
                          uVar23 = uVar23 + 1;
                        } while (uVar23 < *(ushort *)(lVar22 + 0x12e));
                      }
                      puVar24 = (undefined8 *)
                               FUN_?(aplStackX_8[0],
                                             TypeInfo__System__Collections__IEnumerator,1);
code_?:
                      plVar16 = (longlong *)(*(code *)*puVar24)(plVar16,puVar24[1]);
                      if (plVar16 == (longlong *)0x0) goto code_?;
                      pKVar6 = 
                      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                      ;
                      if (*(Il2CppClass **)(*plVar16 + 0x40) !=
                          (
                          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                          ->_0).element_class) goto code_?;
                      unaff_R15 = (Object *)plVar16[5];
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      obj = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      (unaff_R15,
                                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                      );
                      if (obj == (Object *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)obj[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      pTVar5 = (Transform *)
                               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                               Unmarshal_UnmarshalUnityObject
                                         (pvVar7,
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (pGVar2->fields)._.m_CachedPtr;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      parent = (Transform *)
                               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                               Unmarshal_UnmarshalUnityObject
                                         (pvVar7,
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                      if (pTVar5 == (Transform *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Debug);
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__RectTransform);
                        LOCK();
                        UNLOCK();
                        FUN_?(&StringLiteral_Parent_of_RectTransform_is_being);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pTVar25 = pTVar1;
                      if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)
                      {
                        pTVar25 = pTVar5;
                      }
                      if (pTVar25 != (Transform *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                                  ((Object *)StringLiteral_Parent_of_RectTransform_is_being,
                                   (Object_1 *)pTVar5,(MethodInfo *)0x0);
                      }
                      pKVar6 = (KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                                 *)0x1;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                (pTVar5,parent,1,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)obj[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      pTVar4 = (Transform *)
                               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                               Unmarshal_UnmarshalUnityObject
                                         (pvVar7,
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                      if (unaff_R15 == (Object *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)unaff_R15[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      cmb = (MVCubeModelBase *)
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                            Unmarshal_UnmarshalUnityObject
                                      (pvVar7,
                                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                      );
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pcVar26 = *(char **)&(cmb->fields)._._;
                      if (pcVar26 == (char *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pcVar26);
                      if (pTVar4 == (Transform *)0x0) goto code_?;
                      uStack_27 = 0;
                      uStack_28 = 0;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (pTVar4->fields)._._.m_CachedPtr;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      (*pcRam_?)(cmb);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)obj[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      pTVar4 = (Transform *)
                               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                               Unmarshal_UnmarshalUnityObject
                                         (pvVar7,
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)unaff_R15[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      cmb = (MVCubeModelBase *)
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                            Unmarshal_UnmarshalUnityObject
                                      (pvVar7,
                                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                      );
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_14 = 0;
                      uStack_15 = 0;
                      pcVar26 = *(char **)&(cmb->fields)._._;
                      if (pcVar26 == (char *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pcVar26);
                      if (pTVar4 == (Transform *)0x0) goto code_?;
                      uStack_29 = (undefined4)uStack_14;
                      uStack_30 = uStack_14._4_4_;
                      uStack_31 = (undefined4)uStack_15;
                      uStack_32 = uStack_15._4_4_;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (pTVar4->fields)._._.m_CachedPtr;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      (*pcRam_?)(cmb);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)obj[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      pTVar4 = (Transform *)
                               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                               Unmarshal_UnmarshalUnityObject
                                         (pvVar7,
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (MVCubeModelBase *)unaff_R15[1].klass;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      pvVar7 = (void *)(*pcRam_?)(cmb);
                      cmb = (MVCubeModelBase *)
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                            Unmarshal_UnmarshalUnityObject
                                      (pvVar7,
                                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                      );
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_10 = 0;
                      uStack_11 = 0;
                      pcVar26 = *(char **)&(cmb->fields)._._;
                      if (pcVar26 == (char *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pcVar26);
                      if (pTVar4 == (Transform *)0x0) goto code_?;
                      uStack_12 = uStack_10;
                      uStack_13 = CONCAT44(uStack_13._4_4_,uStack_11);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      cmb = (pTVar4->fields)._._.m_CachedPtr;
                      if (cmb == (MVCubeModelBase *)0x0) goto code_?;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar8;
                      (*pcRam_?)(cmb,&uStack_12);
                    }
                  }
                  FUN_?();
                  FUN_?();
                  pcVar8 = (code *)swi(3);
                  pGVar2 = (GameObject *)(*pcVar8)();
                  return pGVar2;
                }
              }
              FUN_?();
              pcVar8 = (code *)swi(3);
              pGVar2 = (GameObject *)(*pcVar8)();
              return pGVar2;
            }
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar8)();
          return pGVar2;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar8)();
  return pGVar2;
}


/* Void HandleDirty() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_HandleDirty
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isDirty != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (_UNK_? < fVar3 - (this->fields).prevUpdateDirtyTime) {
      pGVar4 = (this->fields).cmbClone;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
      pGVar4 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).cmbClone = pGVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).cmbClone >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar3 = (float)(*pcRam_?)();
      (this->fields).prevUpdateDirtyTime = fVar3;
      if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
        pGVar4 = (this->fields).cmbClone;
        if (pGVar4 == (GameObject *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        MovableVisualization_SetMeshRenderers(this,1,pGVar4,(MethodInfo *)0x0);
      }
      (this->fields).isDirty = 0;
    }
  }
  return;
}


/* Void Init(MVCubeModelBase) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Init
               (MovableVisualization *this,MVCubeModelBase *cmb,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).cmb = cmb;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cmb >> 0xc);
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
  pMVar6 = (this->fields).cmb;
  if (pMVar6 != (MVCubeModelBase *)0x0) {
    pAVar7 = (pMVar6->fields).Changed;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar9 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    if (pDVar8 == (Delegate *)0x0) {
      (pMVar6->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    }
    else {
      pAVar7 = (Action_1_CubeModelChangedEventArgs_ *)
               FUN_?(pDVar8,TypeInfo__System__Action<CubeModelChangedEventArgs>);
      if (pAVar7 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
        FUN_?(pDVar8,pAVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pMVar6->fields).Changed = pAVar7;
      pAVar9 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
      lVar3 = FUN_?();
      if (lVar3 == 0) {
        FUN_?(pDVar8,pAVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar6->fields).Changed >> 0xc);
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
    pGVar11 = MovableVisualization_CreateMeshClone(cmb,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cmbClone = pGVar11;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cmbClone >> 0xc);
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
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_POST_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (cmb != (MVCubeModelBase *)0x0) {
      (*(cmb->klass->vtable).get_WorldPosition_1.methodPtr)(&fStack_13);
      if (pTVar12 == (Transform *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
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
      pvVar14 = (pTVar12->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar14);
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pQVar16 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          (&QStack_17,(MVWorldObjectClient *)cmb,(MethodInfo *)0x0);
      if (pTVar12 == (Transform *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fStack_13 = pQVar16->x;
      fStack_18 = pQVar16->y;
      fStack_19 = pQVar16->z;
      fStack_20 = pQVar16->w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (pTVar12->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar14,&fStack_13);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_OnDestroy
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass7_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(MovableVisualization **)(lVar1 + 0x10) = this;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
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
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar8 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar8 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveAllComponentsInChildrenExclude(Type[], GameObject) */

void Assembly-CSharp.dll::MovableVisualization::
     MovableVisualization_RemoveAllComponentsInChildrenExclude
               (Type__Array *exclude,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
  ;
  if (gameObject != (GameObject *)0x0) {
    if ((
        UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                   );
    }
    p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (gameObject,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var8 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var15 = p_Var8->vector;
      do {
        if ((int)p_Var8->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)p_Var8->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        obj = (Object_1 *)*pp_Var15;
        if (obj == (Object_1 *)0x0) break;
        lVar4 = FUN_?(&(obj->klass->_0).byval_arg);
        pIVar5 = TypeRef__UnityEngine__Transform;
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (pIVar5 == (Il2CppType *)0x0) {
          lVar6 = 0;
        }
        else {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          lVar6 = FUN_?(pIVar5);
          lVar6 = FUN_?(lVar6 + 0x20);
        }
        if (lVar4 != lVar6) {
          uVar7 = 0;
          ppTVar8 = exclude->vector;
          bVar9 = true;
          if (exclude == (Type__Array *)0x0) break;
          while (bVar10 = bVar9, uVar11 = (uint)exclude->max_length, (int)uVar7 < (int)uVar11) {
            if (uVar11 <= uVar7) goto code_?;
            pTVar12 = *ppTVar8;
            pTVar13 = (Type *)FUN_?(&(obj->klass->_0).byval_arg);
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            uVar7 = uVar7 + 1;
            ppTVar8 = ppTVar8 + 1;
            bVar9 = false;
            if (pTVar12 != pTVar13) {
              bVar9 = bVar10;
            }
          }
          if (bVar10) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      (obj,(MethodInfo *)0x0);
          }
        }
        uVar2 = uVar2 + 1;
        pp_Var15 = pp_Var15 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Reset
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).packages;
  if (this_00 == (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::
  Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
  Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
            (this_00,
             MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
            );
  iVar2 = iRam_?;
  (this->fields).current = (MovableVisualization_Package *)0x0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).current >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).next = (MovableVisualization_Package *)0x0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).next >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* Void SetMeshRenderers(Boolean, GameObject) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_SetMeshRenderers
               (MovableVisualization *this,bool enable,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  if (gameObject != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    }
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (gameObject,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var7 = p_Var3->vector;
      while( true ) {
        if ((int)p_Var3->max_length <= (int)uVar2) {
          (this->fields).isVisible = enable;
          return;
        }
        if ((uint)p_Var3->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        obj = (Object *)*pp_Var7;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar4 = obj[1].klass;
        if (pOVar4 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pOVar4);
        uVar2 = uVar2 + 1;
        pp_Var7 = pp_Var7 + 1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Update
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MovableVisualization_HandleDirty(this,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if ((this->fields).current == (MovableVisualization_Package *)0x0) {
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_MovableVisualization_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pMVar6 = (MovableVisualization_Package *)
               mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue
                         ((Queue_1_System_Object_ *)pQVar5,
                          MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                         );
      bVar7 = iRam_? != 0;
      (this->fields).current = pMVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if ((this->fields).current == (MovableVisualization_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (MovableVisualization_Package *)0x0) {
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_MovableVisualization_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pMVar6 = (MovableVisualization_Package *)
               mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue
                         ((Queue_1_System_Object_ *)pQVar5,
                          MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                         );
      (this->fields).next = pMVar6;
      func_?(&(this->fields).next);
    }
  }
  if (((this->fields).current == (MovableVisualization_Package *)0x0) ||
     ((this->fields).next == (MovableVisualization_Package *)0x0)) {
    return;
  }
  pMVar6 = (this->fields).next;
  do {
    if (fVar3 - fVar4 < (pMVar6->fields).time) {
code_?:
      pMVar6 = (this->fields).current;
      if (pMVar6 != (MovableVisualization_Package *)0x0) {
        fVar12 = (pMVar6->fields).time;
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        fVar13 = (float)(*pcRam_?)();
        pGVar14 = (this->fields).cmbClone;
        fVar13 = ((fVar3 - fVar4) - fVar12) / fVar13;
        if (pGVar14 != (GameObject *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar15 = (pGVar14->fields)._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar14,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          pvVar15 = (void *)(*pcRam_?)(pvVar15);
          pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar15,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          pMVar6 = (this->fields).current;
          if ((pMVar6 != (MovableVisualization_Package *)0x0) &&
             (pMVar17 = (this->fields).next, pMVar17 != (MovableVisualization_Package *)0x0)) {
            uStack_18._0_4_ = (pMVar17->fields).position.x;
            uStack_18._4_4_ = (pMVar17->fields).position.y;
            uStack_19._0_4_ = (pMVar6->fields).position.x;
            uStack_19._4_4_ = (pMVar6->fields).position.y;
            fVar3 = 0.0;
            if ((0.0 <= fVar13) && (fVar3 = _UNK_?, fVar13 <= _UNK_?)) {
              fVar3 = fVar13;
            }
            fVar4 = ((pMVar17->fields).position.z - (pMVar6->fields).position.z) * fVar3 +
                     (pMVar6->fields).position.z;
            if (pOVar16 != (Object *)0x0) {
              uStack_19 = CONCAT44(((float)uStack_18._4_4_ - (float)uStack_19._4_4_) * fVar3 +
                                   (float)uStack_19._4_4_,
                                   ((float)(undefined4)uStack_18 - (float)(undefined4)uStack_19) *
                                   fVar3 + (float)(undefined4)uStack_19);
              fStack_20 = fVar4;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar21 = pOVar16[1].klass;
              if (pOVar21 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pOVar21);
              pGVar14 = (this->fields).cmbClone;
              if (pGVar14 != (GameObject *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar15 = (pGVar14->fields)._.m_CachedPtr;
                if (pvVar15 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar14,(MethodInfo *)0x0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pcVar1 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                  uVar2 = func_?(&UNK_?);
                  FUN_?(uVar2,0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pcRam_? = pcVar1;
                pvVar15 = (void *)(*pcRam_?)(pvVar15);
                pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar15,
                                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                    );
                pMVar6 = (this->fields).current;
                if ((pMVar6 != (MovableVisualization_Package *)0x0) &&
                   (pMVar17 = (this->fields).next, pMVar17 != (MovableVisualization_Package *)0x0)) {
                  uStack_22._0_4_ = (pMVar17->fields).rotation.x;
                  uStack_22._4_4_ = (pMVar17->fields).rotation.y;
                  uStack_23._0_4_ = (pMVar17->fields).rotation.z;
                  uStack_23._4_4_ = (pMVar17->fields).rotation.w;
                  fStack_24 = (pMVar6->fields).rotation.x;
                  fStack_25 = (pMVar6->fields).rotation.y;
                  fStack_26 = (pMVar6->fields).rotation.z;
                  fStack_27 = (pMVar6->fields).rotation.w;
                  uStack_18 = 0;
                  uStack_28 = 0;
                  pcVar1 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                    uVar2 = func_?(&UNK_?);
                    FUN_?(uVar2,0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcRam_? = pcVar1;
                  (*pcRam_?)(&fStack_24,&uStack_22,fVar13,&uStack_18);
                  if (pOVar16 == (Object *)0x0) {
                    FUN_?();
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  uStack_29 = (undefined4)uStack_18;
                  uStack_30 = uStack_18._4_4_;
                  uStack_31 = (undefined4)uStack_28;
                  uStack_32 = uStack_28._4_4_;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar21 = pOVar16[1].klass;
                  if (pOVar21 != (Object__Class *)0x0) {
                    pcVar1 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                      uVar2 = func_?(&UNK_?);
                      FUN_?(uVar2,0);
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    pcRam_? = pcVar1;
                    (*pcRam_?)(pOVar21,&uStack_29);
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
            }
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      break;
    }
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
    if ((pQVar5->fields)._size < 1) goto code_?;
    bVar7 = iRam_? != 0;
    (this->fields).current = (this->fields).next;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).current >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
    pMVar6 = (MovableVisualization_Package *)
             mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__Dequeue
                       ((Queue_1_System_Object_ *)pQVar5,
                        MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                       );
    bVar7 = iRam_? != 0;
    (this->fields).next = pMVar6;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).next >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pMVar6 = (this->fields).next;
  } while (pMVar6 != (MovableVisualization_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_UpdateControllerFixedUpdate
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MovableVisualization__Package);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cmb;
  pQVar2 = (this->fields).packages;
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pTVar3 = (pMVar1->fields)._.transform, pTVar3 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    pMVar1 = (this->fields).cmb;
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pTVar3 = (pMVar1->fields)._.transform, pTVar3 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = 0;
      pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_7);
      lVar9 = FUN_?(TypeInfo__MovableVisualization__Package);
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      uVar10 = (*pcRam_?)();
      *(undefined4 *)(lVar9 + 0x2c) = uVar10;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = (undefined4)uStack_7;
      *(undefined4 *)(lVar9 + 0x20) = uStack_7._4_4_;
      *(undefined4 *)(lVar9 + 0x24) = (undefined4)uStack_8;
      *(undefined4 *)(lVar9 + 0x28) = uStack_8._4_4_;
      if (pQVar2 != (Queue_1_MovableVisualization_Package_ *)0x0) {
        pMVar11 = (pQVar2->fields)._array;
        if (pMVar11 != (MovableVisualization_Package__Array *)0x0) {
          if ((pQVar2->fields)._size == (int)pMVar11->max_length) {
            pMVar11 = (pQVar2->fields)._array;
            iVar12 = (int)pMVar11->max_length * 2;
            if (iVar12 < (int)pMVar11->max_length + 4) {
              iVar12 = (int)pMVar11->max_length + 4;
            }
            FUN_?(pQVar2,iVar12,
                          MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                          ->klass->rgctx_data[5].rgctxDataDummy);
          }
          pMVar11 = (pQVar2->fields)._array;
          if (pMVar11 != (MovableVisualization_Package__Array *)0x0) {
            FUN_?(pMVar11,(longlong)(pQVar2->fields)._tail,lVar9);
            pMVar11 = (pQVar2->fields)._array;
            if (pMVar11 != (MovableVisualization_Package__Array *)0x0) {
              iVar13 = (pQVar2->fields)._tail + 1;
              iVar12 = 0;
              if (iVar13 != (int)pMVar11->max_length) {
                iVar12 = iVar13;
              }
              (pQVar2->fields)._tail = iVar12;
              piVar14 = &(pQVar2->fields)._size;
              *piVar14 = *piVar14 + 1;
              piVar14 = &(pQVar2->fields)._version;
              *piVar14 = *piVar14 + 1;
              return;
            }
          }
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MovableVisualization() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization__ctor
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_MovableVisualization_Package_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>
                         );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
            );
  bVar1 = iRam_? != 0;
  (this->fields).packages = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).packages >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Void cmb_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_cmb_Changed
               (MovableVisualization *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  (this->fields).isDirty = 1;
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MovableVisualization::MovableVisualization_get_Visible
               (MovableVisualization *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    return 0;
  }
  return (this->fields).canBeVisible;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_set_Visible
               (MovableVisualization *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).cmbClone;
  (this->fields).canBeVisible = value;
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ,CONCAT71(in_register_00000011,value),this_00,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    }
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var7 = p_Var3->vector;
      while( true ) {
        if ((int)p_Var3->max_length <= (int)uVar2) {
          (this->fields).isVisible = value;
          return;
        }
        if ((uint)p_Var3->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        obj = (Object *)*pp_Var7;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar4 = obj[1].klass;
        if (pOVar4 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pOVar4);
        uVar2 = uVar2 + 1;
        pp_Var7 = pp_Var7 + 1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

