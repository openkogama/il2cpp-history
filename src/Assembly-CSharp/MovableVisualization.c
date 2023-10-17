
/* Void Awake() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Awake
               (MovableVisualization *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  (this->fields).prevUpdateDirtyTime = fVar1 - _UNK_?;
  return;
}


/* Void ChangeLOD(Boolean) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_ChangeLOD
               (MovableVisualization *this,bool newVisible,MethodInfo *method)

{
  if (newVisible == 0) {
    if ((this->fields).isVisible != 0) {
      MovableVisualization_SetMeshRenderers(this,0,(this->fields).cmbClone,(MethodInfo *)0x0);
      return;
    }
  }
  else if (((this->fields).isVisible == 0) && ((this->fields).canBeVisible != 0)) {
    MovableVisualization_SetMeshRenderers(this,1,(this->fields).cmbClone,(MethodInfo *)0x0);
  }
  return;
}


/* GameObject CreateMeshClone(MVCubeModelBase) */

GameObject *
Assembly-CSharp.dll::MovableVisualization::MovableVisualization_CreateMeshClone
          (MVCubeModelBase *cmb,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&TypeRef__UnityEngine__MeshFilter);
    func_?(&TypeRef__UnityEngine__MeshRenderer);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__clone);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  if ((cmb != (MVCubeModelBase *)0x0) &&
     (pGVar7 = (cmb->fields)._.gameObject, pGVar7 != (GameObject *)0x0)) {
    pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)pGVar7,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar8,StringLiteral__clone,(MethodInfo *)0x0);
    pGVar7 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    if (pGVar7 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar7,pSVar8,(MethodInfo *)0x0);
      pGStack_9 = pGVar7;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar7,(MethodInfo *)0x0);
      pTVar11 = (cmb->fields)._.transform;
      if (pTVar11 != (Transform *)0x0) {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar11,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar10,pTVar11,(MethodInfo *)0x0);
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar7,(MethodInfo *)0x0);
          pTVar11 = (cmb->fields)._.transform;
          if (pTVar11 != (Transform *)0x0) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(&VStack_13,pTVar11,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar10,*pVVar12,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
              pTVar11 = (cmb->fields)._.transform;
              if (pTVar11 != (Transform *)0x0) {
                pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localRotation
                                    ((Quaternion *)auStack_15,pTVar11,(MethodInfo *)0x0);
                if (pTVar10 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar10,*pQVar14,(MethodInfo *)0x0);
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                  pTVar11 = (cmb->fields)._.transform;
                  if (pTVar11 != (Transform *)0x0) {
                    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localScale(&VStack_13,pTVar11,(MethodInfo *)0x0);
                    if (pTVar10 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar10,*pVVar12,(MethodInfo *)0x0);
                      pCVar16 = (cmb->fields).chunkInstances;
                      if (pCVar16 != (ChunkInstances *)0x0) {
                        pTStack_17 = (Type *)func_?(0,
                                                  TypeInfo__System__Collections__IEnumerable,pCVar16)
                        ;
                        VStack_13.y = (float)&pTStack_17;
                        VStack_13.z = (float)&iStack_6;
                        VStack_13.x = 0.0;
                        uStack_1 = 1;
                        while (pTStack_17 != (Type *)0x0) {
                          cVar18 = func_?(0,TypeInfo__System__Collections__IEnumerator,
                                                  pTStack_17);
                          pTVar19 = pTStack_17;
                          if (cVar18 == '\0') {
                            uStack_1 = 0xffffffff;
                            iStack_6 = func_?(pTStack_17,TypeInfo__System__IDisposable);
                            if (iStack_6 != 0) {
                              func_?(0,TypeInfo__System__IDisposable,iStack_6);
                            }
                            uStack_1 = 0xffffffff;
                            piVar20 = (int *)func_?(TypeInfo__System__Type,2);
                            pIVar21 = TypeRef__UnityEngine__MeshFilter;
                            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__System__Type);
                            }
                            pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                ((RuntimeTypeHandle)pIVar21,(MethodInfo *)0x0);
                            if (piVar20 != (int *)0x0) {
                              if (pTVar19 != (Type *)0x0) {
                                iVar22 = func_?(pTVar19,*(undefined4 *)(*piVar20 + 0x20));
                                if (iVar22 == 0) goto code_?;
                              }
                              if (piVar20[3] == 0) goto code_?;
                              piVar20[4] = (int)pTVar19;
                              func_?(piVar20 + 4,pTVar19);
                              pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                  ((RuntimeTypeHandle)
                                                   TypeRef__UnityEngine__MeshRenderer,
                                                   (MethodInfo *)0x0);
                              if (pTVar19 != (Type *)0x0) {
                                iVar22 = func_?(pTVar19,*(undefined4 *)(*piVar20 + 0x20));
                                if (iVar22 == 0) goto code_?;
                              }
                              if ((uint)piVar20[3] < 2) goto code_?;
                              piVar20[5] = (int)pTVar19;
                              func_?(piVar20 + 5,pTVar19);
                              if (cRam_? == '\0') {
                                func_?(&
                                                UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                                               );
                                func_?(&TypeInfo__UnityEngine__Object);
                                func_?(&TypeRef__UnityEngine__Transform);
                                func_?(&TypeInfo__System__Type);
                                cRam_? = '\x01';
                              }
                              pIStack_23 = Newtonsoft::Json::Linq::LinqExtensions::
                                           LinqExtensions_Values_2
                                                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                      pGVar7,
                                                  UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                                                  );
                              pTStack_24 = (Type__Class *)0x0;
                              if (pIStack_23 != (IEnumerable_1_System_Object_ *)0x0) {
                                pTStack_25 = (Transform *)(pIStack_23 + 2);
                                goto code_?;
                              }
                            }
                            break;
                          }
                          pTStack_26 = pTStack_17;
                          if (pTStack_17 == (Type *)0x0) break;
                          pTStack_24 = pTStack_17->klass;
                          uVar27 = 0;
                          pTStack_25 = (Transform *)0x0;
                          uVar28 = (pTStack_24->_1).interface_offsets_count;
                          pTStack_29 = (Transform__Class *)(uint)uVar28;
                          if (uVar28 != 0) {
                            do {
                              if (pTStack_24->interfaceOffsets[uVar27].interfaceType ==
                                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                                pVVar30 = &(pTStack_17->klass->vtable).Finalize +
                                          pTStack_17->klass->interfaceOffsets[uVar27].offset;
                                goto code_?;
                              }
                              uVar27 = uVar27 + 1;
                            } while (uVar27 < uVar28);
                          }
                          pVVar30 = (VirtualInvokeData *)
                                    func_?(pTStack_17,
                                                    TypeInfo__System__Collections__IEnumerator,1);
code_?:
                          piVar20 = (int *)(*pVVar30->methodPtr)(pTVar19,pVVar30->method);
                          uVar31 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                            ,piVar20);
                          if (piVar20 == (int *)0x0) break;
                          if (*(Il2CppClass **)(*piVar20 + 0x20) !=
                              (
                              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                              ->_0).element_class) goto code_?;
                          iVar22 = func_?(piVar20);
                          this = *(GameObject **)(iVar22 + 8);
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          this_00 = (GameObject *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_Instantiate_4
                                              ((Object *)this,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                              );
                          if (this_00 == (GameObject *)0x0) break;
                          pTStack_25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                          if (pTStack_25 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                    (pTStack_25,pTVar11,(MethodInfo *)0x0);
                          pTStack_25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          if (this == (GameObject *)0x0) break;
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(this,(MethodInfo *)0x0);
                          if (pTVar11 == (Transform *)0x0) break;
                          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localPosition
                                              (&VStack_32,pTVar11,(MethodInfo *)0x0);
                          if (pTStack_25 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localPosition(pTStack_25,*pVVar12,(MethodInfo *)0x0);
                          pTStack_25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(this,(MethodInfo *)0x0);
                          if (pTVar11 == (Transform *)0x0) break;
                          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localRotation
                                              (&QStack_33,pTVar11,(MethodInfo *)0x0);
                          if (pTStack_25 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation(pTStack_25,*pQVar14,(MethodInfo *)0x0);
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(this,(MethodInfo *)0x0);
                          if (pTVar10 == (Transform *)0x0) break;
                          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localScale
                                              ((Vector3 *)(auStack_15 + 4),pTVar10,(MethodInfo *)0x0
                                              );
                          if (pTVar11 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale(pTVar11,*pVVar12,(MethodInfo *)0x0);
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
  }
code_?:
  uVar31 = func_?();
code_?:
  func_?(uVar31);
code_?:
  uVar34 = func_?(0);
  func_?(uVar34);
code_?:
  uVar34 = func_?(0);
  func_?(uVar34);
  pcVar35 = (code *)swi(3);
  pGVar7 = (GameObject *)(*pcVar35)();
  return pGVar7;
code_?:
  if ((int)pIStack_23[1].monitor <= (int)pTStack_24) {
    *unaff_FS_OFFSET = uStack_3;
    return pGVar7;
  }
  if ((Type__Class *)pIStack_23[1].monitor <= pTStack_24) goto code_?;
  pTStack_29 = pTStack_25->klass;
  if (pTStack_29 == (Transform__Class *)0x0) goto code_?;
  pTStack_26 = mscorlib.dll::System::Object::Object_GetType((Object *)pTStack_29,(MethodInfo *)0x0);
  pIVar21 = TypeRef__UnityEngine__Transform;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)pIVar21,(MethodInfo *)0x0);
  bVar36 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)pTStack_26,(Object **)pTVar19,(MethodInfo *)0x0);
  if (bVar36 == 0) {
    pGStack_9 = (GameObject *)0x1;
    pTStack_26 = (Type *)(piVar20 + 4);
    uVar37 = 0;
    while( true ) {
      if (piVar20[3] <= (int)uVar37) break;
      if ((uint)piVar20[3] <= uVar37) goto code_?;
      pTStack_38 = pTStack_26->klass;
      pTStack_39 = mscorlib.dll::System::Object::Object_GetType
                             ((Object *)pTStack_29,(MethodInfo *)0x0);
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar36 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)pTStack_38,(Object **)pTStack_39,(MethodInfo *)0x0);
      pGStack_9 = (GameObject *)((uint)pGStack_9 & 0xff);
      if (bVar36 != 0) {
        pGStack_9 = (GameObject *)0x0;
      }
      uVar37 = uVar37 + 1;
      pTStack_26 = (Type *)&pTStack_26->monitor;
    }
    if ((char)pGStack_9 != '\0') {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pTStack_29,(MethodInfo *)0x0);
    }
  }
  pTStack_24 = (Type__Class *)((int)&(pTStack_24->_0).image + 1);
  pTStack_25 = (Transform *)&pTStack_25->monitor;
  goto code_?;
