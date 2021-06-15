
/* Void EnterEdit(Transform) */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_EnterEdit
               (AdvancedGhostCubeModelWrapper *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (PrefabPool *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVPointLightObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                ((Transform *)pMVar2,transform,(MethodInfo *)0x0);
      pPVar1 = (PrefabPool *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        VStack_3.z = (float)&UNK_?;
        pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           (&VStack_3,(MethodInfo *)0x0);
        if (pMVar2 != (MVPointLightObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    ((Transform *)pMVar2,*pVVar4,(MethodInfo *)0x0);
          pPVar1 = (PrefabPool *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          if (pPVar1 != (PrefabPool *)0x0) {
            pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
            if (pMVar2 != (MVPointLightObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        ((Transform *)pMVar2,*pQVar5,(MethodInfo *)0x0);
              this_00 = (DayNightCycle *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items
                                  ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
              if (this_00 != (DayNightCycle *)0x0) {
                this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                    (this_00,(MethodInfo *)0x0);
                if (this_01 != (CelestialParam *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)this_01,1,(MethodInfo *)0x0);
                  pPVar1 = (PrefabPool *)
                           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                           Collection_1_VoxelHit__get_Items
                                     ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                  if (pPVar1 != (PrefabPool *)0x0) {
                    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0)
                    ;
                    if (pMVar2 != (MVPointLightObject *)0x0) {
                      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_GetComponents_10
                                         ((Component_1 *)pMVar2,
                                          UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                                         );
                      uVar7 = 0;
                      if (pCVar6 != (Collider__Array *)0x0) {
                        ppCVar8 = pCVar6->vector;
                        while( true ) {
                          if ((int)pCVar6->max_length <= (int)uVar7) {
                            return;
                          }
                          if (pCVar6->max_length <= uVar7) break;
                          if ((Behaviour *)*ppCVar8 == (Behaviour *)0x0) goto code_?;
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)*ppCVar8,0,(MethodInfo *)0x0);
                          uVar7 = uVar7 + 1;
                          ppCVar8 = ppCVar8 + 1;
                        }
                        func_?();
                        func_?();
                      }
                    }
                  }
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ExitEdit() */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_ExitEdit
               (AdvancedGhostCubeModelWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
  this_00 = (PrefabPool *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVPointLightObject *)0x0) {
      this = (AdvancedGhostCubeModelWrapper *)
             UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
      ;
      pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponents_10
                         ((Component_1 *)this_01,
                          UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                         );
      uVar2 = 0;
      if (pCVar1 != (Collider__Array *)0x0) {
        ppCVar3 = pCVar1->vector;
        while( true ) {
          if ((int)pCVar1->max_length <= (int)uVar2) {
            (this->fields).cubeModelIsBeingEdited = 0;
            return;
          }
          if (pCVar1->max_length <= uVar2) break;
          this = (AdvancedGhostCubeModelWrapper *)*ppCVar3;
          if (this == (AdvancedGhostCubeModelWrapper *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          ppCVar3 = ppCVar3 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
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
  bVar1 = EditableCubeModelWrapper::EditableCubeModelWrapper_OnEnterObject
                    ((EditableCubeModelWrapper *)this,e,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::AdvancedGhostCubeModelWrapper_OnExitObject
               (AdvancedGhostCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
  this_00 = (PrefabPool *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVPointLightObject *)0x0) {
      pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponents_10
                         ((Component_1 *)this_01,
                          UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::MonoBehaviour>______
                         );
      uVar2 = 0;
      if (pCVar1 != (Collider__Array *)0x0) {
        ppCVar3 = pCVar1->vector;
        while( true ) {
          if ((int)pCVar1->max_length <= (int)uVar2) {
            (this->fields).cubeModelIsBeingEdited = 0;
            bVar4 = EditableCubeModelWrapper::EditableCubeModelWrapper_OnExitObject
                              ((EditableCubeModelWrapper *)this,(EditorStateMachine *)0x0,
                               (MethodInfo *)0x0);
            return bVar4;
          }
          if (pCVar1->max_length <= uVar2) break;
          if ((Behaviour *)*ppCVar3 == (Behaviour *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)*ppCVar3,1,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          ppCVar3 = ppCVar3 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void SetToTransformParent() */

void Assembly-CSharp.dll::AdvancedGhostCubeModelWrapper::
     AdvancedGhostCubeModelWrapper_SetToTransformParent
               (AdvancedGhostCubeModelWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (PrefabPool *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVPointLightObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                ((Transform *)pMVar2,(this->fields).transformParent,(MethodInfo *)0x0);
      pPVar1 = (PrefabPool *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        if (pMVar2 != (MVPointLightObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    ((Transform *)pMVar2,*pVVar3,(MethodInfo *)0x0);
          pPVar1 = (PrefabPool *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          if (pPVar1 != (PrefabPool *)0x0) {
            pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
            if (pMVar2 != (MVPointLightObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        ((Transform *)pMVar2,*pQVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  EditableCubeModelWrapper::EditableCubeModelWrapper__ctor
            ((EditableCubeModelWrapper *)this,cubeModelBase,(MethodInfo *)0x0);
  (this->fields).transformParent = transformParent;
  AdvancedGhostCubeModelWrapper_SetToTransformParent(this,(MethodInfo *)0x0);
  uVar7 = 0;
  func_?(&stack0xffffffd0,0xfffffff5,0xfffffffc,0xfffffff5,0);
  pIStack_8 = (IEnumerator__Class *)0x0;
  uStack_9 = (IEnumerator__Class *)((uint)uStack_9._2_2_ << 0x10);
  func_?(&pIStack_8,0xb,4,0xb,0);
  min.z = 0;
  min.x = (short)uVar7;
  min.y = (short)(uVar7 >> 0x10);
  max.z = (int16_t)uStack_9;
  max._0_4_ = pIStack_8;
  EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
            ((EditableCubeModelWrapper *)this,min,max,0xb4,(MethodInfo *)0x0);
  if ((cubeModelBase != (MVCubeModelInstance *)0x0) &&
     (pMVar10 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                         ((MVMovingPlatformNode *)cubeModelBase,(MethodInfo *)0x0),
     pMVar10 != (MVMovingPlatformNode *)0x0)) {
    pIVar11 = (IEnumerator__Class *)func_?();
    uStack_1 = 0;
    while (pIVar11 != (IEnumerator__Class *)0x0) {
      pIStack_8 = TypeInfo__System__Collections__IEnumerator;
      uStack_9 = pIVar11;
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_6 = 0x8a;
        uStack_1 = 0xffffffff;
        uStack_9 = (IEnumerator__Class *)TypeInfo__System__IDisposable;
        pIStack_8 = pIVar11;
        uStack_9 = (IEnumerator__Class *)func_?();
        if (uStack_9 != (IEnumerator__Class *)0x0) {
          pIStack_8 = (IEnumerator__Class *)TypeInfo__System__IDisposable;
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pIVar13 = (pIVar11->_0).image;
      uVar14 = 0;
      uVar15 = *(ushort *)((int)&pIVar13[4].nameNoExt + 2);
      uStack_16 = (uint)uVar15;
      if (uVar15 != 0) {
        do {
          if (*(IEnumerator__Class **)(pIVar13[2].name + (uint)uVar14 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            pIVar13 = (pIVar11->_0).image;
            puVar17 = &pIVar13[4].exportedTypeCount +
                     *(int *)(pIVar13[2].name + (uint)uVar14 * 8 + 4) * 2;
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar15);
      }
      uStack_9 = (IEnumerator__Class *)0x0;
      pIStack_8 = TypeInfo__System__Collections__IEnumerator;
      puVar17 = (uint32_t *)func_?();
code_?:
      uStack_9 = (IEnumerator__Class *)puVar17[1];
      pIStack_8 = pIVar11;
      piVar18 = (int *)(*(code *)*puVar17)();
      if (piVar18 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar18 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) {
        func_?();
        break;
      }
      func_?();
      pQVar19 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                          ((Quaternion *)&stack0xffffffc0,
                           (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)&stack0xffffffa8,
                           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                          );
      if ((Renderer *)pQVar19->z == (Renderer *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pQVar19->z,1,(MethodInfo *)0x0);
    }
  }
  func_?();
  uStack_9 = (IEnumerator__Class *)0x0;
  pIStack_8 = (IEnumerator__Class *)0x0;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

