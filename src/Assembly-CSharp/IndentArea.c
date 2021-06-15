
/* Boolean IsColliding() */

bool Assembly-CSharp.dll::IndentArea::IndentArea_IsColliding(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).gameObject;
  if (method_00 != (MethodInfo *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        ((GameObject *)method_00,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    if (this_02 != (UseInteractorHandler *)0x0) {
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                         ((MeshFilter *)this_02,(MethodInfo *)0x0);
      this_00 = (this->fields).mainCamera;
      uStack_2 = CONCAT44(pMVar1,(undefined4)uStack_2);
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar3 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition(&VStack_4,(StandaloneInput *)0x0,method_00);
      if (this_00 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                  ((Ray *)&stack0xffffffb8,this_00,*pVVar3,(MethodInfo *)0x0);
        iVar5 = func_?(TypeInfo__UnityEngine__Vector3,4);
        uVar6 = 0;
        uStack_7 = (ulonglong)(uint)uStack_7;
        if (uStack_2._4_4_ != (Mesh *)0x0) {
          iVar8 = 0;
          while( true ) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                (uStack_2._4_4_,(MethodInfo *)0x0);
            if (pVVar9 == (Vector3__Array *)0x0) break;
            if ((int)pVVar9->max_length <= (int)uStack_7._4_4_) {
              puVar10 = (ulonglong *)func_?(&VStack_4,&stack0xffffffa0,0);
              uStack_7 = *puVar10;
              fVar11 = *(float *)(puVar10 + 1);
              puVar12 = (undefined8 *)func_?(auStack_13,&stack0xffffffa0,0);
              VStack_4._4_8_ = *puVar12;
              fVar14 = *(float *)(puVar12 + 1);
              pVVar3 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                 ((Vector3 *)&stack0xffffffc4,
                                  (InputToPlayerMovementAndroid *)&stack0xffffffa0,(MethodInfo *)0x0
                                 );
              uStack_2._0_4_ = pVVar3->x;
              uStack_2._4_4_ = (Mesh *)pVVar3->y;
              fVar15 = pVVar3->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a.z = fVar15;
              a.x = (float)(undefined4)uStack_2;
              a.y = (float)uStack_2._4_4_;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffffc4,a,5000.0,(MethodInfo *)0x0);
              a_00.z = fVar14;
              a_00.x = VStack_4.y;
              a_00.y = VStack_4.z;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffc4,a_00,*pVVar3,(MethodInfo *)0x0);
              VStack_4.y = pVVar3->x;
              VStack_4.z = pVVar3->y;
              fVar14 = pVVar3->z;
              if (iVar5 != 0) {
                uVar6 = *(uint *)(iVar5 + 0xc);
                if (uVar6 == 0) goto code_?;
                uVar16 = 0;
                if (uVar6 < 4) goto code_?;
                if (uVar6 < 3) goto code_?;
                p1.z = fVar11;
                p1.x = (float)(uint)uStack_7;
                p1.y = (float)uStack_7._4_4_;
                bVar17 = MathFunctions::MathFunctions_LineFacet
                                  (p1,*pVVar3,*(Vector3 *)(iVar5 + 0x10),*(Vector3 *)(iVar5 + 0x34),
                                   *(Vector3 *)(iVar5 + 0x28),(Vector3 *)&stack0xffffffd0,
                                   (MethodInfo *)0x0);
                if (*(uint *)(iVar5 + 0xc) < 3) goto code_?;
                if (*(uint *)(iVar5 + 0xc) != 0) {
                  p1_00.z = fVar11;
                  p1_00.x = (float)(uint)uStack_7;
                  p1_00.y = (float)uStack_7._4_4_;
                  p2.z = fVar14;
                  p2.x = VStack_4.y;
                  p2.y = VStack_4.z;
                  bVar18 = MathFunctions::MathFunctions_LineFacet
                                    (p1_00,p2,*(Vector3 *)(iVar5 + 0x28),*(Vector3 *)(iVar5 + 0x1c),
                                     *(Vector3 *)(iVar5 + 0x10),(Vector3 *)&stack0xffffffd0,
                                     (MethodInfo *)0x0);
                  if ((bVar17 == 0) && (bVar18 == 0)) {
                    return 0;
                  }
                  return 1;
                }
                goto code_?;
              }
              break;
            }
            if ((iVar5 == 0) || (this_01 = (this->fields).gameObject, this_01 == (GameObject *)0x0))
            break;
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0);
            uStack_7 = CONCAT44(pTVar19,(uint)uStack_7);
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                (uStack_2._4_4_,(MethodInfo *)0x0);
            if (pVVar9 == (Vector3__Array *)0x0) break;
            if (pVVar9->max_length <= uVar6) goto code_?;
            if (uStack_7._4_4_ == (Transform *)0x0) break;
            position.z = *(float *)((int)&pVVar9->vector[0].z + iVar8);
            position._0_8_ = *(undefined8 *)((int)&pVVar9->vector[0].x + iVar8);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                               (&VStack_4,uStack_7._4_4_,position,(MethodInfo *)0x0);
            fVar11 = pVVar3->z;
            if (*(uint *)(iVar5 + 0xc) <= uVar6) goto code_?;
            *(undefined8 *)(iVar8 + 0x10 + iVar5) = *(undefined8 *)pVVar3;
            uVar6 = uVar6 + 1;
            *(float *)(iVar8 + 0x18 + iVar5) = fVar11;
            iVar8 = iVar8 + 0xc;
            uStack_7 = CONCAT44(uVar6,(uint)uStack_7);
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  uVar16 = 0;
  uVar20 = func_?(0,0);
  func_?(uVar20);
code_?:
  uVar16 = func_?(0,uVar16);
  func_?(uVar16);
code_?:
  uVar16 = func_?(0);
  func_?(uVar16);
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  bVar17 = (*pcVar21)();
  return bVar17;
}


/* Void Remove() */

void Assembly-CSharp.dll::IndentArea::IndentArea_Remove(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).gameObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Vector2[] SetUVs() */

Vector2__Array *
Assembly-CSharp.dll::IndentArea::IndentArea_SetUVs(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  item_02.x = 0.0;
  item_02.y = 0.0;
  func_?(&stack0xfffffff4,0,0);
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    item_01.x = 0.0;
    item_01.y = 0.0;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    item_00.x = 0.0;
    item_00.y = 0.0;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    item.x = 0.0;
    item.y = 0.0;
    uStack1 = 0;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                       );
    return (Vector2__Array *)pVVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector2__Array *)(*pcVar3)();
  return pVVar4;
}