code_?:
  func_?();
  goto code_?;
}


/* Void HandleDirty() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_HandleDirty
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).isDirty != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar1 - (this->fields).prevUpdateDirtyTime) {
      pGVar2 = (this->fields).cmbClone;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
      (this->fields).cmbClone = pGVar2;
      func_?(&(this->fields).cmbClone,pGVar2);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevUpdateDirtyTime = fVar1;
      if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
        pGVar2 = (this->fields).cmbClone;
        if (pGVar2 == (GameObject *)0x0) {
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pGVar2 = (GameObject *)
                 mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                           ((Void *)pGVar2,(MethodInfo *)0x0);
        MovableVisualization_SetMeshRenderers(this,1,pGVar2,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  (this->fields).cmb = cmb;
  func_?(&(this->fields).cmb,cmb);
  pMVar1 = (this->fields).cmb;
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    pAVar2 = (pMVar1->fields).Changed;
    this_00 = (Action_1_Object_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
      }
      else {
        pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
        if (pAVar2 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
        (pMVar1->fields).Changed = pAVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      pGVar5 = MovableVisualization_CreateMeshClone(cmb,(MethodInfo *)0x0);
      (this->fields).cmbClone = pGVar5;
      func_?();
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      UpdateController::UpdateController_AddFixedUpdateObject
                ((IUpdatecontrollerSubscriberFixedUpdate *)this,
                 UpdatePriority__Enum_POST_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if ((cmb != (MVCubeModelBase *)0x0) &&
         (pVVar7 = (Vector3 *)
                   (*(cmb->klass->vtable).get_WorldPosition_1.methodPtr)
                             (&stack0xfffffff0,cmb,(cmb->klass->vtable).get_WorldPosition_1.method),
         pTVar6 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,*pVVar7,(MethodInfo *)0x0);
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pQVar8 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                           ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)cmb,
                            (MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar6,*pQVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_OnDestroy
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                   );
    func_?(&TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass7_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__UpdateController____c__DisplayClass7_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    iVar1 = 0x10;
    uVar2 = 0;
    while( true ) {
      iVar3 = iVar1;
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar4 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar4 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar4->max_length <= (int)uVar2) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar4 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar4 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
      if (pLVar4->max_length <= uVar2) break;
      this_00 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ **)
                 ((int)pLVar4->vector + iVar1 + -0x10);
      this_01 = (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)value[1].monitor
      ;
      if (this_01 == (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        this_01 = (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
        if (this_01 == (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Predicate`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::
        Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor
                  (this_01,value,
                   MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   ,(MethodInfo *)0x0);
        value[1].monitor = (MonitorData *)this_01;
        func_?(&value[1].monitor,this_01);
      }
      if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__RemoveAll
                (this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      uVar2 = uVar2 + 1;
      iVar1 = iVar3 + 4;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveAllComponentsInChildrenExclude(Type[], GameObject) */

