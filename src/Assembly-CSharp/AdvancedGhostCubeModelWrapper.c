
/* Void EnterEdit(Transform) */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_EnterEdit
               (AdvancedGhostCubeModelWrapper *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                   );
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
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        pMVar1 = (this->fields)._.cubeModelBase;
        if (pMVar1 != (MVCubeModelInstance *)0x0) {
          pTVar2 = (pMVar1->fields)._._.transform;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pMVar1 = (this->fields)._.cubeModelBase;
            if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
               (this_00 = (pMVar1->fields)._._.gameObject, this_00 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._.cubeModelBase;
              if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
                 (pTVar2 = (pMVar1->fields)._._.transform, pTVar2 != (Transform *)0x0)) {
                pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_GetComponents_1
                                   ((Component *)pTVar2,
                                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                                   );
                uVar4 = 0;
                if (pOVar3 != (Object__Array *)0x0) {
                  ppOVar5 = pOVar3->vector;
                  while( true ) {
                    if ((int)pOVar3->max_length <= (int)uVar4) {
                      return;
                    }
                    if (pOVar3->max_length <= uVar4) break;
                    if ((Behaviour *)*ppOVar5 == (Behaviour *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)*ppOVar5,0,(MethodInfo *)0x0);
                    uVar4 = uVar4 + 1;
                    ppOVar5 = ppOVar5 + 1;
                  }
                  func_?();
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ExitEdit() */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
               (AdvancedGhostCubeModelWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                   );
    cRam_? = '\x01';
  }
  AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.cubeModelBase;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponents_1
                       ((Component *)this_00,
                        UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                       );
    uVar3 = 0;
    if (pOVar2 != (Object__Array *)0x0) {
      ppOVar4 = pOVar2->vector;
      while( true ) {
        if ((int)pOVar2->max_length <= (int)uVar3) {
          (this->fields).cubeModelIsBeingEdited = 0;
          return;
        }
        if (pOVar2->max_length <= uVar3) break;
        if ((Behaviour *)*ppOVar4 == (Behaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)*ppOVar4,1,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppOVar4 = ppOVar4 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine, Transform) */

bool Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_OnEnterObject
               (AdvancedGhostCubeModelWrapper *this,EditorStateMachine *e,Transform *transform,
               MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).cubeModelIsBeingEdited = 1;
  if (bVar1) {
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                   );
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._.cubeModelBase;
  if ((pMVar2 != (MVCubeModelInstance *)0x0) &&
     (pTVar3 = (pMVar2->fields)._._.transform, pTVar3 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar3,transform,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.cubeModelBase;
    if (pMVar2 != (MVCubeModelInstance *)0x0) {
      pTVar3 = (pMVar2->fields)._._.transform;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        pMVar2 = (this->fields)._.cubeModelBase;
        if (pMVar2 != (MVCubeModelInstance *)0x0) {
          pTVar3 = (pMVar2->fields)._._.transform;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pMVar2 = (this->fields)._.cubeModelBase;
            if ((pMVar2 != (MVCubeModelInstance *)0x0) &&
               (this_00 = (pMVar2->fields)._._.gameObject, this_00 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._.cubeModelBase;
              if ((pMVar2 != (MVCubeModelInstance *)0x0) &&
                 (pTVar3 = (pMVar2->fields)._._.transform, pTVar3 != (Transform *)0x0)) {
                pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_GetComponents_1
                                   ((Component *)pTVar3,
                                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                                   );
                uVar5 = 0;
                if (pOVar4 != (Object__Array *)0x0) {
                  ppOVar6 = pOVar4->vector;
                  while( true ) {
                    if ((int)pOVar4->max_length <= (int)uVar5) {
                      bVar7 = EditableCubeModelWrapper::EditableCubeModelWrapper_OnEnterObject
                                        ((EditableCubeModelWrapper *)this,
                                         (EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
                      return bVar7;
                    }
                    if (pOVar4->max_length <= uVar5) break;
                    if ((Behaviour *)*ppOVar6 == (Behaviour *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)*ppOVar6,0,(MethodInfo *)0x0);
                    uVar5 = uVar5 + 1;
                    ppOVar6 = ppOVar6 + 1;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_OnExitObject
               (AdvancedGhostCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  AdvancedGhostCubeModelWrapper_ExitEdit(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = in_stack_1;
  if (in_stack_1 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(in_stack_1,(MethodInfo *)0x0);
    in_stack_1 = (EditorStateMachine *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&stack0x00000010);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        pMVar1 = (this->fields)._.cubeModelBase;
        if (pMVar1 != (MVCubeModelInstance *)0x0) {
          pTVar2 = (pMVar1->fields)._._.transform;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AdvancedGhostCubeModelWrapper(MVCubeModelInstance, Transform) */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper__ctor
               (AdvancedGhostCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,
               Transform *transformParent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  EditableCubeModelWrapper::EditableCubeModelWrapper__ctor
            ((EditableCubeModelWrapper *)this,cubeModelBase,(MethodInfo *)0x0);
  ppTVar4 = &(this->fields).transformParent;
  *ppTVar4 = transformParent;
  func_?(ppTVar4,transformParent);
  AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
  puStack_5 = (undefined1 *)0x0;
  uStack_6 = (undefined1 *)((uint)uStack_6._2_2_ << 0x10);
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&puStack_5,-0xb,-4,-0xb,(MethodInfo *)0x0);
  uStack_7._0_2_ = 0;
  uStack_7._2_2_ = 0;
  uStack_7._4_4_ = (undefined *)((uint)uStack_7._6_2_ << 0x10);
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&uStack_7,0xb,4,0xb,(MethodInfo *)0x0);
  max.z = uStack_7._4_2_;
  max.x = (int16_t)uStack_7;
  max.y = uStack_7._2_2_;
  min.z = (int16_t)uStack_6;
  min._0_4_ = puStack_5;
  EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
            ((EditableCubeModelWrapper *)this,min,max,0xb4,(MethodInfo *)0x0);
  if ((cubeModelBase != (MVCubeModelInstance *)0x0) &&
     ((cubeModelBase->fields)._.chunkInstances != (ChunkInstances *)0x0)) {
    uStack_7._4_4_ = &UNK_?;
    piVar8 = (int *)func_?();
    puStack_5 = &stack0xffffffe8;
    uStack_6 = &stack0xffffffe4;
    uStack_1 = 1;
    while (piVar8 != (int *)0x0) {
      uStack_7._4_4_ = &UNK_?;
      cVar9 = func_?();
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        iVar10 = func_?();
        if (iVar10 != 0) {
          uStack_7._4_4_ = &UNK_?;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar8 == (int *)0x0) break;
      iVar10 = *piVar8;
      uVar11 = 0;
      if (*(ushort *)(iVar10 + 0xb6) != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(iVar10 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar12 = (undefined4 *)
                     (iVar10 + 200 + *(int *)(*(int *)(iVar10 + 0x58) + 4 + (uint)uVar11 * 8) * 8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(iVar10 + 0xb6));
      }
      uStack_7._4_4_ = &UNK_?;
      puVar12 = (undefined4 *)func_?();
code_?:
      piVar8 = (int *)(*(code *)*puVar12)();
      if (piVar8 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar8 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      iVar10 = func_?();
      this_00 = (Renderer *)*(undefined8 *)(iVar10 + 0x20);
      if (this_00 == (Renderer *)0x0) break;
      piVar8 = (int *)0x0;
      uStack_7._4_4_ = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (this_00,1,(MethodInfo *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