/* Void UpdateIndentArea(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::IndentArea::IndentArea_UpdateIndentArea
               (IndentArea *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    uVar1 = (info->fields).iLocalPos.x;
    uVar2 = (info->fields).iLocalPos.y;
    iVector.y = uVar2;
    iVector.x = uVar1;
    iVar3 = (info->fields).iLocalPos.z;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar3;
    value = Cube::Cube_GetFaceVerticesWorld(cubeGameObject,cube,face,iVector,(MethodInfo *)0x0);
    pLVar4 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar4,MethodInfo__System__Collections__Generic__List<int>__List__);
    this_00 = (this->fields).gameObject;
    if ((((this_00 != (GameObject *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              (this_00,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_01 != (UseInteractorHandler *)0x0)) &&
        (this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             ((MeshFilter *)this_01,(MethodInfo *)0x0), this_02 != (Mesh *)0x0)) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_02,(MethodInfo *)0x0),
       pLVar4 != (List_1_UnityEngine_Vector4_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar4,UIPushOption__Enum_None,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar4,
                 UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar4,UIPushOption__Enum_HideAll,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar4,UIPushOption__Enum_HideAll,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar4,UIPushOption__Enum_Blocking,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar4,UIPushOption__Enum_None,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (this_02,value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar4 = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (pLVar4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
                );
      func_?();
    }
  }
  func_?(0);
  uVar5 = func_?(0,0);
  func_?(uVar5);
  uVar5 = func_?(0);
  func_?(uVar5);
  uVar5 = func_?(0,0);
  func_?(uVar5);
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IndentArea() */

void Assembly-CSharp.dll::IndentArea::IndentArea__ctor(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_IndentArea,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    (this->fields).mainCamera = pCVar2;
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar1,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                  (pGVar1,
                   UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                  );
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_01 != (PrefabPool *)0x0) {
          value_00 = PrefabPool::PrefabPool_get_IndentMaterial(this_01,(MethodInfo *)0x0);
          (this->fields).materialNone = value_00;
          if (this_00 != (Worker *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      ((Renderer *)this_00,value_00,(MethodInfo *)0x0);
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


/* Void set_Size(Single) */

void Assembly-CSharp.dll::IndentArea::IndentArea_set_Size
               (IndentArea *this,float value,MethodInfo *method)

{
  (this->fields).size = value;
  return;
}