void Assembly-CSharp.dll::MovableVisualization::
     MovableVisualization_RemoveAllComponentsInChildrenExclude
               (Type__Array *exclude,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeRef__UnityEngine__Transform);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    right = (Type *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                              ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)gameObject,
                               UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                              );
    pTStack_1 = (Type__Class *)0x0;
    if (right != (Type *)0x0) {
      pTVar2 = right + 1;
      while( true ) {
        pTVar2 = (Type *)&pTVar2->monitor;
        if ((int)right[1].klass <= (int)pTStack_1) {
          return;
        }
        if (right[1].klass <= pTStack_1) break;
        obj = *(Object_1 **)pTVar2;
        if (obj == (Object_1 *)0x0) goto code_?;
        left = mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
        handle = TypeRef__UnityEngine__Transform;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          right = (Type *)&UNK_?;
          func_?(TypeInfo__System__Type);
        }
        right_00 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)left,(Object **)right_00,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          uVar4 = 0;
          bVar5 = true;
          if (exclude == (Type__Array *)0x0) goto code_?;
          while( true ) {
            if ((int)exclude->max_length <= (int)uVar4) break;
            if (exclude->max_length <= uVar4) goto code_?;
            right = mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                              ((Object **)0x0,(Object **)right,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              bVar5 = false;
            }
            uVar4 = uVar4 + 1;
          }
          if (bVar5) {
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      (obj,(MethodInfo *)0x0);
          }
        }
        pTStack_1 = (Type__Class *)((int)&(pTStack_1->_0).image + 1);
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Reset
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).packages;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
              );
    (this->fields).current = (MovableVisualization_Package *)0x0;
    func_?(&(this->fields).current,0);
    (this->fields).next = (MovableVisualization_Package *)0x0;
    func_?(&(this->fields).next,0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetMeshRenderers(Boolean, GameObject) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_SetMeshRenderers
               (MovableVisualization *this,bool enable,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)gameObject,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      while( true ) {
        if ((int)pIVar1[1].monitor <= (int)pMVar2) {
          (this->fields).isVisible = enable;
          return;
        }
        if (pIVar1[1].monitor <= pMVar2) break;
        if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pIVar3->klass,enable,(MethodInfo *)0x0);
        pMVar2 = pMVar2 + 1;
        pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Update
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (((this->fields).isDirty != 0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                         ((MethodInfo *)0x0),
     _UNK_? < fVar1 - (this->fields).prevUpdateDirtyTime)) {
    pGVar2 = (this->fields).cmbClone;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
    (this->fields).cmbClone = pGVar2;
    func_?(&(this->fields).cmbClone,pGVar2);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    (this->fields).prevUpdateDirtyTime = fVar1;
    if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
      pGVar2 = (this->fields).cmbClone;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      pGVar2 = (GameObject *)
                mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                          ((Void *)pGVar2,(MethodInfo *)0x0);
      MovableVisualization_SetMeshRenderers(this,1,pGVar2,(MethodInfo *)0x0);
    }
    (this->fields).isDirty = 0;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this->fields).current == (MovableVisualization_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    if (0 < (pQVar4->fields)._size) {
      pMVar5 = (MovableVisualization_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      (this->fields).current = pMVar5;
      func_?(&(this->fields).current,pMVar5);
    }
    if ((this->fields).current == (MovableVisualization_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (MovableVisualization_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    if (0 < (pQVar4->fields)._size) {
      pMVar5 = (MovableVisualization_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      (this->fields).next = pMVar5;
      func_?(&(this->fields).next,pMVar5);
    }
  }
  if (((this->fields).current == (MovableVisualization_Package *)0x0) ||
     ((this->fields).next == (MovableVisualization_Package *)0x0)) {
    return;
  }
  pMVar5 = (this->fields).next;
  ppMVar6 = &(this->fields).current;
  ppMVar7 = &(this->fields).next;
  do {
    if (fVar1 - fVar3 < (pMVar5->fields).time) {
code_?:
      pMVar5 = (this->fields).current;
      if (pMVar5 != (MovableVisualization_Package *)0x0) {
        fVar8 = (pMVar5->fields).time;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar9 = ((fVar1 - fVar3) - fVar8) / fVar9;
        pGVar2 = (this->fields).cmbClone;
        if (pGVar2 != (GameObject *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar2,(MethodInfo *)0x0);
          pMVar5 = (this->fields).current;
          if (pMVar5 != (MovableVisualization_Package *)0x0) {
            uVar11 = (pMVar5->fields).position.x;
            uVar12 = (pMVar5->fields).position.y;
            pMVar13 = (this->fields).next;
            fVar1 = (pMVar5->fields).position.z;
            if (pMVar13 != (MovableVisualization_Package *)0x0) {
              uVar14 = (pMVar13->fields).position.x;
              uVar15 = (pMVar13->fields).position.y;
              fVar3 = 0.0;
              if ((0.0 <= fVar9) && (fVar3 = _UNK_?, fVar9 <= _UNK_?)) {
                fVar3 = fVar9;
              }
              if (pTVar10 != (Transform *)0x0) {
                value.y = ((float)uVar15 - (float)uVar12) * fVar3 + (float)uVar12;
                value.x = ((float)uVar14 - (float)uVar11) * fVar3 + (float)uVar11;
                value.z = ((pMVar13->fields).position.z - fVar1) * fVar3 + fVar1;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar10,value,(MethodInfo *)0x0);
                pGVar2 = (this->fields).cmbClone;
                if (pGVar2 != (GameObject *)0x0) {
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                  pMVar5 = (this->fields).current;
                  if (((pMVar5 != (MovableVisualization_Package *)0x0) &&
                      (pMVar13 = (this->fields).next, pMVar13 != (MovableVisualization_Package *)0x0))
                     && (pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                   Quaternion_Slerp((Quaternion *)&stack0xffffffd4,
                                                    (pMVar5->fields).rotation,
                                                    (pMVar13->fields).rotation,fVar9,
                                                    (MethodInfo *)0x0), pTVar10 != (Transform *)0x0)
                     ) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar10,*pQVar16,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
    if ((pQVar4->fields)._size < 1) goto code_?;
    *ppMVar6 = *ppMVar7;
    func_?(ppMVar6,*ppMVar7);
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
    pMVar5 = (MovableVisualization_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar4,
                         MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                        );
    *ppMVar7 = pMVar5;
    func_?(ppMVar7,pMVar5);
    pMVar5 = *ppMVar7;
  } while (pMVar5 != (MovableVisualization_Package *)0x0);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_UpdateControllerFixedUpdate
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MovableVisualization__Package);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cmb;
  this_00 = (this->fields).packages;
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
    OStack_5.klass = (Object__Class *)pVVar3->x;
    OStack_5.monitor = (MonitorData *)pVVar3->y;
    pOVar6 = (Object__Class *)pVVar3->z;
    pMVar1 = (this->fields).cmb;
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
      method_00 = (MethodInfo *)&UNK_?;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)auStack_4,pTVar2,(MethodInfo *)0x0);
      auStack_4._0_4_ = pQVar7->x;
      auStack_4._4_4_ = pQVar7->y;
      pMStack_8 = (MonitorData *)pQVar7->z;
      pOStack_9 = (Object__Class *)pQVar7->w;
      value = (Object *)func_?(TypeInfo__MovableVisualization__Package);
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,method_00);
        pMVar10 = (MonitorData *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime
                           ((MethodInfo *)0x0);
        value[1] = OStack_5;
        value[2].klass = pOVar6;
        value[4].monitor = pMVar10;
        value[2].monitor = (MonitorData *)auStack_4._0_4_;
        value[3].klass = (Object__Class *)auStack_4._4_4_;
        value[3].monitor = pMStack_8;
        value[4].klass = pOStack_9;
        if (this_00 != (Queue_1_MovableVisualization_Package_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    ((Queue_1_System_Object_ *)this_00,value,
                     MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MovableVisualization() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization__ctor
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_MovableVisualization_Package_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>
                           );
  if (this_00 != (Queue_1_MovableVisualization_Package_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
              );
    (this->fields).packages = this_00;
    func_?(&(this->fields).packages,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  (this->fields).canBeVisible = value;
  MovableVisualization_SetMeshRenderers(this,value,(this->fields).cmbClone,(MethodInfo *)0x0);
  return;
}

