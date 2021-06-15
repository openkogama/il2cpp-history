
/* Void Remove() */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_Remove(FaceCursor *this,MethodInfo *method)

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


/* Vector2[] SetUVs(Edge, Boolean) */

Vector2__Array *
Assembly-CSharp.dll::FaceCursor::FaceCursor_SetUVs
          (FaceCursor *this,Edge__Enum edge,bool mirror,MethodInfo *method)

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
  switch(edge) {
  case Edge__Enum_None:
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    func_?(&VStack_1,0,0,0);
    if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,VStack_1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    func_?();
    puStack_2 = (undefined1 *)0x0;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,(Vector2)0x0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    item_11.x = 0.0;
    item_11.y = 0.0;
    VStack_1.x = 1.0;
    VStack_1.y = 1.0;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_11,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    unaff_EDI = puStack_2;
    break;
  case Edge__Enum_Front:
    unaff_ESI = (float)(uint)mirror;
    fVar3 = 0.0;
    func_?(&stack0xffffffdc,(float)(int)unaff_ESI,0,0);
    if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
    item.y = fVar3;
    item.x = (float)
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    unaff_EDI = &stack0xffffffdc;
    func_?();
    item_00.y = (float)unaff_EDI;
    item_00.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    VStack_1.y = 1.0;
    goto code_?;
  case Edge__Enum_Back:
    fVar3 = 0.0;
    unaff_ESI = (float)(uint)(mirror ^ 1);
    func_?(&stack0xffffffdc,(float)(int)unaff_ESI,0x3f800000,0);
    if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
    item_01.y = fVar3;
    item_01.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    unaff_EDI = &stack0xffffffdc;
    func_?();
    item_02.y = (float)unaff_EDI;
    item_02.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    item_07.x = 0.0;
    item_07.y = 0.0;
    VStack_1.y = 0.0;
    VStack_1.x = (float)mirror;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_07,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    break;
  case Edge__Enum_Left:
    fVar3 = 0.0;
    unaff_ESI = (float)(uint)(mirror ^ 1);
    func_?(&stack0xffffffdc,(float)(int)unaff_ESI,0,0);
    if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
    item_03.y = fVar3;
    item_03.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_03,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    unaff_EDI = &stack0xffffffdc;
    func_?();
    item_04.y = (float)unaff_EDI;
    item_04.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_04,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    item_08.x = 0.0;
    item_08.y = 0.0;
    VStack_1.y = 1.0;
    VStack_1.x = (float)mirror;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_08,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    break;
  case Edge__Enum_Right:
    unaff_ESI = (float)(uint)mirror;
    fVar3 = 0.0;
    func_?(&stack0xffffffdc,(float)(int)unaff_ESI,0x3f800000,0);
    if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
    item_05.y = fVar3;
    item_05.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_05,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    unaff_EDI = &stack0xffffffdc;
    func_?();
    item_06.y = (float)unaff_EDI;
    item_06.x = (float)
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_06,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    VStack_1.y = 0.0;
code_?:
    item_09.x = 0.0;
    item_09.y = 0.0;
    VStack_1.x = (float)(mirror ^ 1);
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)this_00,item_09,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    break;
  default:
    goto code_?;
  }
  item_10.x = 0.0;
  item_10.y = 0.0;
  func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
  List_1_UnityEngine_Vector2__Add
            ((List_1_UnityEngine_Vector2_ *)this_00,item_10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
            );
  unaff_ESI = item_10.x;
code_?:
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                       );
    return (Vector2__Array *)pVVar4;
  }
code_?:
  pcVar5 = (char *)func_?();
  *(char *)((int)unaff_ESI + 3U) =
       *(char *)((int)unaff_ESI + 3U) + extraout_DH +
       CARRY1((byte)((uint)this_00 >> 8),*extraout_ECX);
  pbVar6 = extraout_ECX + (int)unaff_EDI;
  bVar7 = *pbVar6;
  *pbVar6 = *pbVar6 - SUB41(unaff_ESI,0);
  *pcVar5 = *pcVar5 + (char)extraout_ECX + (bVar7 < SUB41(unaff_ESI,0));
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector2__Array *)(*pcVar8)();
  return pVVar9;
}


