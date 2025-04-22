
/* List`1[RTG.AABB] BuildVertOverlapAABBs(GameObject, Sprite, RTMesh) */

List_1_RTG_AABB_ *
Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_BuildVertOverlapAABBs
          (Object2ObjectSnapData *this,GameObject *gameObject,Sprite *sprite,RTMesh *rtMesh,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__Add_RTG__AABB_);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::AABB>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
  if ((bVar1 != 0) && (rtMesh == (RTMesh *)0x0)) {
    pLVar2 = (List_1_RTG_AABB_ *)
              func_?(TypeInfo__System__Collections__Generic__List<RTG::AABB>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<RTG::AABB>__List__);
    return pLVar2;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (rtMesh == (RTMesh *)0x0) goto code_?;
    fStack_3 = (rtMesh->fields)._aabb._size.x;
    fStack_4 = (rtMesh->fields)._aabb._size.y;
    fStack_5 = (rtMesh->fields)._aabb._size.z;
    fStack_6 = (rtMesh->fields)._aabb._center.x;
    uVar7._0_4_ = (rtMesh->fields)._aabb._center.y;
    uVar7._4_4_ = (rtMesh->fields)._aabb._center.z;
  }
  else {
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar8 = ObjectBounds::ObjectBounds_CalcSpriteModelAABB
                        ((AABB *)auStack_9,gameObject,(MethodInfo *)0x0);
    fStack_3 = (pAVar8->_size).x;
    fStack_4 = (pAVar8->_size).y;
    fStack_5 = (pAVar8->_size).z;
    fStack_6 = (pAVar8->_center).x;
    uVar7._0_4_ = (pAVar8->_center).y;
    uVar7._4_4_ = (pAVar8->_center).z;
  }
  uStack_10 = (undefined4)uVar7;
  fStack_11 = (float)((ulonglong)uVar7 >> 0x20);
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pLStack_12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLStack_12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    iVar13 = func_?();
    fVar14 = _UNK_?;
    uStack_15 = CONCAT44(fStack_4 + _UNK_?,0x3e4ccccd);
    fStack_16 = fStack_5 + _UNK_?;
    if (iVar13 != 0) {
      if (2 < *(uint *)(iVar13 + 0xc)) {
        *(undefined8 *)(iVar13 + 0x28) = uStack_15;
        *(float *)(iVar13 + 0x30) = fStack_16;
        uStack_15 = CONCAT44(fStack_4 + fVar14,0x3e4ccccd);
        fStack_16 = fStack_5 + fVar14;
        if (3 < *(uint *)(iVar13 + 0xc)) {
          *(undefined8 *)(iVar13 + 0x34) = uStack_15;
          *(float *)(iVar13 + 0x3c) = fStack_5 + fVar14;
          uStack_15 = CONCAT44(0x3e4ccccd,fStack_3 + fVar14);
          fStack_16 = fStack_5 + fVar14;
          if (4 < *(uint *)(iVar13 + 0xc)) {
            fStack_16 = fStack_5 + fVar14;
            *(undefined8 *)(iVar13 + 0x40) = uStack_15;
            *(float *)(iVar13 + 0x48) = fStack_5 + fVar14;
            uStack_15 = CONCAT44(0x3e4ccccd,fStack_3 + fVar14);
            if (5 < *(uint *)(iVar13 + 0xc)) {
              *(undefined8 *)(iVar13 + 0x4c) = uStack_15;
              *(float *)(iVar13 + 0x54) = fStack_16;
              fStack_16 = 0.2;
              uStack_15 = CONCAT44(fStack_4 + fVar14,fStack_3 + fVar14);
              if (1 < *(uint *)(iVar13 + 0xc)) {
                *(undefined8 *)(iVar13 + 0x1c) = uStack_15;
                *(undefined4 *)(iVar13 + 0x24) = 0x3e4ccccd;
                uStack_15 = CONCAT44(fStack_4 + fVar14,fStack_3 + fVar14);
                fStack_16 = 0.2;
                if (*(int *)(iVar13 + 0xc) != 0) {
                  *(undefined8 *)(iVar13 + 0x10) = uStack_15;
                  *(undefined4 *)(iVar13 + 0x18) = 0x3e4ccccd;
                  this_00 = (List_1_UnityEngine_Rendering_RenderTargetIdentifier_ *)
                            func_?();
                  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata
                  ::__Il2CppFullySharedGenericType]::
                  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                             this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::AABB>__List__);
                  sprite = (Sprite *)(iVar13 + 0x10);
                  index = 0;
                  while( true ) {
                    if ((pLStack_12->fields)._size <= (int)index) {
                      return (List_1_RTG_AABB_ *)this_00;
                    }
                    RStack_17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (pLStack_12,index,
                                           MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_
                                          );
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    boxRotation = TypeInfo__UnityEngine__Quaternion->static_fields->
                                  identityQuaternion;
                    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    boxCenter_00.y = (float)uStack_10;
                    boxCenter_00.x = fStack_6;
                    boxCenter_00.z = fStack_11;
                    boxSize_00.y = fStack_4;
                    boxSize_00.x = fStack_3;
                    boxSize_00.z = fStack_5;
                    pVVar18 = BoxMath::BoxMath_CalcBoxFaceCenter
                                        ((Vector3 *)&stack0xffffff7c,boxCenter_00,boxSize_00,
                                         boxRotation,(BoxFace__Enum)RStack_17,(MethodInfo *)0x0);
                    uStack_19._0_4_ = pVVar18->x;
                    uStack_19._4_4_ = pVVar18->y;
                    fStack_20 = pVVar18->z;
                    if (cRam_? == '\0') {
                      ppQStack_21 = &TypeInfo__UnityEngine__Quaternion;
                      func_?();
                      cRam_? = '\x01';
                    }
                    boxSize.y = fStack_4;
                    boxSize.x = fStack_3;
                    boxCenter.y = (float)uStack_10;
                    boxCenter.x = fStack_6;
                    boxCenter.z = fStack_11;
                    boxSize.z = fStack_5;
                    pVVar18 = BoxMath::BoxMath_CalcBoxFaceNormal
                                        ((Vector3 *)&stack0xffffff70,boxCenter,boxSize,
                                         TypeInfo__UnityEngine__Quaternion->static_fields->
                                         identityQuaternion,(BoxFace__Enum)RStack_17,
                                         (MethodInfo *)0x0);
                    uStack_15._0_4_ = pVVar18->x;
                    uStack_15._4_4_ = pVVar18->y;
                    fStack_16 = pVVar18->z;
                    puStack_22 = (undefined *)
                                 ((float)uStack_19 - (float)(undefined4)uStack_15 * _UNK_?);
                    ppQStack_21 = (Quaternion__Class **)
                                  (uStack_19._4_4_ - (float)uStack_15._4_4_ * _UNK_?);
                    fStack_23 = fStack_20 - fStack_16 * _UNK_?;
                    if (*(uint *)(iVar13 + 0xc) <= index) break;
                    auStack_9._16_4_ = 0.0;
                    auStack_9._20_4_ = 0.0;
                    RStack_24.First = 0;
                    RStack_24.Last = 0;
                    auStack_9._0_4_ = 0.0;
                    auStack_9._4_4_ = 0.0;
                    auStack_9._8_4_ = 0.0;
                    auStack_9._12_4_ = (void *)0x0;
                    center.y = (float)ppQStack_21;
                    center.x = (float)puStack_22;
                    center.z = fStack_23;
                    AABB::AABB__ctor((AABB *)auStack_9,center,(Vector3)*sprite,(MethodInfo *)0x0);
                    pMVar25 = 
                    MethodInfo__System__Collections__Generic__List<RTG::AABB>__Add_RTG__AABB_;
                    if (this_00 == (List_1_UnityEngine_Rendering_RenderTargetIdentifier_ *)0x0)
                    goto code_?;
                    piVar26 = &(this_00->fields)._version;
                    *piVar26 = *piVar26 + 1;
                    pRVar27 = (this_00->fields)._items;
                    if (pRVar27 == (RenderTargetIdentifier__Array *)0x0) goto code_?;
                    uVar28 = (this_00->fields)._size;
                    if (uVar28 < pRVar27->max_length) {
                      (this_00->fields)._size = uVar28 + 1;
                      RStack_17 = RStack_24;
                      if (pRVar27->max_length <= uVar28) break;
                      index = index + 1;
                      sprite = sprite + 1;
                      pRVar29 = pRVar27->vector + uVar28;
                      pRVar29->m_Type = auStack_9._0_4_;
                      pRVar29->m_NameID = auStack_9._4_4_;
                      pRVar29->m_InstanceID = auStack_9._8_4_;
                      pRVar29->m_BufferPointer = (void *)auStack_9._12_4_;
                      pRVar27->vector[uVar28].m_MipLevel = auStack_9._16_4_;
                      pRVar27->vector[uVar28].m_CubeFace = auStack_9._20_4_;
                      pRVar27->vector[uVar28].m_DepthSlice = (int32_t)RStack_24;
                    }
                    else {
                      item.m_NameID = auStack_9._4_4_;
                      item.m_Type = auStack_9._0_4_;
                      item.m_InstanceID = auStack_9._8_4_;
                      item.m_BufferPointer = (void *)auStack_9._12_4_;
                      item.m_MipLevel = (int32_t)(float)auStack_9._16_8_;
                      item.m_CubeFace = (int32_t)SUB84(auStack_9._16_8_,4);
                      item.m_DepthSlice._0_2_ = RStack_24.First;
                      item.m_DepthSlice._2_2_ = RStack_24.Last;
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Rendering::
                      RenderTargetIdentifier]::
                      List_1_UnityEngine_Rendering_RenderTargetIdentifier__AddWithResize
                                (this_00,item,pMVar25->klass->rgctx_data[0xe].method);
                      index = index + 1;
                      sprite = sprite + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  pLVar2 = (List_1_RTG_AABB_ *)(*pcVar30)();
  return pLVar2;
}


/* List`1[RTG.OBB] GetAllWorldSnapAreaBounds() */

List_1_RTG_OBB_ *
Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_GetAllWorldSnapAreaBounds
          (Object2ObjectSnapData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::OBB>__Add_RTG__OBB_);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::OBB>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::OBB>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::OBB>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar3 = (List_1_RTG_OBB_ *)
              func_?(TypeInfo__System__Collections__Generic__List<RTG::OBB>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
               MethodInfo__System__Collections__Generic__List<RTG::OBB>__List__);
    return pLVar3;
  }
  pGVar1 = (this->fields)._gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    worldTransform =
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                   (pGVar1,(MethodInfo *)0x0);
    pAVar4 = (this->fields)._snapAreaBounds;
    if (pAVar4 != (AABB__Array *)0x0) {
      this_00 = (List_1_UnityEngine_RaycastHit_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)this_00,pAVar4->max_length,
                 MethodInfo__System__Collections__Generic__List<RTG::OBB>__List_int_);
      pAVar4 = (this->fields)._snapAreaBounds;
      uVar5 = 0;
      if (pAVar4 != (AABB__Array *)0x0) {
        pAVar6 = pAVar4->vector;
        while( true ) {
          if ((int)pAVar4->max_length <= (int)uVar5) {
            return (List_1_RTG_OBB_ *)this_00;
          }
          if (pAVar4->max_length <= uVar5) break;
          fVar7 = 6.16571e-44;
          fVar8 = 0.0;
          func_?(&stack0xffffffc8);
          uVar9 = (pAVar6->_center).z;
          uVar10 = (pAVar6->_size).x;
          uVar11 = (pAVar6->_size).y;
          uVar12 = (pAVar6->_size).z;
          modelSpaceAABB._size.z = (float)uVar12;
          modelSpaceAABB._size.y = (float)uVar11;
          modelSpaceAABB._size.x = (float)uVar10;
          uVar13 = (pAVar6->_center).x;
          uVar14 = (pAVar6->_center).y;
          modelSpaceAABB._center.y = (float)uVar14;
          modelSpaceAABB._center.x = (float)uVar13;
          modelSpaceAABB._center.z = (float)uVar9;
          modelSpaceAABB._isValid = pAVar6->_isValid;
          modelSpaceAABB._25_3_ = *(undefined3 *)&pAVar6->field_0x19;
          OBB::OBB__ctor_7((OBB *)&stack0xffffffc8,modelSpaceAABB,worldTransform,(MethodInfo *)0x0);
          pMVar15 = MethodInfo__System__Collections__Generic__List<RTG::OBB>__Add_RTG__OBB_;
          if (this_00 == (List_1_UnityEngine_RaycastHit_ *)0x0) goto code_?;
          piVar16 = &(this_00->fields)._version;
          *piVar16 = *piVar16 + 1;
          pRVar17 = (this_00->fields)._items;
          if (pRVar17 == (RaycastHit__Array *)0x0) goto code_?;
          uVar18 = (this_00->fields)._size;
          if (uVar18 < pRVar17->max_length) {
            (this_00->fields)._size = uVar18 + 1;
            if (pRVar17->max_length <= uVar18) break;
            uVar5 = uVar5 + 1;
            pAVar6 = pAVar6 + 1;
            pRVar19 = pRVar17->vector + uVar18;
            (pRVar19->m_Point).x = fVar8;
            (pRVar19->m_Point).y = fVar7;
            (pRVar19->m_Point).z = fStack_20;
            (pRVar19->m_Normal).x = fStack_21;
            pfVar22 = &pRVar17->vector[uVar18].m_Normal.y;
            *pfVar22 = fStack_23;
            pfVar22[1] = fStack_24;
            pfVar22[2] = fStack_25;
            pfVar22[3] = fStack_26;
            pRVar17->vector[uVar18].m_UV = VStack_27;
            pRVar17->vector[uVar18].m_Collider = iStack_28;
          }
          else {
            item.m_Point.y = fVar7;
            item.m_Point.x = fVar8;
            item.m_Point.z = fStack_20;
            item.m_Normal.x = fStack_21;
            item.m_Normal.y = fStack_23;
            item.m_Normal.z = fStack_24;
            item.m_FaceID = (uint32_t)fStack_25;
            item.m_Distance = fStack_26;
            item.m_UV.x = VStack_27.x;
            item.m_UV.y = VStack_27.y;
            item.m_Collider = iStack_28;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::RaycastHit]::
            List_1_UnityEngine_RaycastHit__AddWithResize
                      (this_00,item,pMVar15->klass->rgctx_data[0xe].method);
            uVar5 = uVar5 + 1;
            pAVar6 = pAVar6 + 1;
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  pLVar3 = (List_1_RTG_OBB_ *)(*pcVar29)();
  return pLVar3;
}


/* OBB GetWorldSnapAreaBounds(BoxFace) */

OBB * Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                (OBB *__return_storage_ptr__,Object2ObjectSnapData *this,BoxFace__Enum boxFace,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields)._gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      worldTransform =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (pGVar1,(MethodInfo *)0x0);
      pAVar3 = (this->fields)._snapAreaBounds;
      if (pAVar3 != (AABB__Array *)0x0) {
        if (boxFace < pAVar3->max_length) {
          pAVar4 = pAVar3->vector + boxFace;
          uVar5 = (pAVar4->_size).x;
          uVar6 = (pAVar4->_size).y;
          uVar7 = (pAVar4->_size).z;
          modelSpaceAABB._size.z = (float)uVar7;
          modelSpaceAABB._size.y = (float)uVar6;
          modelSpaceAABB._size.x = (float)uVar5;
          uVar8 = (pAVar4->_center).x;
          modelSpaceAABB._center.x = (float)uVar8;
          uVar9 = pAVar3->vector[boxFace]._center.y;
          uVar10 = pAVar3->vector[boxFace]._center.z;
          func_?(__return_storage_ptr__);
          modelSpaceAABB._center.y = (float)uVar9;
          modelSpaceAABB._center.z = (float)uVar10;
          modelSpaceAABB._isValid = pAVar3->vector[boxFace]._isValid;
          modelSpaceAABB._25_3_ = *(undefined3 *)&pAVar3->vector[boxFace].field_0x19;
          OBB::OBB__ctor_7(__return_storage_ptr__,modelSpaceAABB,worldTransform,(MethodInfo *)0x0);
          return __return_storage_ptr__;
        }
        func_?();
      }
    }
    func_?();
    pcVar11 = (code *)swi(3);
    pOVar12 = (OBB *)(*pcVar11)();
    return pOVar12;
  }
  pOVar12 = OBB::OBB_GetInvalid((OBB *)&stack0xffffffb8,(MethodInfo *)0x0);
  fVar13 = (pOVar12->_size).y;
  fVar14 = (pOVar12->_size).z;
  fVar15 = (pOVar12->_center).x;
  (__return_storage_ptr__->_size).x = (pOVar12->_size).x;
  (__return_storage_ptr__->_size).y = fVar13;
  (__return_storage_ptr__->_size).z = fVar14;
  (__return_storage_ptr__->_center).x = fVar15;
  fVar13 = (pOVar12->_center).z;
  fVar14 = (pOVar12->_rotation).x;
  fVar15 = (pOVar12->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar12->_center).y;
  (__return_storage_ptr__->_center).z = fVar13;
  (__return_storage_ptr__->_rotation).x = fVar14;
  (__return_storage_ptr__->_rotation).y = fVar15;
  fVar13 = (pOVar12->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar12->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar13;
  uVar16 = *(undefined3 *)&pOVar12->field_0x29;
  __return_storage_ptr__->_isValid = pOVar12->_isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar16;
  return __return_storage_ptr__;
}


/* BoxFaceAreaDesc GetWorldSnapAreaDesc(BoxFace) */

BoxFaceAreaDesc
Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
          (Object2ObjectSnapData *this,BoxFace__Enum boxFace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._snapAreaBounds;
  if (pAVar1 != (AABB__Array *)0x0) {
    if (pAVar1->max_length <= boxFace) goto code_?;
    fVar2 = pAVar1->vector[boxFace]._size.y;
    fVar3 = pAVar1->vector[boxFace]._size.z;
    this_00 = (this->fields)._gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
        fVar5 = 0.0;
        pVVar4 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffd8,*pVVar4,(MethodInfo *)0x0);
        uVar6 = pVVar4->x;
        uVar7 = pVVar4->y;
        fVar5 = fVar5 * (float)uVar6;
        fVar2 = fVar2 * (float)uVar7;
        fVar3 = pVVar4->z * fVar3;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        boxSize.y = fVar2;
        boxSize.x = fVar5;
        boxSize.z = fVar3;
        BVar8 = BoxMath::BoxMath_GetBoxFaceAreaDesc(boxSize,boxFace,(MethodInfo *)0x0);
        return BVar8;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  BVar8 = (BoxFaceAreaDesc)(*pcVar9)();
  return BVar8;
}


/* Boolean Initialize(GameObject) */

bool Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData_Initialize
               (Object2ObjectSnapData *this,GameObject *gameObject,MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  method_00 = in_stack_4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::AABB>__get_Item_int_);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__RTG__ObjectVertexCollect);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    cRam_? = '\x01';
    method_00 = in_stack_4;
  }
  LStack_5._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_5._index = 0;
  LStack_5._version = 0;
  LStack_5._current.First = 0;
  LStack_5._current.Last = 0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) goto code_?;
  x = (this->fields)._gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  method_01 = (MethodInfo *)&UNK_?;
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) goto code_?;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  unityMesh = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  sprite = GameObjectEx::GameObjectEx_GetSprite(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) goto code_?;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = GameObjectEx::GameObjectEx_GetMeshRenderer(gameObject,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      if (this_00 == (Renderer *)0x0) goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                         (this_00,(MethodInfo *)0x0);
      bVar7 = true;
      if (bVar6 == 0) goto code_?;
    }
    else {
code_?:
      bVar7 = false;
    }
    if ((TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = (RTMeshDb *)func_?();
    if (this_01 == (RTMeshDb *)0x0) goto code_?;
    this_03 = RTMeshDb::RTMeshDb_GetRTMesh(this_01,unityMesh,(MethodInfo *)0x0);
    if (this_03 == (RTMesh *)0x0) goto code_?;
  }
  else {
    this_03 = (RTMesh *)0x0;
code_?:
    bVar7 = false;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) goto code_?;
  }
  if (bVar7) {
    rtMesh = this_03;
    sprite_00 = (Sprite *)0x0;
  }
  else {
    rtMesh = (RTMesh *)0x0;
    sprite_00 = sprite;
  }
  this_02 = (List_1_UnityEngine_Rendering_RenderTargetIdentifier_ *)
            Object2ObjectSnapData_BuildVertOverlapAABBs
                      (this,gameObject,sprite_00,rtMesh,(MethodInfo *)0x0);
  if (this_02 != (List_1_UnityEngine_Rendering_RenderTargetIdentifier_ *)0x0) {
    if ((this_02->fields)._size == 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (bVar7) {
      if (this_03 == (RTMesh *)0x0) goto code_?;
      puVar8 = (undefined *)(this_03->fields)._aabb._size.x;
      puVar9 = (undefined *)(this_03->fields)._aabb._size.y;
      puVar10 = (undefined *)(this_03->fields)._aabb._size.z;
      puVar11 = (undefined *)(this_03->fields)._aabb._center.x;
      uVar12._0_4_ = (this_03->fields)._aabb._center.y;
      uVar12._4_4_ = (this_03->fields)._aabb._center.z;
    }
    else {
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar13 = ObjectBounds::ObjectBounds_CalcSpriteModelAABB
                          ((AABB *)&stack0xffffff78,gameObject,(MethodInfo *)0x0);
      puVar8 = (undefined *)(pAVar13->_size).x;
      puVar9 = (undefined *)(pAVar13->_size).y;
      puVar10 = (undefined *)(pAVar13->_size).z;
      puVar11 = (undefined *)(pAVar13->_center).x;
      uVar12._0_4_ = (pAVar13->_center).y;
      uVar12._4_4_ = (pAVar13->_center).z;
    }
    uVar14 = (undefined4)uVar12;
    fVar15 = (float)((ulonglong)uVar12 >> 0x20);
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar16 = BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
    uStack_17 = CONCAT44(pLVar16,(undefined4)uStack_17);
    (this->fields)._gameObject = gameObject;
    func_?();
    if (uStack_17._4_4_ != 0) {
      if (bVar7) {
        puVar18 = (undefined4 *)func_?();
        LStack_5._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar18;
        LStack_5._index = puVar18[1];
        LStack_5._version = puVar18[2];
        LStack_5._current = *(RegexCharClass_SingleRange *)(puVar18 + 3);
        puStack_1 = (undefined *)0x1;
        while (bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Text::RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                                  ), RVar19 = LStack_5._current, bVar6 != 0) {
          pRVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Rendering::
                    RenderTargetIdentifier]::
                    List_1_UnityEngine_Rendering_RenderTargetIdentifier__get_Item
                              ((RenderTargetIdentifier *)&stack0xffffff78,this_02,
                               (int32_t)LStack_5._current,
                               MethodInfo__System__Collections__Generic__List<RTG::AABB>__get_Item_int_
                              );
          if (this_03 == (RTMesh *)0x0) goto code_?;
          uVar21 = pRVar20->m_CubeFace;
          uVar22 = pRVar20->m_Type;
          uVar23 = pRVar20->m_NameID;
          uVar24 = pRVar20->m_InstanceID;
          uVar25 = pRVar20->m_BufferPointer;
          uVar26 = pRVar20->m_MipLevel;
          modelAABB._center.y = (float)uVar26;
          modelAABB._center.x = (float)uVar25;
          modelAABB._size.z = (float)uVar24;
          modelAABB._size.y = (float)uVar23;
          modelAABB._size.x = (float)uVar22;
          modelAABB._center.z = (float)uVar21;
          modelAABB._24_4_ = pRVar20->m_DepthSlice;
          RTMesh::RTMesh_OverlapModelVerts_1
                    (this_03,modelAABB,(this->fields)._vertsBuffer,(MethodInfo *)0x0);
          puVar27 = puVar8;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            puVar27 = puVar8;
          }
          pQVar28 = TypeInfo__UnityEngine__Quaternion->static_fields;
          fVar15 = (pQVar28->identityQuaternion).x;
          puVar8 = (undefined *)(pQVar28->identityQuaternion).y;
          pBVar29 = (BoxMath__Class *)(pQVar28->identityQuaternion).z;
          fVar30 = (pQVar28->identityQuaternion).w;
          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
            puVar8 = &UNK_?;
            pBVar29 = TypeInfo__RTG__BoxMath;
            func_?();
          }
          method_00 = (MethodInfo *)&UNK_?;
          boxCenter_00.y = fVar15;
          boxCenter_00.x = (float)puVar11;
          boxCenter_00.z = (float)puVar8;
          boxSize_01.y = (float)puVar9;
          boxSize_01.x = (float)puVar27;
          boxSize_01.z = (float)puVar10;
          boxRotation_00.y = (float)puVar8;
          boxRotation_00.x = fVar15;
          boxRotation_00.z = (float)pBVar29;
          boxRotation_00.w = fVar30;
          pPVar31 = BoxMath::BoxMath_CalcBoxFacePlane
                              ((Plane *)&stack0xffffff44,boxCenter_00,boxSize_01,boxRotation_00,
                               (BoxFace__Enum)RVar19,(MethodInfo *)0x0);
          this_02 = (List_1_UnityEngine_Rendering_RenderTargetIdentifier_ *)(pPVar31->m_Normal).x;
          pAVar32 = (this->fields)._snapAreaBounds;
          this_03 = (RTMesh *)(this->fields)._vertsBuffer;
          uStack_17 = CONCAT44(&UNK_?,(undefined4)uStack_17);
          pLVar33 = PlaneEx::PlaneEx_ProjectAllPoints
                              (*pPVar31,(List_1_UnityEngine_Vector3_ *)this_03,(MethodInfo *)0x0);
          fVar34 = 0.0;
          fVar15 = 0.0;
          fVar30 = 0.0;
          fVar35 = 0.0;
          fVar36 = 0.0;
          fVar37 = 0.0;
          fVar38 = 0.0;
          puVar11 = puVar10;
          AABB::AABB__ctor_2((AABB *)&stack0xffffff5c,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar33,
                             (MethodInfo *)0x0);
          if (pAVar32 == (AABB__Array *)0x0) goto code_?;
          if (pAVar32->max_length <= (uint)RVar19) {
            func_?();
code_?:
            func_?();
code_?:
            func_?();
            goto code_?;
          }
          pAVar13 = pAVar32->vector + (int)RVar19;
          (pAVar13->_size).x = fVar15;
          (pAVar13->_size).y = fVar30;
          (pAVar13->_size).z = fVar35;
          (pAVar13->_center).x = fVar36;
          pAVar32->vector[(int)RVar19]._center.y = fVar37;
          pAVar32->vector[(int)RVar19]._center.z = fVar38;
          *(float *)&pAVar32->vector[(int)RVar19]._isValid = fVar34;
          if (iRam_? == 0) goto code_?;
          if ((uint)*(RegexCharClass_SingleRange *)(iRam_? + 0xc) <= (uint)RVar19)
          goto code_?;
          uVar12 = *(undefined8 *)(iRam_? + 0x10 + (int)RVar19 * 0x1c);
          fVar15 = *(float *)(iRam_? + 0x18 + (int)RVar19 * 0x1c);
          this = (Object2ObjectSnapData *)((ulonglong)uVar12 >> 0x20);
          boxSize.z = fVar15;
          boxSize.x = (float)(int)uVar12;
          boxSize.y = (float)(int)((ulonglong)uVar12 >> 0x20);
          puVar10 = puVar9;
          BVar39 = BoxMath::BoxMath_GetBoxFaceAreaDesc
                             (boxSize,(BoxFace__Enum)RVar19,(MethodInfo *)0x0);
          if (fVar15 == 0.0) goto code_?;
          if ((uint)*(RegexCharClass_SingleRange *)((int)fVar15 + 0xc) <= (uint)RVar19)
          goto code_?;
          *(int32_t *)((int)fVar15 + 0x10 + (int)RVar19 * 8) = BVar39.AreaType;
          *(float *)((int)fVar15 + 0x14 + (int)RVar19 * 8) = BVar39.Area;
          puVar9 = puVar27;
        }
      }
      else {
        puVar18 = (undefined4 *)func_?();
        LStack_5._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar18;
        LStack_5._index = puVar18[1];
        LStack_5._version = puVar18[2];
        LStack_5._current = *(RegexCharClass_SingleRange *)(puVar18 + 3);
        puStack_1 = (undefined *)0x4;
        while (bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Text::RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                                  ), RVar19 = LStack_5._current, bVar6 != 0) {
          if ((LStack_5._current == (RegexCharClass_SingleRange)0x0) ||
             (LStack_5._current == (RegexCharClass_SingleRange)0x1)) {
            pAVar32 = (this->fields)._snapAreaBounds;
            pAVar13 = AABB::AABB_GetInvalid((AABB *)&puStack_40,(MethodInfo *)0x0);
            if (pAVar32 == (AABB__Array *)0x0) goto code_?;
            method_00 = (MethodInfo *)(pAVar13->_center).z;
            func_?();
            pBVar41 = (this->fields)._snapAreaDesc;
            BVar39 = BoxFaceAreaDesc::BoxFaceAreaDesc_GetInvalid((MethodInfo *)0x0);
            if (pBVar41 == (BoxFaceAreaDesc__Array *)0x0) goto code_?;
            if (pBVar41->max_length <= (uint)RVar19) goto code_?;
          }
          else {
            puVar18 = (undefined4 *)func_?();
            uVar42 = *puVar18;
            uVar43 = puVar18[1];
            uVar44 = puVar18[2];
            uVar45 = puVar18[3];
            uStack_17 = *(undefined8 *)(puVar18 + 4);
            uVar46 = puVar18[6];
            if ((TypeInfo__RTG__ObjectVertexCollect->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__ObjectVertexCollect);
            }
            collectAABB._size.y = (float)uVar43;
            collectAABB._size.x = (float)uVar42;
            collectAABB._size.z = (float)uVar44;
            collectAABB._center.x = (float)uVar45;
            collectAABB._center.y = (float)(int)uStack_17;
            collectAABB._center.z = (float)(int)((ulonglong)uStack_17 >> 0x20);
            collectAABB._24_4_ = uVar46;
            pLVar33 = ObjectVertexCollect::ObjectVertexCollect_CollectModelSpriteVerts
                                (sprite,collectAABB,(MethodInfo *)0x0);
            pQVar47 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                      MVWorldObject_get_WorldRotation
                                ((Quaternion *)&stack0xffffff44,(MVWorldObject *)0x0,method_01);
            fVar30 = pQVar47->x;
            fVar35 = pQVar47->y;
            fVar36 = pQVar47->z;
            method_01 = (MethodInfo *)pQVar47->w;
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            boxCenter.y = (float)uVar14;
            boxCenter.x = (float)puVar11;
            boxCenter.z = fVar15;
            boxSize_00.y = (float)puVar9;
            boxSize_00.x = (float)puVar8;
            boxSize_00.z = (float)puVar10;
            boxRotation.y = fVar35;
            boxRotation.x = fVar30;
            boxRotation.z = fVar36;
            boxRotation.w = (float)method_01;
            pPVar31 = BoxMath::BoxMath_CalcBoxFacePlane
                                ((Plane *)&stack0xffffff68,boxCenter,boxSize_00,boxRotation,
                                 (BoxFace__Enum)RVar19,(MethodInfo *)0x0);
            pLVar33 = PlaneEx::PlaneEx_ProjectAllPoints(*pPVar31,pLVar33,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)0x0;
            pAVar32 = (this->fields)._snapAreaBounds;
            AABB::AABB__ctor_2((AABB *)&stack0xffffff78,
                               (IEnumerable_1_UnityEngine_Vector3_ *)pLVar33,(MethodInfo *)0x0);
            if (pAVar32 == (AABB__Array *)0x0) goto code_?;
            func_?();
            pBVar41 = (this->fields)._snapAreaDesc;
            if ((this->fields)._snapAreaBounds == (AABB__Array *)0x0) goto code_?;
            pVVar48 = (Vector3 *)func_?();
            BVar39 = BoxMath::BoxMath_GetBoxFaceAreaDesc
                               (*pVVar48,(BoxFace__Enum)RVar19,(MethodInfo *)0x0);
            if (pBVar41 == (BoxFaceAreaDesc__Array *)0x0) goto code_?;
            if (pBVar41->max_length <= (uint)RVar19) goto code_?;
          }
          pBVar41->vector[(int)RVar19].AreaType = BVar39.AreaType;
          pBVar41->vector[(int)RVar19].Area = BVar39.Area;
        }
      }
      puStack_1 = (undefined *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_5,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                 ,method_00);
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar49 = (code *)swi(3);
  bVar6 = (*pcVar49)();
  return bVar6;
}


