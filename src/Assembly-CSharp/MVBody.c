
/* Void AlignModel(String, Transform, GameObject) */

void Assembly-CSharp.dll::MVBody::MVBody_AlignModel
               (MVBody *this,String *boneName,Transform *bone,GameObject *model,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_LArm);
    func_?(&StringLiteral_Torso);
    func_?(&StringLiteral_LLowLeg);
    func_?(&StringLiteral_RUpLeg);
    func_?(&StringLiteral_Head);
    func_?(&StringLiteral_LUpLeg);
    func_?(&StringLiteral_RArm);
    func_?(&StringLiteral_RLowLeg);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pBVar2 = (pMVar1->fields).bodyData, pBVar2 != (BodyData *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (pBVar2->fields).partMap;
    pVVar3 = (pBVar2->fields).PartBoneSpacePosition;
    if ((this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
       (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (this_00,(Object *)boneName,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                           ), pVVar3 != (Vector3__Array *)0x0)) {
      if (pVVar3->max_length <= (uint)TVar4.m_Index) goto code_?;
      uStack_5._0_4_ = pVVar3->vector[TVar4.m_Index].x;
      uStack_5._4_4_ = pVVar3->vector[TVar4.m_Index].y;
      fStack_6 = pVVar3->vector[TVar4.m_Index].z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar8 = (pQVar7->identityQuaternion).x;
      fVar9 = (pQVar7->identityQuaternion).y;
      fStack_10 = (pQVar7->identityQuaternion).z;
      fStack_11 = (pQVar7->identityQuaternion).w;
      uVar12 = UnityEngine.IMGUIModule.dll::<PrivateImplementationDetails>::
               _PrivateImplementationDetails__5_ComputeStringHash(boneName,(MethodInfo *)0x0);
      if (uVar12 < 0x7481398c) {
        if (0x37914e64 < uVar12) {
          if (uVar12 == 0x5f982365) {
            bVar13 = mscorlib.dll::System::String::String_op_Equality
                               (boneName,StringLiteral_LLowLeg,(MethodInfo *)0x0);
            if (bVar13 == 0) goto code_?;
            if (bone != (Transform *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
              uStack_15._0_4_ = pVVar14->x;
              uStack_15._4_4_ = pVVar14->y;
              fVar8 = pVVar14->z;
              pVVar14 = (Vector3 *)&stack0xffffffb0;
              goto code_?;
            }
          }
          else {
            if ((uVar12 != 0x7481398b) ||
               (bVar13 = mscorlib.dll::System::String::String_op_Equality
                                   (boneName,StringLiteral_LArm,(MethodInfo *)0x0), bVar13 == 0))
            goto code_?;
            if (bone != (Transform *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
              uStack_16._0_4_ = pVVar14->x;
              uStack_16._4_4_ = pVVar14->y;
              fStack_17 = pVVar14->z;
              fVar18 = (float)((undefined4)uStack_16 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              uStack_15 = CONCAT44(uStack_16._4_4_ ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   ,(undefined4)uStack_15);
              VStack_19.z = (float)((uint)fStack_17 ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   );
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
              uVar20 = pVVar14->x;
              uVar21 = pVVar14->y;
              fVar9 = pVVar14->z;
              uVar22 = uStack_15._4_4_;
              fVar8 = VStack_19.z;
              uVar23 = uVar20;
              uVar24 = uVar21;
              goto code_?;
            }
          }
          goto code_?;
        }
        if (uVar12 == 0x36055caa) {
          bVar13 = mscorlib.dll::System::String::String_op_Equality
                             (boneName,StringLiteral_LUpLeg,(MethodInfo *)0x0);
          if (bVar13 != 0) {
            if (bone != (Transform *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
              uStack_15._0_4_ = pVVar14->x;
              uStack_15._4_4_ = pVVar14->y;
              fVar8 = pVVar14->z;
              pVVar14 = (Vector3 *)&stack0xffffffb0;
              goto code_?;
            }
            goto code_?;
          }
        }
        else if ((uVar12 == 0x37914e64) &&
                (bVar13 = mscorlib.dll::System::String::String_op_Equality
                                    (boneName,StringLiteral_Torso,(MethodInfo *)0x0), bVar13 != 0))
        {
          if (bone == (Transform *)0x0) goto code_?;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
          uStack_16._0_4_ = pVVar14->x;
          uStack_16._4_4_ = pVVar14->y;
          fStack_17 = pVVar14->z;
          fVar8 = (float)((undefined4)uStack_16 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          uStack_15 = CONCAT44(uStack_16._4_4_ ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               ,(undefined4)uStack_15);
          VStack_19.z = (float)((uint)fStack_17 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
          forward_00.y = (float)uStack_15._4_4_;
          forward_00.x = fVar8;
          forward_00.z = VStack_19.z;
          pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                              ((Quaternion *)&stack0xffffffa0,forward_00,*pVVar14,(MethodInfo *)0x0)
          ;
          fVar8 = pQVar25->x;
          fVar9 = pQVar25->y;
          fStack_10 = pQVar25->z;
          fStack_11 = pQVar25->w;
        }
      }
      else {
        if (uVar12 < 0xa83422c6) {
          if (uVar12 == 0x7597e72c) {
            bVar13 = mscorlib.dll::System::String::String_op_Equality
                               (boneName,StringLiteral_RUpLeg,(MethodInfo *)0x0);
            if (bVar13 == 0) goto code_?;
            if (bone != (Transform *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  (&VStack_19,bone,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            if ((uVar12 != 0xa83422c5) ||
               (bVar13 = mscorlib.dll::System::String::String_op_Equality
                                   (boneName,StringLiteral_RArm,(MethodInfo *)0x0), bVar13 == 0))
            goto code_?;
            if (bone != (Transform *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  (&VStack_19,bone,(MethodInfo *)0x0);
              uStack_16._0_4_ = pVVar14->x;
              uStack_16._4_4_ = pVVar14->y;
              fStack_17 = pVVar14->z;
              fVar18 = (float)((undefined4)uStack_16 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              uStack_15 = CONCAT44(uStack_16._4_4_ ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   ,(undefined4)uStack_15);
              VStack_19.z = (float)((uint)fStack_17 ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   );
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
              uStack_16._0_4_ = pVVar14->x;
              uStack_16._4_4_ = pVVar14->y;
              uVar23 = (undefined4)uStack_16 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
              uVar24 = uStack_16._4_4_ ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
              fVar9 = (float)((uint)pVVar14->z ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
              uVar22 = uStack_15._4_4_;
              fVar8 = VStack_19.z;
              fStack_17 = fVar9;
              goto code_?;
            }
          }
          goto code_?;
        }
        b = StringLiteral_Head;
        if (((uVar12 == 0xb2972ae3) || (b = StringLiteral_RLowLeg, uVar12 == 0xeb39ce13)) &&
           (bVar13 = mscorlib.dll::System::String::String_op_Equality(boneName,b,(MethodInfo *)0x0),
           bVar13 != 0)) {
          if (bone == (Transform *)0x0) goto code_?;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              (&VStack_19,bone,(MethodInfo *)0x0);
code_?:
          uStack_15._0_4_ = pVVar14->x;
          uStack_15._4_4_ = pVVar14->y;
          fVar8 = pVVar14->z;
          pVVar14 = &VStack_19;
code_?:
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (pVVar14,bone,(MethodInfo *)0x0);
          uVar23 = (uint)pVVar14->x;
          uVar24 = (uint)pVVar14->y;
          fVar9 = pVVar14->z;
          fVar18 = (float)uStack_15;
          uVar22 = (int)((ulonglong)uStack_15 >> 0x20);
code_?:
          forward.y = (float)uVar22;
          forward.x = fVar18;
          forward.z = fVar8;
          upwards.y = (float)uVar24;
          upwards.x = (float)uVar23;
          upwards.z = fVar9;
          pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                              ((Quaternion *)&stack0xffffffa0,forward,upwards,(MethodInfo *)0x0);
          fVar8 = pQVar25->x;
          fVar9 = pQVar25->y;
          fStack_10 = pQVar25->z;
          fStack_11 = pQVar25->w;
        }
      }
code_?:
      uStack_16._0_4_ = (this->fields).modelScale.x;
      uStack_16._4_4_ = (this->fields).modelScale.y;
      fStack_17 = (this->fields).modelScale.z;
      uStack_5 = CONCAT44((float)uStack_16._4_4_ * uStack_5._4_4_,
                           (float)(undefined4)uStack_16 * (float)uStack_5);
      fStack_6 = fStack_17 * fStack_6;
      if ((model != (GameObject *)0x0) &&
         (pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (model,(MethodInfo *)0x0), pTVar26 != (Transform *)0x0)) {
        value.y = fVar9;
        value.x = fVar8;
        value.z = fStack_10;
        value.w = fStack_11;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar26,value,(MethodInfo *)0x0);
        pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (model,(MethodInfo *)0x0);
        if (pTVar26 != (Transform *)0x0) {
          translation.z = fStack_6;
          translation.x = (float)uStack_5;
          translation.y = uStack_5._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate_1
                    (pTVar26,translation,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void ApplyAccessoryOffset(Single, AccessorySlotType) */

void Assembly-CSharp.dll::MVBody::MVBody_ApplyAccessoryOffset
               (MVBody *this,float yOffset,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pBVar1 = (this->fields).previewBodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    MVBody_UpdateBodyClone(this,(pBVar1->fields).accessoryData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ApplyAccessorySize(Single, AccessorySlotType) */

void Assembly-CSharp.dll::MVBody::MVBody_ApplyAccessorySize
               (MVBody *this,float size,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pBVar1 = (this->fields).previewBodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    MVBody_UpdateBodyClone(this,(pBVar1->fields).accessoryData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Attach(MVAvatar, Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_Attach
               (MVBody *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).hasAvatarBeenAttached = 1;
  if (mvAvatar == (MVAvatar *)0x0) {
    return;
  }
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    pBVar2 = (pMVar1->fields).boneAnimation;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 == (MVBodyObject *)0x0) ||
         (pBVar2 = (pMVar1->fields).boneAnimation, pBVar2 == (BoneAnimation *)0x0))
      goto code_?;
      ppMVar4 = &(pBVar2->fields).mvAvatar;
      *ppMVar4 = mvAvatar;
      func_?(ppMVar4,mvAvatar);
      (pBVar2->fields).isLocal = isLocal;
    }
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar5 = (pMVar1->fields).avatarBlinker;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar5 = (pMVar1->fields).avatarBlinker, pAVar5 == (AvatarBlinker *)0x0))
        goto code_?;
        (pAVar5->fields)._.visible = (this->fields).visible;
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar5 = (pMVar1->fields).avatarBlinker, pAVar5 == (AvatarBlinker *)0x0))
        goto code_?;
        (pAVar5->fields)._.visible = 1;
      }
      MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 != (MVBodyObject *)0x0) &&
         (this_00 = (pMVar1->fields).avatarBlobShadowController,
         this_00 != (AvatarBlobShadowController *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AttachCube(String) */

void Assembly-CSharp.dll::MVBody::MVBody_AttachCube
               (MVBody *this,String *boneName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__Add_UnityEngine__Renderer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                   );
    func_?(&StringLiteral__model_);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).bodyData, this_00 != (BodyData *)0x0)) {
    pTVar2 = BodyData::BodyData_GetPartBone_1(this_00,boneName,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelInstance);
      cRam_? = '\x01';
    }
    pMVar3 = MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,boneName,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      item = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      item = (MVWorldObjectClient *)0x0;
      if (bVar5) {
        item = pMVar3;
      }
    }
    this_01 = (this->fields).attachedPartModels;
    if (this_01 != (List_1_MVCubeModelInstance_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                );
      if (item != (MVWorldObjectClient *)0x0) {
        gameObject = (item->fields).gameObject;
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_4
                           (boneName,StringLiteral__model_,pSVar6,(MethodInfo *)0x0);
        if (gameObject != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                    ((Object_1 *)gameObject,pSVar6,(MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            ((this->fields)._LayerToSetTo_k__BackingField,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,layer,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (gameObject,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                ((Vector3 *)&stack0xffffffe8,pTVar7,(MethodInfo *)0x0);
            fVar9 = pVVar8->y;
            fVar10 = pVVar8->z;
            (this->fields).modelScale.x = pVVar8->x;
            (this->fields).modelScale.y = fVar9;
            (this->fields).modelScale.z = fVar10;
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (gameObject,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar7,pTVar2,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (gameObject,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           (MethodInfo *)0x0);
                this_02 = (Quaternion__Class **)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  this_02 = &TypeInfo__UnityEngine__Quaternion;
                  func_?();
                  cRam_? = '\x01';
                }
                if ((Transform *)this_02 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            ((Transform *)this_02,
                             TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                             (MethodInfo *)0x0);
                  this_03 = (this->fields).colliders;
                  pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentInChildren_1
                                      (gameObject,
                                       UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                                      );
                  if (this_03 != (List_1_UnityEngine_Collider_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)this_03,pOVar11,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                              );
                    this_04 = (this->fields).renderers;
                    pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentInChildren_1
                                        ((GameObject *)this_04,
                                         UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                                        );
                    if (this_04 != (List_1_UnityEngine_Renderer_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)this_04,pOVar11,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__Add_UnityEngine__Renderer_
                                );
                      MVBody_AlignModel(this,boneName,(Transform *)this_04,gameObject,
                                        (MethodInfo *)0x0);
                      return;
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
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void AttachCubes() */

void Assembly-CSharp.dll::MVBody::MVBody_AttachCubes(MVBody *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_7._0_4_ = (Dictionary_2_System_Object_System_Object_ *)0x0;
  auStack_7._4_4_ = 0;
  auStack_7._8_4_ = 0;
  auStack_7._12_2_ = 0;
  auStack_7._14_2_ = 0;
  this_00 = (this->fields)._.childIdMap;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        (auStack_7 + 0x10),(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
    DStack_9._version = pDVar8->_version;
    DStack_9._index = pDVar8->_index;
    DStack_9._current.key = (Object *)(pDVar8->_current).key;
    DStack_9._current.value = (pDVar8->_current).value;
    DStack_9._getEnumeratorRetType = pDVar8->_getEnumeratorRetType;
    pOStack_10 = (Object *)0x0;
    uStack_1 = 1;
    pDStack_11 = &DStack_9;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar12 == 0) break;
      boneName = (String *)0x0;
      if ((String *)DStack_9._current.key != (String *)0x0) {
        if ((String__Class *)(DStack_9._current.key)->klass == TypeInfo__System__String) {
          boneName = (String *)DStack_9._current.key;
        }
        if (boneName == (String *)0x0) {
          uVar13 = func_?(DStack_9._current.key,TypeInfo__System__String);
          func_?(uVar13);
          goto code_?;
        }
      }
      MVBody_AttachCube(this,boneName,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).renderers;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)auStack_15,this_01,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                         );
      auStack_7._0_4_ = pLVar14->_list;
      auStack_7._4_4_ = pLVar14->_index;
      auStack_7._8_4_ = pLVar14->_version;
      auStack_7._12_4_ = pLVar14->_current;
      pOStack_10 = (Object *)0x0;
      uStack_1 = 4;
      pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)auStack_7;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)auStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)auStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)auStack_7._12_4_ == (RegexCharClass_SingleRange)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)auStack_7._12_4_,(this->fields).visible,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBody::MVBody_Clone
          (MVBody *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBody);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_Clone
                     ((MVBlueprintBase *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,
                      worldObjects,prototypes,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    func_?();
  }
  else {
    bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVBody__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] == TypeInfo__MVBody)) {
      *(undefined1 *)((int)&pMVar1[1].fields._.rotation.x + 1) = 0;
      return pMVar1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar1;
}


/* GameObject CopyByValue() */

GameObject * Assembly-CSharp.dll::MVBody::MVBody_CopyByValue(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).visible;
  if ((bVar1 == 0) && ((this->fields).forceHidden == 0)) {
    (this->fields).visible = 1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  pGVar2 = (this->fields)._._._.gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  MVBody_CopyMaterialsByValue(this,pGVar2,(MethodInfo *)0x0);
  if (((this->fields).forceHidden == 0) && ((this->fields).visible != bVar1)) {
    (this->fields).visible = bVar1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return pGVar2;
}


/* Void CopyMaterialsByValue(GameObject) */

void Assembly-CSharp.dll::MVBody::MVBody_CopyMaterialsByValue
               (MVBody *this,GameObject *bodyCloneGO,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (bodyCloneGO != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (bodyCloneGO,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uStack_2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uStack_2) {
          return;
        }
        if (pOVar1->max_length <= uStack_2) break;
        this_02 = (Renderer *)*ppOVar3;
        this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__List<UnityEngine::Material>
                                    );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
        if (this_02 == (Renderer *)0x0) goto code_?;
        pMStack_4 = (Material__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                               (this_02,(MethodInfo *)0x0);
        pcVar5 = (char *)0x0;
        pIVar6 = &(pMStack_4->_0).byval_arg;
        while( true ) {
          if (pMStack_4 == (Material__Class *)0x0) goto code_?;
          pcVar7 = (pMStack_4->_0).namespaze;
          if ((int)pcVar7 <= (int)pcVar5) break;
          if (pcVar7 <= pcVar5) goto code_?;
          source = (Material *)(pIVar6->data).typeHandle;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)source,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            pMStack_4 = TypeInfo__UnityEngine__Material;
            this_02 = (Renderer *)&UNK_?;
            this_01 = (Material *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                      (this_01,source,(MethodInfo *)0x0);
            if (this_00 ==
                (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_00,(Object *)this_01,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                      );
            pcVar5 = pcVar5 + 1;
            pIVar6 = (Il2CppType *)&pIVar6->attrs;
          }
          else {
            pcVar5 = pcVar5 + 1;
            pIVar6 = (Il2CppType *)&pIVar6->attrs;
          }
        }
        if (this_00 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) goto code_?;
        value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__ToArray__
                          );
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterials
                  (this_02,(Material__Array *)value,(MethodInfo *)0x0);
        uStack_2 = uStack_2 + 1;
        ppOVar3 = ppOVar3 + 1;
        pOVar1 = unaff_ESI;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GameObject CreateClone(Boolean, Boolean) */

GameObject *
Assembly-CSharp.dll::MVBody::MVBody_CreateClone
          (MVBody *this,bool enableAllRenderers,bool hideEquippedItem,MethodInfo *method)

{
  bVar1 = hideEquippedItem;
  _hideEquippedItem = (Object_1__Class *)(uint)hideEquippedItem;
  if (cRam_? == '\0') {
    func_?(&
                    AvatarAccessory__MethodInfo__UnityEngine__Component__GetComponentsInChildren<AvatarAccessory>______
                   );
    func_?(&BodyClone_MethodInfo__UnityEngine__GameObject__AddComponent<BodyClone>__);
    func_?(&
                    PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                   );
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields)._._._.gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (pGVar2 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar3,(Transform *)0x0,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
        uVar5._0_4_ = pVVar4->x;
        uVar5._4_4_ = pVVar4->y;
        fVar6 = pVVar4->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar8 = (pVVar7->upVector).x;
        uVar9 = (pVVar7->upVector).y;
        value.y = (float)((ulonglong)uVar5 >> 0x20) + (float)uVar9 * _UNK_?;
        value.x = (float)uVar5 + (float)uVar8 * _UNK_?;
        if (pTVar3 != (Transform *)0x0) {
          value.z = fVar6 + (pVVar7->upVector).z * _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar3,value,(MethodInfo *)0x0);
          pBVar10 = (BodyClone *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar2,
                               BodyClone_MethodInfo__UnityEngine__GameObject__AddComponent<BodyClone>__
                              );
          ppBVar11 = &(this->fields).bodyClone;
          *ppBVar11 = pBVar10;
          func_?();
          pBVar10 = *ppBVar11;
          if (pBVar10 != (BodyClone *)0x0) {
            pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_GetComponentsInChildren
                                ((Component *)pBVar10,
                                 AvatarAccessory__MethodInfo__UnityEngine__Component__GetComponentsInChildren<AvatarAccessory>______
                                );
            if (pOVar12 != (Object__Array *)0x0) {
              uVar13 = pOVar12->max_length - 1;
              if (-1 < (int)uVar13) {
                ppOVar14 = pOVar12->vector + (pOVar12->max_length - 1);
                do {
                  if (pOVar12->max_length <= uVar13) goto code_?;
                  if ((Component *)*ppOVar14 == (Component *)0x0) goto code_?;
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)*ppOVar14,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    _hideEquippedItem = TypeInfo__UnityEngine__Object;
                    enableAllRenderers = 0xe3;
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)pGVar2,(MethodInfo *)0x0);
                  ppOVar14 = ppOVar14 + -1;
                  uVar13 = uVar13 - 1;
                } while (-1 < (int)uVar13);
                this = (MVBody *)0x0;
                bVar1 = hideEquippedItem;
              }
              hideEquippedItem = bVar1;
              pBVar10 = (this->fields).bodyClone;
              MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
              if (pBVar10 != (BodyClone *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  func_?();
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                x = (Object_1 *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)pBVar10,
                               MVBodyObject_MethodInfo__UnityEngine__Component__GetComponent<MVBodyObject>__
                              );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pGVar2 = (GameObject *)0x0;
                bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                accessoryData = TypeInfo__BodyAccessoriesController;
                if (bVar1 == 0) {
                  if (x == (Object_1 *)0x0) goto code_?;
                  bodyData = x[3].klass;
                  this_01 = (BodyAccessoriesController *)func_?();
                  BodyAccessoriesController::BodyAccessoriesController__ctor
                            (this_01,(int32_t)bodyData,(BodyData *)bodyData,
                             (Dictionary_2_System_Object_System_Object_ *)accessoryData,1,
                             (MethodInfo *)0x0);
                  ppBVar15 = &(pBVar10->fields).bodyAccessoriesController;
                  *ppBVar15 = this_01;
                  pGVar2 = (GameObject *)&UNK_?;
                  func_?();
                  if (*ppBVar15 == (BodyAccessoriesController *)0x0) goto code_?;
                  BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                            (*ppBVar15,1,(MethodInfo *)0x0);
                  if (*ppBVar15 == (BodyAccessoriesController *)0x0) goto code_?;
                  BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                            (*ppBVar15,(Dictionary_2_System_Object_System_Object_ *)accessoryData,
                             (MethodInfo *)0x0);
                }
                else {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_Failed_to_get_MVBodyObject,(MethodInfo *)0x0);
                }
                if (enableAllRenderers != 0) {
                  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren
                                      (pGVar2,
                                       UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                      );
                  uVar13 = 0;
                  if (pOVar12 == (Object__Array *)0x0) goto code_?;
                  ppOVar14 = pOVar12->vector;
                  for (; (int)uVar13 < (int)pOVar12->max_length; uVar13 = uVar13 + 1) {
                    if (pOVar12->max_length <= uVar13) goto code_?;
                    if ((Renderer *)*ppOVar14 == (Renderer *)0x0) goto code_?;
                    pGVar2 = (GameObject *)&UNK_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                              ((Renderer *)*ppOVar14,1,(MethodInfo *)0x0);
                    ppOVar14 = ppOVar14 + 1;
                  }
                }
                if (hideEquippedItem != 0) {
                  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren
                                      (pGVar2,
                                       PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                      );
                  uVar13 = 0;
                  if (pOVar12 == (Object__Array *)0x0) goto code_?;
                  ppOVar14 = pOVar12->vector;
                  while( true ) {
                    if ((int)pOVar12->max_length <= (int)uVar13) break;
                    if (pOVar12->max_length <= uVar13) goto code_?;
                    if ((Component *)*ppOVar14 == (Component *)0x0) goto code_?;
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)*ppOVar14,(MethodInfo *)0x0);
                    if (this_02 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_02,0,(MethodInfo *)0x0);
                    uVar13 = uVar13 + 1;
                    ppOVar14 = ppOVar14 + 1;
                  }
                }
                return pGVar2;
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
  pcVar16 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar16)();
  return pGVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBody::MVBody_Destroy(MVBody *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(pBVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar2 = (this->fields).bodyClone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  pBVar2 = (this->fields).bodyClone;
  if ((pBVar2 != (BodyClone *)0x0) &&
     (pBVar1 = (pBVar2->fields).bodyAccessoriesController,
     pBVar1 != (BodyAccessoriesController *)0x0)) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(pBVar1,(MethodInfo *)0x0);
    pBVar2 = (this->fields).bodyClone;
    if (pBVar2 != (BodyClone *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pBVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyClone() */

void Assembly-CSharp.dll::MVBody::MVBody_DestroyClone(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pBVar1 = (this->fields).bodyClone;
  if ((pBVar1 != (BodyClone *)0x0) &&
     (this_00 = (pBVar1->fields).bodyAccessoriesController,
     this_00 != (BodyAccessoriesController *)0x0)) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(this_00,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyClone;
    if (pBVar1 != (BodyClone *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pBVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Detach() */

void Assembly-CSharp.dll::MVBody::MVBody_Detach(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__);
      func_?(&StringLiteral_Detach_);
      cRam_? = '\x01';
    }
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_04 != (GameObject *)0x0) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)this_04,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Detach_,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      this_01 = (this_00->fields).avatarAnimation;
      if (this_01 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                  (this_01,(MethodInfo *)0x0);
        this_02 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                  (this_00->fields).animationQueue;
        if (this_02 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
          Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                    (this_02,MethodInfo__System__Collections__Generic__Queue<AnimationData>__Clear__
                    );
          ppAVar3 = &(this_00->fields).nextAnim;
          *ppAVar3 = (AnimationData *)0x0;
          func_?(ppAVar3,0);
          ppAVar3 = &(this_00->fields).currentAnim;
          *ppAVar3 = (AnimationData *)0x0;
          func_?(ppAVar3,0);
          ppAVar3 = &(this_00->fields).prevAnim;
          *ppAVar3 = (AnimationData *)0x0;
          func_?(ppAVar3,0);
          pMVar1 = (this->fields).bodyObject;
          if (pMVar1 != (MVBodyObject *)0x0) {
            pAVar4 = (pMVar1->fields).avatarBlinker;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pMVar1 = (this->fields).bodyObject;
              if ((pMVar1 == (MVBodyObject *)0x0) ||
                 (pAVar4 = (pMVar1->fields).avatarBlinker, pAVar4 == (AvatarBlinker *)0x0))
              goto code_?;
              (pAVar4->fields)._.visible = 0;
            }
            pMVar1 = (this->fields).bodyObject;
            if ((pMVar1 != (MVBodyObject *)0x0) &&
               (this_03 = (pMVar1->fields).avatarBlobShadowController,
               this_03 != (AvatarBlobShadowController *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_03,0,(MethodInfo *)0x0);
              return;
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


/* Void DisableBodyBlinker() */

void Assembly-CSharp.dll::MVBody::MVBody_DisableBodyBlinker(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if ((pMVar2 != (MVBodyObject *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarBlinker, pAVar3 != (AvatarBlinker *)0x0)) {
    (pAVar3->fields)._.visible = 0;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EnableBodyBlinker() */

void Assembly-CSharp.dll::MVBody::MVBody_EnableBodyBlinker(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if ((pMVar2 != (MVBodyObject *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarBlinker, pAVar3 != (AvatarBlinker *)0x0)) {
    (pAVar3->fields)._.visible = 1;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EndPreviewAccessory() */

void Assembly-CSharp.dll::MVBody::MVBody_EndPreviewAccessory(MVBody *this,MethodInfo *method)

{
  pBVar1 = (this->fields).previewBodyAccessoriesController;
  ppBVar2 = &(this->fields).previewBodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(pBVar1,(MethodInfo *)0x0);
    *ppBVar2 = (BodyAccessoriesController *)0x0;
    func_?(ppBVar2,0);
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                (pBVar1,1,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bodyAccessoriesController;
      if (pBVar1 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                  (pBVar1,1,(MethodInfo *)0x0);
        pBVar1 = (this->fields).bodyAccessoriesController;
        if (pBVar1 != (BodyAccessoriesController *)0x0) {
          MVBody_UpdateBodyClone(this,(pBVar1->fields).accessoryData,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Object,System.Object] GetAccessoryData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryData(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BlueprintData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MVBody *)0x4;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (pMVar1->fields)._.blueprintData;
  this_01 = (Enum *)func_?(TypeInfo__MV__Common__BlueprintData,&this);
  key = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    func_?();
    pDStack2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    method = extraout_EDX;
  }
  else {
    method = (MethodInfo *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_00,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (method == (MethodInfo *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDStack2 =
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((bVar3 <= *(byte *)(*(int *)method + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)method + 100) + -4 + (uint)bVar3 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return (Dictionary_2_System_Object_System_Object_ *)method;
    }
  }
  this = (MVBody *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
  return pDVar5;
}


/* Single GetAccessoryOffset(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryOffset
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pMVar1 = (MVBody *)(this->fields).previewBodyAccessoriesController;
  if ((pMVar1 != (MVBody *)0x0) ||
     (pMVar1 = (MVBody *)(this->fields).bodyAccessoriesController, pMVar1 != (MVBody *)0x0)) {
    this = pMVar1;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Single);
      func_?(&StringLiteral_d);
      cRam_? = '\x01';
    }
    this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
               &(this->fields)._._._._.inputState;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      this_01 = (Enum *)func_?();
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (this_01,StringLiteral_d,(MethodInfo *)0x0);
      if (TVar3.m_Index != 0) {
        bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((bVar4 <= *(byte *)(*(int *)TVar3.m_Index + 0xb8)) &&
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar4 * 4) ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (TVar3.m_Index,(Object *)pSVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (TVar3.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
              (TypeInfo__System__Single->_0).element_class) {
            pfVar5 = (float *)func_?();
            return *pfVar5;
          }
          func_?();
        }
        func_?();
        pcVar6 = (code *)swi(3);
        fVar7 = (float10)(*pcVar6)();
        return (float)fVar7;
      }
    }
  }
code_?:
  uVar8 = func_?(&stack0xfffffff0);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetAccessoryScale(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryScale
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pMVar1 = (MVBody *)(this->fields).previewBodyAccessoriesController;
  if ((pMVar1 != (MVBody *)0x0) ||
     (pMVar1 = (MVBody *)(this->fields).bodyAccessoriesController, pMVar1 != (MVBody *)0x0)) {
    this = pMVar1;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Single);
      func_?(&StringLiteral_d);
      cRam_? = '\x01';
    }
    this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
               &(this->fields)._._._._.inputState;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      this_01 = (Enum *)func_?();
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (this_01,StringLiteral_d,(MethodInfo *)0x0);
      if (TVar3.m_Index != 0) {
        bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((bVar4 <= *(byte *)(*(int *)TVar3.m_Index + 0xb8)) &&
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar4 * 4) ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (TVar3.m_Index,(Object *)pSVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (TVar3.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
              (TypeInfo__System__Single->_0).element_class) {
            pfVar5 = (float *)func_?();
            return *pfVar5;
          }
          func_?();
        }
        func_?();
        pcVar6 = (code *)swi(3);
        fVar7 = (float10)(*pcVar6)();
        return (float)fVar7;
      }
    }
  }
code_?:
  uVar8 = func_?(&stack0xfffffff0);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* MVCubeModelInstance GetBodyPart(String) */

MVCubeModelInstance *
Assembly-CSharp.dll::MVBody::MVBody_GetBodyPart(MVBody *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild((MVBlueprintBase *)this,part,(MethodInfo *)0x0)
  ;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      return pMVar1;
    }
    return (MVCubeModelInstance *)0x0;
  }
  return (MVCubeModelInstance *)0x0;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVBody::MVBody_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVBody *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (__return_storage_ptr__->m_Center).x = (float)(int)(uVar2 << 0x20);
  uVar3 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = (float)uVar3;
  (__return_storage_ptr__->m_Extents).y = (float)uVar1;
  (__return_storage_ptr__->m_Extents).z = 0.5;
  return __return_storage_ptr__;
}


/* IModelingConstraint GetModelConstaint(MVCubeModelInstance) */

IModelingConstraint *
Assembly-CSharp.dll::MVBody::MVBody_GetModelConstaint
          (MVBody *this,MVCubeModelInstance *cubeModel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Add_int__IModelingConstraint_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__TryGetValue_int__IModelingConstraint__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ModelingBoxCountConstraint);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pMStack_1 = (ModelingBoxCountConstraint *)0x0;
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._.idChildMap;
  if (cubeModel == (MVCubeModelInstance *)0x0) {
code_?:
    func_?();
  }
  else {
    uStack_3 = (ObscuredFloat__Array__Array *)(cubeModel->fields)._._._.id;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                       (pDVar2,pOVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar5 == 0) {
      return (IModelingConstraint *)pMStack_1;
    }
    pDVar6 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).constraints;
    if (pDVar6 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              (pDVar6,(cubeModel->fields)._._._.id,(Object **)&pMStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__TryGetValue_int__IModelingConstraint__
              );
    if (pMStack_1 != (ModelingBoxCountConstraint *)0x0) {
      return (IModelingConstraint *)pMStack_1;
    }
    iStack_7 = (cubeModel->fields)._._._.id;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._.idChildMap;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,pOVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    TVar9.m_Index = 0;
    if (TVar8.m_Index != 0) {
      if (*(String__Class **)TVar8.m_Index == TypeInfo__System__String) {
        TVar9 = TVar8;
      }
      pSVar10 = TypeInfo__System__String;
      if ((Object *)TVar9.m_Index == (Object *)0x0) goto code_?;
    }
    pMVar11 = (this->fields).bodyObject;
    if ((pMVar11 == (MVBodyObject *)0x0) ||
       (pBVar12 = (pMVar11->fields).bodyData, pBVar12 == (BodyData *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
      cRam_? = '\x01';
    }
    uStack_3 = (pBVar12->fields).PartConstraintsBoxMin;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pBVar12->fields).partMap;
    if ((pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar2,TVar9.m_Index,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                           ), uStack_3 == (ObscuredFloat__Array__Array *)0x0))
    goto code_?;
    if ((uint)TVar8.m_Index < uStack_3->max_length) {
      pVVar13 = BodyData::BodyData_GetVectorFromObscuredFloatArray
                          ((Vector3 *)&stack0xffffffc4,uStack_3->vector[TVar8.m_Index],
                           (MethodInfo *)0x0);
      pMVar11 = (this->fields).bodyObject;
      uVar14 = pVVar13->x;
      uVar15 = pVVar13->y;
      apMStack_16[0] = (MethodInfo *)pVVar13->z;
      if ((pMVar11 != (MVBodyObject *)0x0) &&
         (pBVar12 = (pMVar11->fields).bodyData, pBVar12 != (BodyData *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         );
          cRam_? = '\x01';
        }
        uStack_3 = (pBVar12->fields).PartConstraintsBoxMax;
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (pBVar12->fields).partMap;
        if ((pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
           (TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (pDVar2,TVar9.m_Index,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                               ), uStack_3 != (ObscuredFloat__Array__Array *)0x0)) {
          if (uStack_3->max_length <= (uint)TVar8.m_Index) goto code_?;
          pVVar13 = BodyData::BodyData_GetVectorFromObscuredFloatArray
                              (&VStack_17,uStack_3->vector[TVar8.m_Index],(MethodInfo *)0x0);
          pMVar11 = (this->fields).bodyObject;
          uVar18 = pVVar13->x;
          uVar19 = pVVar13->y;
          VStack_17.z = pVVar13->z;
          if ((pMVar11 != (MVBodyObject *)0x0) &&
             (pBVar12 = (pMVar11->fields).bodyData, pBVar12 != (BodyData *)0x0)) {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                             );
              func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              cRam_? = '\x01';
            }
            pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (pBVar12->fields).partMap;
            pOVar20 = (pBVar12->fields).PartConstraintsMinCubes;
            if ((pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
               (TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (pDVar2,TVar9.m_Index,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                   ), pOVar20 != (ObscuredInt__Array *)0x0)) {
              if (pOVar20->max_length <= (uint)TVar9.m_Index) goto code_?;
              pOVar21 = pOVar20->vector + TVar9.m_Index;
              iVar22 = pOVar21->currentCryptoKey;
              iVar23 = pOVar21->hiddenValue;
              iVar24 = pOVar21->fakeValue;
              uVar25 = *(undefined4 *)&pOVar21->inited;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              value.hiddenValue = iVar23;
              value.currentCryptoKey = iVar22;
              value.fakeValue = iVar24;
              value._12_4_ = uVar25;
              iVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
              v.y = (float)uVar14;
              v.x = (float)apMStack_16;
              v.z = (float)uVar15;
              IVar26 = MathFunctions::MathFunctions_ToIntVector(v,apMStack_16[0]);
              uVar25 = *IVar26._0_4_;
              uStack_3 = (ObscuredFloat__Array__Array *)
                         CONCAT22(*(undefined2 *)(IVar26._0_4_ + 1),(undefined2)uStack_3);
              v_00.y = (float)uVar18;
              v_00.x = (float)&VStack_17.y;
              v_00.z = (float)uVar19;
              IVar26 = MathFunctions::MathFunctions_ToIntVector(v_00,(MethodInfo *)VStack_17.z);
              maxCorner = *IVar26._0_4_;
              VStack_17.z = (float)func_?();
              IVar26.z = uStack_3._2_2_;
              IVar26._0_4_ = uVar25;
              ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
                        ((ModelingBoxCountConstraint *)VStack_17.z,(MVCubeModelBase *)cubeModel,
                         IVar26,maxCorner,iVar22,(MethodInfo *)0x0);
              pMStack_1 = (ModelingBoxCountConstraint *)VStack_17.z;
              pDVar6 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).constraints;
              if (pDVar6 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          (pDVar6,(cubeModel->fields)._._._.id,(Object *)VStack_17.z,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Add_int__IModelingConstraint_
                          );
                return (IModelingConstraint *)pMStack_1;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  TVar8.m_Index = func_?();
  pSVar10 = extraout_ECX;
code_?:
  func_?(TVar8.m_Index,pSVar10);
  pcVar27 = (code *)swi(3);
  pIVar28 = (IModelingConstraint *)(*pcVar27)();
  return pIVar28;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBody::MVBody_Initialize(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&StringLiteral_Trying_to_initialize_body_);
    func_?(&StringLiteral__more_than_once);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Trying_to_initialize_body_,pSVar1,
                        StringLiteral__more_than_once,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pMVar2 = (MeshFilter__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                       );
    pMVar3 = (this->fields).bodyObject;
    if ((pMVar3 != (MVBodyObject *)0x0) &&
       (pAVar4 = (pMVar3->fields).avatarBlinker, pAVar4 != (AvatarBlinker *)0x0)) {
      (pAVar4->fields)._.meshFilters = pMVar2;
      func_?();
      MVBody_InitializeCommon(this,(MethodInfo *)0x0);
      if ((this->fields).hasAvatarBeenAttached == 0) {
        MVBody_set_CollidersEnabled(this,1,(MethodInfo *)0x0);
        pMVar3 = (this->fields).bodyObject;
        if (pMVar3 == (MVBodyObject *)0x0) goto code_?;
        this_01 = (pMVar3->fields).avatarBlobShadowController;
      }
      else {
        MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
        pMVar3 = (this->fields).bodyObject;
        if (pMVar3 == (MVBodyObject *)0x0) goto code_?;
        this_01 = (pMVar3->fields).avatarBlobShadowController;
      }
      if (this_01 != (AvatarBlobShadowController *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,0,(MethodInfo *)0x0);
        (this->fields).initialized = 1;
        MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeCommon(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  MVBody_AttachCubes(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).bodyObject;
  bodyWoId = (this->fields)._._._._.id;
  if (pMVar1 != (MVBodyObject *)0x0) {
    bodyData = (pMVar1->fields).bodyData;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    isVisible = (this->fields).visible;
    pBVar2 = (BodyAccessoriesController *)func_?(TypeInfo__BodyAccessoriesController);
    BodyAccessoriesController::BodyAccessoriesController__ctor
              (pBVar2,bodyWoId,bodyData,(Dictionary_2_System_Object_System_Object_ *)this_01,
               isVisible,(MethodInfo *)0x0);
    ppBVar3 = &(this->fields).bodyAccessoriesController;
    *ppBVar3 = pBVar2;
    func_?(ppBVar3,pBVar2);
    pBVar2 = *ppBVar3;
    accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
    if (pBVar2 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                (pBVar2,accessoryData,(MethodInfo *)0x0);
      if (*ppBVar3 != (BodyAccessoriesController *)0x0) {
        MVBody_UpdateBodyClone(this,((*ppBVar3)->fields).accessoryData,(MethodInfo *)0x0);
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 != (MVBodyObject *)0x0) &&
           (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeHealth(Single) */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeHealth
               (MVBody *this,float currentHealthAmount,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if ((pMVar2 != (MVBodyObject *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarBlinker, pAVar3 != (AvatarBlinker *)0x0)) {
    (pAVar3->fields).previousBlinkHealth = currentHealthAmount;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeInventory(MVBody *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVBody_InitializeCommon(this,(MethodInfo *)0x0);
  MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlobShadowController,
     this_00 != (AvatarBlobShadowController *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeShield(Single) */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeShield
               (MVBody *this,float currentShieldAmount,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if ((pMVar2 != (MVBodyObject *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarBlinker, pAVar3 != (AvatarBlinker *)0x0)) {
    (pAVar3->fields).previousBlinkShield = currentShieldAmount;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsAccessoryEquipped(Int32) */

bool Assembly-CSharp.dll::MVBody::MVBody_IsAccessoryEquipped
               (MVBody *this,int32_t streamingAssetId,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    pMVar2 = (MethodInfo *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
      func_?(&StringLiteral_d);
      cRam_? = '\x01';
    }
    this_00 = (pBVar1->fields).accessoryData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffac,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_4._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar3->_dictionary;
      DStack_4._version = pDVar3->_version;
      DStack_4._index = pDVar3->_index;
      DStack_4._current.key = (Object *)(pDVar3->_current).key;
      DStack_4._16_8_ = *(undefined8 *)&(pDVar3->_current).value;
      while (bVar5 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_4,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                               ), bVar5 != 0) {
        this_01 = DStack_4._current.value;
        method_00 = TypeInfo__MV__Common__AvatarAccessoryData;
        this_02 = (Enum *)func_?();
        DStack_4._getEnumeratorRetType = (int32_t)&UNK_?;
        key = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0)
        ;
        if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Class *)this_01->klass
              )->_1).naturalAligment < bVar6) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId___Class *)this_01->klass)
            ->_1).typeHierarchy[bVar6 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
code_?:
          func_?();
          pcVar7 = (code *)swi(3);
          bVar5 = (*pcVar7)();
          return bVar5;
        }
        pMVar2 = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                           (Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar8.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar8.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) {
          func_?();
          goto code_?;
        }
        piVar9 = (int *)func_?();
        if (*piVar9 == streamingAssetId) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,(MethodInfo *)method_00);
          *unaff_FS_OFFSET = pMVar2;
          return 1;
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,in_stack_10);
    }
    *unaff_FS_OFFSET = pMVar2;
    return 0;
  }
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Boolean IsAccessorySlotOccupied(AccessorySlotType) */

bool Assembly-CSharp.dll::MVBody::MVBody_IsAccessorySlotOccupied
               (MVBody *this,AccessorySlotType__Enum accessorySlotType,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (pBVar1->fields).accessoryData;
    this = (MVBody *)accessorySlotType;
    key = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnAnimationUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnAnimationUpdate
               (MVBody *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (this_00 = (pMVar1->fields).boneAnimation, this_00 == (BoneAnimation *)0x0)) {
code_?:
    uVar2 = func_?();
code_?:
    TVar3.m_Index = func_?(uVar2);
    pSVar4 = extraout_ECX;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__System__String);
      func_?(&StringLiteral_timeStamp);
      func_?(&StringLiteral_state);
      cRam_? = '\x01';
    }
    if (newAnimationData == (Object *)0x0) goto code_?;
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((newAnimationData->klass->_1).naturalAligment < bVar5) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (newAnimationData->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       newAnimationData,(Object *)StringLiteral_state,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    newAnimation.m_Index = 0;
    if (TVar3.m_Index == 0) {
code_?:
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         newAnimationData,(Object *)StringLiteral_timeStamp,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar7 = (int32_t *)func_?();
        BoneAnimation::BoneAnimation_StartAnimation
                  (this_00,(String *)newAnimation.m_Index,*piVar7,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
      newAnimation = TVar3;
    }
    pSVar4 = TypeInfo__System__String;
    if ((String *)newAnimation.m_Index != (String *)0x0) goto code_?;
  }
  func_?(TVar3.m_Index,pSVar4);
  pDVar6 = extraout_EDX;
code_?:
  func_?(newAnimationData,pDVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBody::MVBody_OnDataUpdate(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_OnDataUpdate);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bodyAccessoriesController;
  accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
              (pBVar1,accessoryData,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      MVBody_UpdateBodyClone(this,(pBVar1->fields).accessoryData,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_OnDataUpdate,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnHealthUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnHealthUpdate
               (MVBody *this,Object *newHealthData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Single);
      cRam_? = '\x01';
    }
    if (newHealthData != (Object *)0x0) {
      pSVar2 = TypeInfo__System__Single;
      if ((newHealthData->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
      {
        pfVar3 = (float *)func_?(newHealthData);
        fVar4 = *pfVar3;
        if (fVar4 < (this_00->fields).previousBlinkHealth) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.5,(MethodInfo *)0x0);
        }
        (this_00->fields).previousBlinkHealth = fVar4;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  newHealthData = extraout_ECX;
  pSVar2 = extraout_EDX;
code_?:
  func_?(newHealthData,pSVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShieldUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnShieldUpdate
               (MVBody *this,Object *newShieldData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Single);
      cRam_? = '\x01';
    }
    if (newShieldData != (Object *)0x0) {
      pSVar2 = TypeInfo__System__Single;
      if ((newShieldData->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
      {
        pfVar3 = (float *)func_?(newShieldData);
        fVar4 = *pfVar3;
        if (fVar4 < (this_00->fields).previousBlinkShield) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,0.5,(MethodInfo *)0x0);
        }
        (this_00->fields).previousBlinkShield = fVar4;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  newShieldData = extraout_ECX;
  pSVar2 = extraout_EDX;
code_?:
  func_?(newShieldData,pSVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PreviewAccessory(AccessoryDataClient) */

void Assembly-CSharp.dll::MVBody::MVBody_PreviewAccessory
               (MVBody *this,AccessoryDataClient *viewItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  from = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  pDStack_2 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
              HashtableFunctions_DeepCopyHashTable_1(from,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_3 = 2;
  pEVar4 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStack_3);
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar4,StringLiteral_d,(MethodInfo *)0x0);
  if (viewItem != (AccessoryDataClient *)0x0) {
    pOVar6 = (Object *)func_?();
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pEVar4 = (Enum *)func_?();
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar4,StringLiteral_d,(MethodInfo *)0x0)
      ;
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pEVar4 = (Enum *)func_?();
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar4,StringLiteral_d,(MethodInfo *)0x0)
      ;
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pEVar4 = (Enum *)func_?();
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar4,StringLiteral_d,(MethodInfo *)0x0)
      ;
      value = TypeInfo__System__Single;
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pEVar4 = (Enum *)func_?();
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar4,StringLiteral_d,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar5,
                 (Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xffffffd0,(MethodInfo *)0x0);
      if (pDStack_2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDStack_2,(Object *)pSVar5,(Object *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pBVar7 = (this->fields).bodyAccessoriesController;
        if (pBVar7 != (BodyAccessoriesController *)0x0) {
          BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                    (pBVar7,0,(MethodInfo *)0x0);
          pBVar7 = (this->fields).bodyAccessoriesController;
          if (pBVar7 != (BodyAccessoriesController *)0x0) {
            BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                      (pBVar7,0,(MethodInfo *)0x0);
            pMVar8 = (this->fields).bodyObject;
            bodyWoId = (this->fields)._._._._.id;
            if (pMVar8 != (MVBodyObject *)0x0) {
              bodyData = (pMVar8->fields).bodyData;
              pBVar7 = (BodyAccessoriesController *)func_?();
              BodyAccessoriesController::BodyAccessoriesController__ctor
                        (pBVar7,bodyWoId,bodyData,pDStack_2,1,(MethodInfo *)0x0);
              ppBVar9 = &(this->fields).previewBodyAccessoriesController;
              *ppBVar9 = pBVar7;
              func_?();
              if (*ppBVar9 != (BodyAccessoriesController *)0x0) {
                BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                          (*ppBVar9,pDStack_2,(MethodInfo *)0x0);
                if (*ppBVar9 != (BodyAccessoriesController *)0x0) {
                  BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                            (*ppBVar9,1,(MethodInfo *)0x0);
                  if (*ppBVar9 != (BodyAccessoriesController *)0x0) {
                    MVBody_UpdateBodyClone
                              (this,((*ppBVar9)->fields).accessoryData,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RefreshAccessories() */

void Assembly-CSharp.dll::MVBody::MVBody_RefreshAccessories(MVBody *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
              (pBVar1,accessoryData,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      MVBody_UpdateBodyClone(this,(pBVar1->fields).accessoryData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartAnimation(String) */

void Assembly-CSharp.dll::MVBody::MVBody_StartAnimation
               (MVBody *this,String *newAnimation,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    timeStamp = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0)
    ;
    pMVar1 = (this->fields).bodyObject;
    if ((pMVar1 != (MVBodyObject *)0x0) &&
       (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
      BoneAnimation::BoneAnimation_StartAnimation(this_00,newAnimation,timeStamp,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_StartBlinking
               (MVBody *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_00,type,duration,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::MVBody::MVBody_StopBlinking
               (MVBody *this,BlinkType__Enum type,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pAVar2->fields)._.blinkers;
    if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                           ), pOVar3 != (Object *)0x0)) {
      pOVar3[2].klass = (Object__Class *)0x0;
      pOVar3[1].monitor = (MonitorData *)0x0;
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SyncOffset(AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_SyncOffset
               (MVBody *this,AccessorySlotType__Enum slot,float offset,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateAvatarAccessoryOffset
              (this_00,(this->fields)._._._._.id,slot,offset,(MethodInfo *)0x0);
  }
  return;
}


/* Void SyncScale(AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_SyncScale
               (MVBody *this,AccessorySlotType__Enum slot,float scale,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateAvatarAccessoryScale
              (this_00,(this->fields)._._._._.id,slot,scale,(MethodInfo *)0x0);
  }
  return;
}


/* Void ToggleBlinking(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_ToggleBlinking
               (MVBody *this,bool shouldShowBlinking,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if ((pMVar2 != (MVBodyObject *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarBlinker, pAVar3 != (AvatarBlinker *)0x0)) {
    (pAVar3->fields)._.visible = shouldShowBlinking;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateBlinking() */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateBlinking(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    tfm = (Transform *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    if ((((pAVar2->fields)._.visible != 0) &&
        (pDVar3 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pAVar2->fields)._.blinkers,
        pDVar3 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0)) &&
       (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           (pDVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                           ),
       pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)0x0)) {
      pDVar3 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(pAVar2->fields)._.blinkers;
      if ((pDVar3 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) ||
         (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                             (pDVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                             ),
         pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0)) goto code_?;
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffc8,pDVar4,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                         );
      pAVar6 = (AvatarBlinker *)pDVar5->_currentValue;
      while (bVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                     UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                 *)&stack0xffffffb8,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                               ), bVar7 != 0) {
        if (pAVar6 == (AvatarBlinker *)0x0) goto code_?;
        pCVar8 = (pAVar6->fields)._._.m_CancellationTokenSource;
        pMVar9 = (pAVar6->fields)._.blinkMaterial;
        in_stack_10 = pAVar6;
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar11 <= (float)pCVar8 + (float)pMVar9) {
          in_stack_10 = pAVar2;
          func_?();
          pMVar12 = (pAVar2->fields)._.meshFilters;
          if (pMVar12 != (MeshFilter__Array *)0x0) {
            for (pAVar13 = (AvatarBlinker *)0x0; (int)pAVar13 < (int)pMVar12->max_length;
                pAVar13 = (AvatarBlinker *)((int)&pAVar13->klass + 1)) {
              if ((AvatarBlinker *)pMVar12->max_length <= pAVar13) {
                func_?();
                goto code_?;
              }
              this_00 = pMVar12->vector[(int)pAVar13];
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pAVar6 = (AvatarBlinker *)&UNK_?;
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar7 == 0) {
                if ((this_00 == (MeshFilter *)0x0) ||
                   (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0),
                   this_01 == (GameObject *)0x0)) goto code_?;
                pMVar12 = (MeshFilter__Array *)0x0;
                in_stack_10 = (AvatarBlinker *)&UNK_?;
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
                  mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                         MeshFilter_get_sharedMesh(this_00,(MethodInfo *)0x0);
                  if (in_stack_10 == (AvatarBlinker *)0x0) goto code_?;
                  pMVar12 = (MeshFilter__Array *)&UNK_?;
                  pAVar13 = in_stack_10;
                  Blinker::Blinker_Draw
                            ((Blinker *)in_stack_10,mesh,tfm,(pAVar2->fields)._.targetCamera,
                             (pAVar2->fields)._.layerMask,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffb8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 ,(MethodInfo *)in_stack_10);
    }
    *unaff_FS_OFFSET = tfm;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateBodyClone(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateBodyClone
               (MVBody *this,Dictionary_2_System_Object_System_Object_ *accessoryData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pBVar1 = (this->fields).bodyClone;
  if ((pBVar1 == (BodyClone *)0x0) ||
     ((pBVar1->fields).bodyAccessoriesController == (BodyAccessoriesController *)0x0)) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<AvatarAccessory>);
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&
                    MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                   );
    func_?(&TypeInfo__BodyAccessoriesController____c__DisplayClass25_0);
    func_?(&StringLiteral_Failed_to_parse_slot);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  ppDVar5 = &(in_stack_6->fields).accessoryData;
  *ppDVar5 = in_stack_7;
  uVar8._0_4_ = (Object *)0x0;
  uVar8._4_4_ = 0;
  func_?(ppDVar5,in_stack_7);
  pMVar9 = (MethodInfo *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar9,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(in_stack_6->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffbc,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)(pDVar10->_current).value;
    while (bVar2 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffff7c,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             ), bVar2 != 0) {
      bVar2 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                        (in_stack_6,(AvatarAccessory *)method_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (pMVar9 == (MethodInfo *)0x0) goto code_?;
        method_00 = pMVar9;
        func_?();
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffff7c,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
               ,method_00);
    if (pMVar9 != (MethodInfo *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffc4,
                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           pMVar9,
                           MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                          );
      key = pLVar11->_current;
      while( true ) {
        pMVar9 = SUB84(uVar8,4);
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffac,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                          );
        if (bVar2 == 0) break;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pDVar12 = (in_stack_6->fields).accessoryMap;
        if (pDVar12 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        uVar8._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        uVar8._0_4_ = (Object *)key;
        this_03 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if ((this_03 == (AvatarAccessory *)0x0) ||
           (this_04 = AvatarAccessory::AvatarAccessory_get_Transform(this_03,(MethodInfo *)0x0),
           this_04 == (Transform *)0x0)) goto code_?;
        RVar13.First = 0;
        RVar13.Last = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_04,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar12 = (in_stack_6->fields).accessoryMap;
        if (pDVar12 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,(Int32Enum__Enum)key,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        in_stack_14 = key;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_03,(MethodInfo *)0x0);
        key = RVar13;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          key = RVar13;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffac,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                 ,pMVar9);
      this_01 = (in_stack_6->fields).accessoryData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffbc,(Dictionary_2_System_UInt32_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        uVar15 = *(ulonglong *)&(pDVar10->_current).value;
        a = (Object__Class *)(pDVar10->_current).key;
        while( true ) {
          while( true ) {
            bVar2 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff94,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar2 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffff94,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)in_stack_14);
              *unaff_FS_OFFSET = uVar4;
              return;
            }
            this_06 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)uVar15;
            s = (Object__Class *)0x0;
            pOVar16 = (Object__Class *)0xffffffff;
            if (a != (Object__Class *)0x0) {
              if ((String__Class *)(a->_0).image == TypeInfo__System__String) {
                s = a;
              }
              if (s == (Object__Class *)0x0) goto code_?;
            }
            bVar2 = mscorlib.dll::System::Int32::Int32_TryParse
                              ((String *)s,(int32_t *)&stack0xfffffff0,(MethodInfo *)0x0);
            pMVar9 = (MethodInfo *)uVar15;
            if (bVar2 != 0) break;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            in_stack_14 = (RegexCharClass_SingleRange)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (value,ExceptionArgument__Enum_obj,pMVar9);
          if (value == (Object *)0x0) break;
          value[1].monitor = (MonitorData *)in_stack_6;
          func_?();
          value[1].klass = pOVar16;
          if ((this_06 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
             (((bVar17 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment, (this_06->klass->_1).naturalAligment < bVar17 ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (this_06->klass->_1).typeHierarchy[bVar17 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
              || (this_06 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))))
          goto code_?;
          uVar15 = ZEXT48(TypeInfo__MV__Common__AvatarAccessoryData);
          a = (Object__Class *)&UNK_?;
          pEVar18 = (Enum *)func_?();
          pSVar19 = mscorlib.dll::System::Enum::Enum_ToString_2
                              (pEVar18,StringLiteral_d,(MethodInfo *)0x0);
          if (this_06 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (this_06,(Object *)pSVar19,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar20.m_Index != 0) {
            TVar21.m_Index = (int32_t)(Object__Class *)0x0;
            if (*(String__Class **)TVar20.m_Index == TypeInfo__System__String) {
              TVar21 = TVar20;
            }
            TVar20.m_Index = TVar21.m_Index;
            if ((Object__Class *)TVar21.m_Index == (Object__Class *)0x0) goto code_?;
          }
          pDVar12 = (in_stack_6->fields).accessoryMap;
          if (pDVar12 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar12,
                             (Int32Enum__Enum)value[1].klass,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                            );
          if (bVar2 == 0) {
code_?:
            this_02 = (in_stack_6->fields).accessoryLoader;
            this_05 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (this_05,value,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_02 == (AccessoryLoader *)0x0) break;
            uVar15 = ZEXT48(this_05);
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_02,(String *)TVar20.m_Index,(Action_1_AvatarAccessory_ *)this_05,
                       (MethodInfo *)0x0);
            a = (Object__Class *)TVar20.m_Index;
          }
          else {
            pDVar12 = (in_stack_6->fields).accessoryMap;
            if ((pDVar12 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
               (pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
                                     (Int32Enum__Enum)value[1].klass,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), pOVar22 == (Object *)0x0)) break;
            bVar2 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)pOVar22[2].klass,(String *)TVar20.m_Index,(MethodInfo *)0x0
                              );
            if (bVar2 != 0) goto code_?;
            pDVar12 = (in_stack_6->fields).accessoryMap;
            if (pDVar12 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar12,
                               (Int32Enum__Enum)value[1].klass,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar2 != 0) {
              pDVar12 = (in_stack_6->fields).accessoryMap;
              if ((pDVar12 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                 (pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar12,
                                       (Int32Enum__Enum)value[1].klass,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ), pOVar22 == (Object *)0x0)) break;
              uVar15 = (ulonglong)(uint)TVar20.m_Index;
              a = pOVar22[2].klass;
              bVar2 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)a,(String *)TVar20.m_Index,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                pEVar18 = (Enum *)func_?();
                pSVar19 = mscorlib.dll::System::Enum::Enum_ToString_2
                                    (pEVar18,StringLiteral_d,(MethodInfo *)0x0);
                TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (this_06,(Object *)pSVar19,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (TVar20.m_Index == 0) break;
                if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                          (in_stack_6,*pfVar23,(AccessorySlotType__Enum)value[1].klass,
                           (MethodInfo *)0x0);
                pEVar18 = (Enum *)func_?();
                pSVar19 = mscorlib.dll::System::Enum::Enum_ToString_2
                                    (pEVar18,StringLiteral_d,(MethodInfo *)0x0);
                TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (this_06,(Object *)pSVar19,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (TVar20.m_Index == 0) break;
                if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                puVar24 = (undefined4 *)func_?();
                a = (Object__Class *)*puVar24;
                uVar15 = ZEXT48(value[1].klass);
                BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                          (in_stack_6,(float)a,(AccessorySlotType__Enum)value[1].klass,
                           (MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateVisibility() */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateVisibility(MVBody *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields).renderers;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                        );
      if (bVar9 == 0) break;
      bVar9 = (this->fields).visible;
      _bStack_18 = CONCAT31(uStack_10,bVar9);
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)LStack_8._current,bVar9,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if ((this->fields).shadowVisible != 0) {
      pMVar11 = (this->fields).bodyObject;
      if (pMVar11 == (MVBodyObject *)0x0) goto code_?;
      pAVar12 = (pMVar11->fields).avatarBlobShadowController;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        pMVar11 = (this->fields).bodyObject;
        if ((pMVar11 == (MVBodyObject *)0x0) ||
           (pAVar12 = (pMVar11->fields).avatarBlobShadowController,
           pAVar12 == (AvatarBlobShadowController *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pAVar12,(this->fields).visible,(MethodInfo *)0x0);
      }
    }
    pMVar11 = (this->fields).bodyObject;
    if (pMVar11 != (MVBodyObject *)0x0) {
      pAVar13 = (pMVar11->fields).avatarBlinker;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        pMVar11 = (this->fields).bodyObject;
        if ((pMVar11 == (MVBodyObject *)0x0) ||
           (pAVar13 = (pMVar11->fields).avatarBlinker, pAVar13 == (AvatarBlinker *)0x0))
        goto code_?;
        (pAVar13->fields)._.visible = (this->fields).visible;
      }
      this_00 = (this->fields).bodyAccessoriesController;
      if (this_00 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_00,(this->fields).visible,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVBody(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVBody::MVBody__ctor
               (MVBody *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BlueprintData);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Renderer>);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MVBodyObject);
    func_?(&TypeInfo__MVBuildModeAvatar);
    func_?(&StringLiteral_d);
    func_?(&StringLiteral_Accessory_data_not_found__This_s);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  (pMVar1->fields).collidersEnabled = 1;
  (pMVar1->fields).shadowVisible = 1;
  (pMVar1->fields).visible = 1;
  this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Dictionary__
            );
  ppDVar2 = &(pMVar1->fields).constraints;
  *ppDVar2 = (Dictionary_2_System_Int32_IModelingConstraint_ *)this_03;
  func_?(ppDVar2,this_03);
  this_04 = (List_1_UnityEngine_Renderer_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Renderer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__List__);
  ppLVar3 = &(pMVar1->fields).renderers;
  *ppLVar3 = this_04;
  func_?(ppLVar3,this_04);
  this_05 = (List_1_UnityEngine_Collider_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_05,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  ppLVar4 = &(pMVar1->fields).colliders;
  *ppLVar4 = this_05;
  func_?(ppLVar4,this_05);
  this_06 = (List_1_MVCubeModelInstance_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_06,
             MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
  (pMVar1->fields).attachedPartModels = this_06;
  func_?();
  if (cRam_? == '\0') {
    data = (Dictionary_2_System_Object_System_Object_ *)&TypeInfo__UnityEngine__Vector3;
    this = (MVBody *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (pVVar5->zeroVector).y;
  fVar7 = (pVVar5->zeroVector).z;
  (pMVar1->fields).modelScale.x = (pVVar5->zeroVector).x;
  (pMVar1->fields).modelScale.y = fVar6;
  (pMVar1->fields).modelScale.z = fVar7;
  if (cRam_? == '\0') {
    data = (Dictionary_2_System_Object_System_Object_ *)&TypeInfo__PrefabPool;
    this = (MVBody *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  this_08 = worldObjects;
  pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar8 != (PrefabPool *)0x0) {
    data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    this = (MVBody *)worldObjects;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)pMVar1,(Dictionary_2_System_Object_System_Object_ *)0x0,
               (ObjectPrefab *)(pPVar8->fields).mvBodyPrefab,worldObjects,(MethodInfo *)0x0);
    pMVar9 = (MVBodyObject *)(pMVar1->fields)._._._.component;
    if (pMVar9 == (MVBodyObject *)0x0) {
      (pMVar1->fields).bodyObject = (MVBodyObject *)0x0;
    }
    else {
      bVar10 = (TypeInfo__MVBodyObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar9->klass)->_1).naturalAligment < bVar10) ||
         ((((ObjectPrefab__Class *)pMVar9->klass)->_1).typeHierarchy[bVar10 - 1] !=
          (Il2CppClass *)TypeInfo__MVBodyObject)) {
        func_?();
        goto code_?;
      }
      (pMVar1->fields).bodyObject = pMVar9;
      bVar10 = (TypeInfo__MVBodyObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar9->klass)->_1).naturalAligment < bVar10) ||
         (this_08 = worldObjects,
         (((ObjectPrefab__Class *)pMVar9->klass)->_1).typeHierarchy[bVar10 - 1] !=
         (Il2CppClass *)TypeInfo__MVBodyObject)) goto code_?;
    }
    func_?();
    if (this_08 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      data = (Dictionary_2_System_Object_System_Object_ *)
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
      ;
      this = (MVBody *)&stack0xfffffff8;
      pMVar11 = (MVBody__Class *)&UNK_?;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                         ((Dictionary_2_System_Int32_System_Object_ *)this_08,
                          (pMVar1->fields)._._._._.groupId,(Object **)this,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
      if ((bVar12 != 0) && (pMVar11 != (MVBody__Class *)0x0)) {
        pIVar13 = (pMVar11->_0).image;
        bVar10 = (TypeInfo__MVAvatar->_1).naturalAligment;
        if ((bVar10 <= *(byte *)&pIVar13[4].assembly) &&
           ((*(MVAvatar__Class **)((pIVar13[2].typeCount - 4) + (uint)bVar10 * 4) ==
             TypeInfo__MVAvatar && (pMVar11 != (MVBody__Class *)0x0)))) {
          (pMVar1->fields).hasAvatarBeenAttached = 1;
        }
        pIVar13 = (pMVar11->_0).image;
        bVar10 = (TypeInfo__MVBuildModeAvatar->_1).naturalAligment;
        if (((bVar10 <= *(byte *)&pIVar13[4].assembly) &&
            (*(MVBuildModeAvatar__Class **)((pIVar13[2].typeCount - 4) + (uint)bVar10 * 4) ==
             TypeInfo__MVBuildModeAvatar)) && (pMVar11 != (MVBody__Class *)0x0)) {
          (pMVar1->fields).hasAvatarBeenAttached = 1;
        }
      }
      piVar14 = &(pMVar1->fields)._._._.previewLayerMask;
      *piVar14 = *piVar14 | 0x1000;
      ppSVar15 = &(pMVar1->fields)._LayerToSetTo_k__BackingField;
      *ppSVar15 = StringLiteral_Player;
      method = (MethodInfo *)&UNK_?;
      func_?();
      this_00 = (pMVar1->fields)._._._.gameObject;
      pMVar16 = (MVBody *)
                UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (*ppSVar15,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        data = (Dictionary_2_System_Object_System_Object_ *)0x0;
        this = pMVar16;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (this_00,(int32_t)pMVar16,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar1->fields)._.blueprintData;
        data = (Dictionary_2_System_Object_System_Object_ *)&this;
        this = (MVBody *)0x4;
        this_07 = (Enum *)func_?();
        pMVar16 = (MVBody *)
                  mscorlib.dll::System::Enum::Enum_ToString_2
                            (this_07,StringLiteral_d,(MethodInfo *)0x0);
        if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          data = (Dictionary_2_System_Object_System_Object_ *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
          ;
          this = pMVar16;
          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (this_01,(Object *)pMVar16,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar12 != 0) {
            return;
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)StringLiteral_Accessory_data_not_found__This_s;
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Accessory_data_not_found__This_s,(MethodInfo *)0x0);
          this_02 = (pMVar1->fields)._.blueprintData;
          method = (MethodInfo *)TypeInfo__MV__Common__BlueprintData;
          this = (MVBody *)0x4;
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
          this = (MVBody *)func_?();
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0;
          data = (Dictionary_2_System_Object_System_Object_ *)StringLiteral_d;
          key = mscorlib.dll::System::Enum::Enum_ToString_2
                          ((Enum *)this,StringLiteral_d,(MethodInfo *)0x0);
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
          pMVar1 = (MVBody *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)pMVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            data = (Dictionary_2_System_Object_System_Object_ *)
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
            ;
            this = pMVar1;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (this_02,(Object *)key,(Object *)pMVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean get_AccessoryMoveOverride() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_AccessoryMoveOverride(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields).bodyAccessoriesController;
  if (pBVar2 != (BodyAccessoriesController *)0x0) {
    return (pBVar2->fields).accessoryMoveOverride;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* BoneAnimation get_Animation() */

BoneAnimation * Assembly-CSharp.dll::MVBody::MVBody_get_Animation(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if (pMVar2 != (MVBodyObject *)0x0) {
    return (pMVar2->fields).boneAnimation;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pBVar6 = (BoneAnimation *)(*pcVar5)();
  return pBVar6;
}


/* AvatarBlobShadowController get_BlobShadow() */

AvatarBlobShadowController *
Assembly-CSharp.dll::MVBody::MVBody_get_BlobShadow(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if (pMVar2 != (MVBodyObject *)0x0) {
    return (pMVar2->fields).avatarBlobShadowController;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pAVar6 = (AvatarBlobShadowController *)(*pcVar5)();
  return pAVar6;
}


/* BodyData get_BodyData() */

BodyData * Assembly-CSharp.dll::MVBody::MVBody_get_BodyData(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).bodyObject;
  if (pMVar2 != (MVBodyObject *)0x0) {
    return (pMVar2->fields).bodyData;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pBVar6 = (BodyData *)(*pcVar5)();
  return pBVar6;
}


/* Boolean get_CollidersEnabled() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_CollidersEnabled(MVBody *this,MethodInfo *method)

{
  return (this->fields).collidersEnabled;
}


/* Boolean get_ForceHidden() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_ForceHidden(MVBody *this,MethodInfo *method)

{
  return (this->fields).forceHidden;
}


/* Boolean get_IsPlayerBody() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_IsPlayerBody(MVBody *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields)._._._.group;
  if (pMVar2 != (MVGroup *)0x0) {
    return (pMVar2->fields)._.group != (MVGroup *)0x0;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_ShadowVisible() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_ShadowVisible(MVBody *this,MethodInfo *method)

{
  return (this->fields).shadowVisible;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_Visible(MVBody *this,MethodInfo *method)

{
  return (this->fields).visible;
}


/* Void set_AccessoryMoveOverride(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_AccessoryMoveOverride
               (MVBody *this,bool value,MethodInfo *method)

{
  this_02 = (this->fields).bodyAccessoriesController;
  if (this_02 != (BodyAccessoriesController *)0x0) {
    puStack_1 = (undefined *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &puStack_1;
    ppuStack_2 = (undefined **)&stack0xffffffa4;
    ppuVar3 = (undefined **)&stack0xffffffa4;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                     );
      func_?(&
                      SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
      ppuVar3 = ppuStack_2;
    }
    ppuStack_2 = ppuVar3;
    DStack_4._current.value = (Object *)0x0;
    DStack_4._getEnumeratorRetType = 0;
    DStack_4._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_4._version = 0;
    DStack_4._index = 0;
    DStack_4._current.key = 0;
    (this_02->fields).accessoryMoveOverride = value;
    if (value == 0) {
      this_01 = (this_02->fields).bodyData;
      if ((this_01 != (BodyData *)0x0) &&
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0))
      {
        this = (MVBody *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_3
                         (pGVar5,1,
                          SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                         );
        uVar6 = 0;
        if (this != (MVBody *)0x0) {
          pp_Var8 = (_Il2CppFullySharedGenericType **)&(this->fields)._._._._.itemId;
          for (; uVar7 = (this->fields)._._._._.groupId, (int)uVar6 < (int)uVar7; uVar6 = uVar6 + 1)
          {
            if (uVar7 <= uVar6) {
              func_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((Component *)*pp_Var8 == (Component *)0x0) goto code_?;
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)*pp_Var8,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (MVBody *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar5,(MethodInfo *)0x0);
            pp_Var8 = pp_Var8 + 1;
          }
          goto code_?;
        }
      }
    }
    else {
      this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this_02->fields).accessoryMap;
      if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           (&DStack_10,this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                           );
        uStack_11 = 0;
        DStack_4._dictionary = pDVar9->_dictionary;
        DStack_4._version = pDVar9->_version;
        DStack_4._index = pDVar9->_index;
        DStack_4._current.key = (pDVar9->_current).key;
        DStack_4._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
        pDStack_12 = &DStack_4;
        while (bVar13 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                 (&DStack_4,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                                 ), bVar13 != 0) {
          BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                    (this_02,(AvatarAccessory *)DStack_4._current.value,DStack_4._current.key,
                     (MethodInfo *)0x0);
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   ,in_stack_14);
code_?:
        *unaff_FS_OFFSET = puStack_1;
        return;
      }
    }
  }
code_?:
  ppuStack_2 = &puStack_1;
  ppuStack_2 = (undefined **)func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_CollidersEnabled(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_CollidersEnabled
               (MVBody *this,bool value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (this->fields).collidersEnabled = value;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).colliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                ((Collider *)LStack_8._current,(this->fields).collidersEnabled,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_ForceHidden(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_ForceHidden(MVBody *this,bool value,MethodInfo *method)

{
  if ((this->fields).forceHidden != value) {
    (this->fields).forceHidden = value;
    (this->fields).visible = value ^ 1;
    (this->fields).shadowVisible = value ^ 1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_ShadowVisible(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_ShadowVisible
               (MVBody *this,bool value,MethodInfo *method)

{
  if (((this->fields).forceHidden == 0) && ((this->fields).shadowVisible != value)) {
    (this->fields).shadowVisible = value;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_Visible(MVBody *this,bool value,MethodInfo *method)

{
  if (((this->fields).forceHidden == 0) && ((this->fields).visible != value)) {
    (this->fields).visible = value;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return;
}