/* Void UpdateCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_UpdateCursor
               (FaceCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  pCVar1 = info;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (info == (CubePickingInfo *)0x0) {
code_?:
    func_?(0);
  }
  else {
    uVar2._0_2_ = (info->fields).iLocalPos.x;
    uVar2._2_2_ = (info->fields).iLocalPos.y;
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    iVar3 = (info->fields).iLocalPos.z;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar3;
    iVector.x = (short)uVar2;
    iVector.y = (short)((uint)uVar2 >> 0x10);
    value = Cube::Cube_GetFaceVerticesWorld(cubeGameObject,cube,face,iVector,(MethodInfo *)0x0);
    this_00 = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Collections__Generic__List<int>)
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar4 = (this->fields).gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        (pGVar4,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    if (pUVar5 == (UseInteractorHandler *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                        ((MeshFilter *)pUVar5,(MethodInfo *)0x0);
    if (this_01 == (Mesh *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_01,(MethodInfo *)0x0);
    if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_None,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,
               UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_HideAll,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_HideAll,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_Blocking,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_None,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (this_01,value,(MethodInfo *)0x0);
    value_00 = FaceCursor_SetUVs(this,(info->fields).pickedEdge,(info->fields).pickedEdgeIndex1,
                                 (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(this_01,value_00,(MethodInfo *)0x0);
    value_01 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__ToArray
                         (this_00,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              (this_01,(Int32__Array *)value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
              (this_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds(this_01,(MethodInfo *)0x0)
    ;
    if ((info->fields).pickedEdge == 0) {
      pGVar4 = (this->fields).gameObject;
      if (pGVar4 != (GameObject *)0x0) {
        pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            (pGVar4,
                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                            );
        if (pUVar5 != (UseInteractorHandler *)0x0) {
          value_02 = (this->fields).materialNone;
          goto code_?;
        }
      }
      goto code_?;
    }
    if (((info->fields).pickedEdgeIndex0 != 0) || ((info->fields).pickedEdgeIndex1 != 0)) {
      pGVar4 = (this->fields).gameObject;
      if (pGVar4 != (GameObject *)0x0) {
        pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            (pGVar4,
                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                            );
        if (pUVar5 != (UseInteractorHandler *)0x0) {
          value_02 = (this->fields).materialCorner;
          goto code_?;
        }
      }
      goto code_?;
    }
    pGVar4 = (this->fields).gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        (pGVar4,
                         UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                        );
    if (pUVar5 == (UseInteractorHandler *)0x0) goto code_?;
    value_02 = (this->fields).materialEdge;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pUVar5,value_02,(MethodInfo *)0x0);
    pGVar4 = (this->fields).gameObject;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                        (this_01,(MethodInfo *)0x0);
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar7->max_length != 0) {
      if (pTVar6 != (Transform *)0x0) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                            ((Vector3 *)&stack0xffffffd4,pTVar6,pVVar7->vector[0],
                             (MethodInfo *)0x0);
        fVar9 = pVVar8->x;
        fVar10 = pVVar8->y;
        puVar11 = (undefined *)pVVar8->z;
        pGVar4 = (this->fields).gameObject;
        if (pGVar4 != (GameObject *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar4,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffec,pTVar6,(MethodInfo *)0x0);
            if (value != (Vector3__Array *)0x0) {
              if (value->max_length != 0) {
                uVar12._0_4_ = value->vector[0].x;
                uVar12._4_4_ = value->vector[0].y;
                fVar13 = value->vector[0].z;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  puVar11 = &UNK_?;
                  func_?();
                }
                info._2_2_ = (undefined2)((uint)puVar11 >> 0x10);
                info._0_2_ = SUB42(puVar11,0);
                a_00.z = fVar13;
                a_00.x = (float)(int)uVar12;
                a_00.y = (float)(int)((ulonglong)uVar12 >> 0x20);
                b.y = fVar10;
                b.x = fVar9;
                b.z._0_2_ = info._0_2_;
                b.z._2_2_ = info._2_2_;
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    ((Vector3 *)&stack0xffffffec,a_00,b,(MethodInfo *)0x0);
                method_00 = (MethodInfo *)pVVar8->x;
                fVar13 = pVVar8->y;
                fVar9 = pVVar8->z;
                pVVar8 = &(pCVar1->fields).normal;
                fVar14 = pVVar8->y;
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&stack0xffffffec,*pVVar8,0.001,method_00);
                fVar10 = pVVar8->z;
                puVar11 = &UNK_?;
                a_01.y = fVar13;
                a_01.x = (float)method_00;
                a_01.z = fVar9;
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&stack0xffffffe0,a_01,*pVVar8,(MethodInfo *)0x0);
                uVar15 = pVVar8->y;
                fStack16 = pVVar8->z;
                info._0_2_ = SUB42(puVar11,0);
                info._2_2_ = (undefined2)((uint)puVar11 >> 0x10);
                a.y._0_2_ = info._0_2_;
                a.x = fVar14;
                a.y._2_2_ = info._2_2_;
                a.z = fVar10;
                uStack17 = uVar15;
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&stack0xffffffd4,a,*pVVar8,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar6,*pVVar8,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* FaceCursor(Material, Material, Material) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor__ctor
               (FaceCursor *this,Material *materialEdgePath,Material *materialCornerPath,
               Material *materialNonePath,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_Cursor,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  value = (Material *)
          UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,(int32_t)value,(MethodInfo *)0x0);
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
        (this->fields).materialCorner = (Material *)0x0;
        (this->fields).materialEdge = value;
        (this->fields).materialNone = (Material *)&UNK_?;
        if (this_00 != (Worker *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