/* Object2ObjectSnapData() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnapData::Object2ObjectSnapData__ctor
               (Object2ObjectSnapData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AABB);
    func_?(&TypeInfo__RTG__BoxFaceAreaDesc);
    func_?(&TypeRef__RTG__BoxFace);
    func_?(&TypeInfo__System__Enum);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__RTG__BoxFace;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Enum);
  }
  pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar1,(MethodInfo *)0x0);
  if (pAVar2 != (Array *)0x0) {
    mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
    pAVar3 = (AABB__Array *)func_?(TypeInfo__RTG__AABB);
    (this->fields)._snapAreaBounds = pAVar3;
    func_?(&(this->fields)._snapAreaBounds,pAVar3);
    pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__RTG__BoxFace,(MethodInfo *)0x0);
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar1,(MethodInfo *)0x0);
    if (pAVar2 != (Array *)0x0) {
      mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
      pBVar4 = (BoxFaceAreaDesc__Array *)func_?(TypeInfo__RTG__BoxFaceAreaDesc);
      (this->fields)._snapAreaDesc = pBVar4;
      func_?(&(this->fields)._snapAreaDesc,pBVar4);
      this_00 = (List_1_UnityEngine_Vector3_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      method_00 = (MethodInfo *)&(this->fields)._vertsBuffer;
      (this->fields)._vertsBuffer = this_00;
      func_?(method_00,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

