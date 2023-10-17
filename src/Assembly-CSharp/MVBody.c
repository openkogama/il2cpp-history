
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
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(pBVar2->fields).partMap;
    pVVar3 = (pBVar2->fields).PartBoneSpacePosition;
    if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_00,(Object *)boneName,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                            ), pVVar3 != (Vector3__Array *)0x0)) {
      if ((Object *)pVVar3->max_length <= pOVar4) goto code_?;
      uStack_5._0_4_ = pVVar3->vector[(int)pOVar4].x;
      uStack_5._4_4_ = pVVar3->vector[(int)pOVar4].y;
      fStack_6 = pVVar3->vector[(int)pOVar4].z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar8 = (pQVar7->identityQuaternion).x;
      fVar9 = (pQVar7->identityQuaternion).y;
      fStack_10 = (pQVar7->identityQuaternion).z;
      fStack_11 = (pQVar7->identityQuaternion).w;
      uVar12 = System.dll::<PrivateImplementationDetails>::
               _PrivateImplementationDetails__2_ComputeStringHash(boneName,(MethodInfo *)0x0);
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
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              );
              uStack_15 = CONCAT44(uStack_16._4_4_ ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                   ,(undefined4)uStack_15);
              VStack_19.z = (float)((uint)fStack_17 ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
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
                          __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
          uStack_15 = CONCAT44(uStack_16._4_4_ ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ,(undefined4)uStack_15);
          VStack_19.z = (float)((uint)fStack_17 ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
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
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              );
              uStack_15 = CONCAT44(uStack_16._4_4_ ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                   ,(undefined4)uStack_15);
              VStack_19.z = (float)((uint)fStack_17 ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                   );
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  ((Vector3 *)&stack0xffffffb0,bone,(MethodInfo *)0x0);
              uStack_16._0_4_ = pVVar14->x;
              uStack_16._4_4_ = pVVar14->y;
              uVar23 = (undefined4)uStack_16 ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
              uVar24 = uStack_16._4_4_ ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
              fVar9 = (float)((uint)pVVar14->z ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
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
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
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
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
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
      BoneAnimation::BoneAnimation_Attach(pBVar2,mvAvatar,isLocal,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar4 = (pMVar1->fields).avatarBlinker;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar4 = (pMVar1->fields).avatarBlinker, pAVar4 == (AvatarBlinker *)0x0))
        goto code_?;
        (pAVar4->fields)._.visible = (this->fields).visible;
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar4 = (pMVar1->fields).avatarBlinker, pAVar4 == (AvatarBlinker *)0x0))
        goto code_?;
        MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_Reset
                  ((InputSignalReceiverBase *)pAVar4,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
     (pBVar2 = (pMVar1->fields).bodyData, pBVar2 != (BodyData *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(pBVar2->fields).partMap;
    pTVar3 = (pBVar2->fields).PartBones;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)boneName,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         );
      if (pTVar3 != (Transform__Array *)0x0) {
        if ((Object *)pTVar3->max_length <= pOVar4) goto code_?;
        pTVar5 = pTVar3->vector[(int)pOVar4];
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelInstance);
          cRam_? = '\x01';
        }
        pMVar6 = MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this,boneName,(MethodInfo *)0x0);
        if (pMVar6 == (MVWorldObjectClient *)0x0) {
          item = (MVWorldObjectClient *)0x0;
        }
        else {
          if (((pMVar6->klass->_1).typeHierarchyDepth <
               (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
             ((MVCubeModelInstance__Class *)
              (pMVar6->klass->_1).typeHierarchy
              [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
              TypeInfo__MVCubeModelInstance)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          item = (MVWorldObjectClient *)0x0;
          if (bVar7) {
            item = pMVar6;
          }
        }
        this_01 = (this->fields).attachedPartModels;
        if (this_01 != (List_1_MVCubeModelInstance_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                    );
          if (item != (MVWorldObjectClient *)0x0) {
            gameObject = (item->fields).gameObject;
            pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                (boneName,StringLiteral__model_,pSVar8,(MethodInfo *)0x0);
            if (gameObject != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                        ((Object_1 *)gameObject,pSVar8,(MethodInfo *)0x0);
              layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                ((this->fields)._LayerToSetTo_k__BackingField,(MethodInfo *)0x0);
              LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,layer,(MethodInfo *)0x0);
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(gameObject,(MethodInfo *)0x0);
              if (pTVar9 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale
                                    ((Vector3 *)&stack0xffffffe8,pTVar9,(MethodInfo *)0x0);
                fVar11 = pVVar10->y;
                fVar12 = pVVar10->z;
                (this->fields).modelScale.x = pVVar10->x;
                (this->fields).modelScale.y = fVar11;
                (this->fields).modelScale.z = fVar12;
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                if (pTVar9 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (pTVar9,pTVar5,(MethodInfo *)0x0);
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  if (pTVar5 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar5,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
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
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localRotation
                                ((Transform *)this_02,
                                 TypeInfo__UnityEngine__Quaternion->static_fields->
                                 identityQuaternion,(MethodInfo *)0x0);
                      this_03 = (this->fields).colliders;
                      pOVar4 = (Object *)
                               Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)gameObject,
                                          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                                         );
                      if (this_03 != (List_1_UnityEngine_Collider_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)this_03,pOVar4,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                                  );
                        this_04 = (this->fields).renderers;
                        pOVar4 = (Object *)
                                 Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_04,
                                            UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                                           );
                        if (this_04 != (List_1_UnityEngine_Renderer_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    ((List_1_System_Object_ *)this_04,pOVar4,
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
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  this_00 = (this->fields)._.childIdMap;
  auStack_8._0_4_ = (Dictionary_2_System_Object_System_Object_ *)0x0;
  auStack_8._4_4_ = 0;
  auStack_8._8_4_ = 0;
  auStack_8._12_2_ = 0;
  auStack_8._14_2_ = 0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        (auStack_8 + 0x10),this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    DStack_7._dictionary = pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current.key = (pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    pOStack_10 = (Object *)0x0;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar12 == 0) break;
      boneName = (String *)0x0;
      if ((String *)DStack_7._current.key != (String *)0x0) {
        if ((String__Class *)(DStack_7._current.key)->klass == TypeInfo__System__String) {
          boneName = (String *)DStack_7._current.key;
        }
        if (boneName == (String *)0x0) {
          uVar13 = func_?(DStack_7._current.key,TypeInfo__System__String);
          func_?(uVar13);
          goto code_?;
        }
      }
      MVBody_AttachCube(this,boneName,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_7,
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
      auStack_8._0_4_ = pLVar14->_list;
      auStack_8._4_4_ = pLVar14->_index;
      auStack_8._8_4_ = pLVar14->_version;
      auStack_8._12_4_ = pLVar14->_current;
      pOStack_10 = (Object *)0x0;
      uStack_1 = 4;
      pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)auStack_8;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)auStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)auStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)auStack_8._12_4_ == (RegexCharClass_SingleRange)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)auStack_8._12_4_,(this->fields).visible,(MethodInfo *)0x0);
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
  else if (((TypeInfo__MVBody->_1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth) &&
          ((MVBody__Class *)
           (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVBody->_1).typeHierarchyDepth - 1] ==
           TypeInfo__MVBody)) {
    *(undefined1 *)((int)&pMVar1[1].fields._.rotation.x + 1) = 0;
    return pMVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
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
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)bodyCloneGO,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      while( true ) {
        if ((int)pIVar1[1].monitor <= (int)pMVar2) {
          return;
        }
        if (pIVar1[1].monitor <= pMVar2) break;
        this_00 = pIVar3->klass;
        this_03 = this_00;
        this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__List<UnityEngine::Material>
                                 );
        if (this_01 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
        if (this_00 == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        pMStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                               ((Renderer *)this_00,(MethodInfo *)0x0);
        ppMVar5 = pMStack_4->vector;
        uVar6 = 0;
        pIVar1 = unaff_ESI;
        if (pMStack_4 == (Material__Array *)0x0) goto code_?;
        while ((int)uVar6 < (int)pMStack_4->max_length) {
          if (pMStack_4->max_length <= uVar6) goto code_?;
          source = *ppMVar5;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)source,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            this_02 = (Material *)func_?();
            if (this_02 == (Material *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                      (this_02,source,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_01,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                      );
            uVar6 = uVar6 + 1;
            ppMVar5 = ppMVar5 + 1;
          }
          else {
            uVar6 = uVar6 + 1;
            ppMVar5 = ppMVar5 + 1;
          }
        }
        value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                          (this_01,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__ToArray__
                          );
        iVar8 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterials
                  ((Renderer *)this_03,(Material__Array *)value,(MethodInfo *)0x0);
        pMVar2 = (MonitorData *)(iVar8 + 1);
        pIVar3 = (IEnumerable_1_System_Object_ *)&value->monitor;
        unaff_ESI = pIVar1;
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
          (this->fields).bodyClone = pBVar10;
          func_?();
          pBVar10 = (this->fields).bodyClone;
          if (pBVar10 != (BodyClone *)0x0) {
            pIVar11 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pBVar10,
                                 AvatarAccessory__MethodInfo__UnityEngine__Component__GetComponentsInChildren<AvatarAccessory>______
                                );
            if (pIVar11 != (IEnumerable_1_System_Object_ *)0x0) {
              pMVar12 = pIVar11[1].monitor + -1;
              if (-1 < (int)pMVar12) {
                ppIVar13 = &pIVar11->klass + (int)(pIVar11[1].monitor + 3);
                do {
                  if (pIVar11[1].monitor <= pMVar12) goto code_?;
                  if (*ppIVar13 == (IEnumerable_1_System_Object___Class *)0x0)
                  goto code_?;
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)*ppIVar13,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    _hideEquippedItem = TypeInfo__UnityEngine__Object;
                    enableAllRenderers = 0xb9;
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)pGVar2,(MethodInfo *)0x0);
                  ppIVar13 = ppIVar13 + -1;
                  pMVar12 = pMVar12 + -1;
                } while (-1 < (int)pMVar12);
                this = (MVBody *)0x0;
                bVar1 = hideEquippedItem;
              }
              hideEquippedItem = bVar1;
              pBVar10 = (this->fields).bodyClone;
              accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
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
                bodyWoId = 0;
                bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar1 == 0) {
                  if (x == (Object_1 *)0x0) goto code_?;
                  pBVar14 = (BodyAccessoriesController *)func_?();
                  if (pBVar14 == (BodyAccessoriesController *)0x0) goto code_?;
                  pGVar2 = (GameObject *)0x0;
                  BodyAccessoriesController::BodyAccessoriesController__ctor
                            (pBVar14,bodyWoId,(BodyData *)0x0,accessoryData,1,(MethodInfo *)0x0);
                  (pBVar10->fields).bodyAccessoriesController = pBVar14;
                  func_?();
                  pBVar14 = (pBVar10->fields).bodyAccessoriesController;
                  if (pBVar14 == (BodyAccessoriesController *)0x0) goto code_?;
                  BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                            (pBVar14,1,(MethodInfo *)0x0);
                  pBVar14 = (pBVar10->fields).bodyAccessoriesController;
                  if (pBVar14 == (BodyAccessoriesController *)0x0) goto code_?;
                  BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                            (pBVar14,accessoryData,(MethodInfo *)0x0);
                }
                else {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_Failed_to_get_MVBodyObject,(MethodInfo *)0x0);
                }
                if (enableAllRenderers != 0) {
                  pIVar11 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                      ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar2,
                                       UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                      );
                  pMVar12 = (MonitorData *)0x0;
                  if (pIVar11 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
                  pIVar15 = pIVar11 + 2;
                  for (; (int)pMVar12 < (int)pIVar11[1].monitor; pMVar12 = pMVar12 + 1) {
                    if (pIVar11[1].monitor <= pMVar12) goto code_?;
                    if (pIVar15->klass == (IEnumerable_1_System_Object___Class *)0x0)
                    goto code_?;
                    pGVar2 = (GameObject *)&UNK_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                              ((Renderer *)pIVar15->klass,1,(MethodInfo *)0x0);
                    pIVar15 = (IEnumerable_1_System_Object_ *)&pIVar15->monitor;
                  }
                }
                if (hideEquippedItem != 0) {
                  pIVar11 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                      ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar2,
                                       PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                                      );
                  pMVar12 = (MonitorData *)0x0;
                  if (pIVar11 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
                  pIVar15 = pIVar11 + 2;
                  for (; (int)pMVar12 < (int)pIVar11[1].monitor; pMVar12 = pMVar12 + 1) {
                    if (pIVar11[1].monitor <= pMVar12) goto code_?;
                    if (pIVar15->klass == (IEnumerable_1_System_Object___Class *)0x0)
                    goto code_?;
                    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject
                                        ((Component *)pIVar15->klass,(MethodInfo *)0x0);
                    if (this_01 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_01,0,(MethodInfo *)0x0);
                    pIVar15 = (IEnumerable_1_System_Object_ *)&pIVar15->monitor;
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
  if ((this->fields).bodyAccessoriesController != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy
              ((this->fields).bodyAccessoriesController,(MethodInfo *)0x0);
  }
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
    BoneAnimation::BoneAnimation_Detach(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar2 = (pMVar1->fields).avatarBlinker;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 == (AvatarBlinker *)0x0))
        goto code_?;
        mscorlib.dll::System::Text::DecoderNLS::DecoderNLS_ClearMustFlush
                  ((DecoderNLS *)pAVar2,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 != (MVBodyObject *)0x0) &&
         (this_01 = (pMVar1->fields).avatarBlobShadowController,
         this_01 != (AvatarBlobShadowController *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(pBVar1,(MethodInfo *)0x0);
    (this->fields).previewBodyAccessoriesController = (BodyAccessoriesController *)0x0;
    func_?(&(this->fields).previewBodyAccessoriesController,0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  pDVar2 = (pMVar1->fields)._.blueprintData;
  this_00 = (Enum *)func_?(TypeInfo__MV__Common__BlueprintData,&this);
  key = mscorlib.dll::System::Enum::Enum_ToString_2(this_00,StringLiteral_d,(MethodInfo *)0x0);
  if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
    this = (MVBody *)0x0;
    method = (MethodInfo *)extraout_EDX;
  }
  else {
    this = (MVBody *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (pDVar2,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (this == (MVBody *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    method = (MethodInfo *)
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (this->klass->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar2;
}


/* Single GetAccessoryOffset(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryOffset
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
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
    pDVar2 = (pBVar1->fields).accessoryData;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)pSVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_00 = (Enum *)func_?();
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (this_00,StringLiteral_d,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth <= (pDVar2->klass->_1).typeHierarchyDepth) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar2,(Object *)pSVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar4 == (Object *)0x0) goto code_?;
          if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
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
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
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
    pDVar2 = (pBVar1->fields).accessoryData;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)pSVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_00 = (Enum *)func_?();
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (this_00,StringLiteral_d,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth <= (pDVar2->klass->_1).typeHierarchyDepth) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar2,(Object *)pSVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar4 == (Object *)0x0) goto code_?;
          if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
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
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelInstance__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
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
  size.y = (float)_UNK_?;
  size.x = (float)_UNK_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = uVar1;
  size.z = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            (__return_storage_ptr__,(Vector3)(auVar2 << 0x20),size,(MethodInfo *)0x0);
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
  cubeModel_00 = cubeModel;
  pMVar1 = this;
  pMStack_2 = (ModelingBoxCountConstraint *)0x0;
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.idChildMap;
  if (cubeModel == (MVCubeModelInstance *)0x0) {
code_?:
    func_?();
  }
  else {
    this = (MVBody *)(cubeModel->fields)._._._.id;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
      return (IModelingConstraint *)pMStack_2;
    }
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields).constraints;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (pDVar5,(Object *)(cubeModel_00->fields)._._._.id,(Object **)&pMStack_2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__TryGetValue_int__IModelingConstraint__
              );
    if (pMStack_2 != (ModelingBoxCountConstraint *)0x0) {
      return (IModelingConstraint *)pMStack_2;
    }
    iStack_6 = (cubeModel_00->fields)._._._.id;
    pDVar5 = (pMVar1->fields)._.idChildMap;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar5,pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pOVar3 = (Object *)0x0;
    if (pOVar7 != (Object *)0x0) {
      if ((String__Class *)pOVar7->klass == TypeInfo__System__String) {
        pOVar3 = pOVar7;
      }
      pSVar8 = TypeInfo__System__String;
      if (pOVar3 == (Object *)0x0) goto code_?;
    }
    pMVar9 = (pMVar1->fields).bodyObject;
    if ((pMVar9 == (MVBodyObject *)0x0) ||
       (this = (MVBody *)(pMVar9->fields).bodyData, this == (MVBody *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
      cRam_? = '\x01';
    }
    pMVar10 = (MVBody *)(this->fields)._._._._.outputLinkRefs;
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._._._.ownerActorNr;
    this = pMVar10;
    if ((pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar5,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                            ), this == (MVBody *)0x0)) goto code_?;
    if (pOVar7 < (Object *)(this->fields)._._._._.groupId) {
      pVVar11 = BodyData::BodyData_GetVectorFromObscuredFloatArray
                          ((Vector3 *)&stack0xffffffd4,
                           (ObscuredFloat__Array *)(&(this->fields)._._._._.itemId)[(int)pOVar7],
                           (MethodInfo *)0x0);
      uStack_12._0_4_ = pVVar11->x;
      uStack_12._4_4_ = pVVar11->y;
      cubeModel = (MVCubeModelInstance *)pVVar11->z;
      pMVar9 = (pMVar1->fields).bodyObject;
      if ((pMVar9 != (MVBodyObject *)0x0) &&
         (this = (MVBody *)(pMVar9->fields).bodyData, this != (MVBody *)0x0)) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar10 = (MVBody *)(this->fields)._._._._.inputLinkRefs;
        pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._._._.ownerActorNr;
        this = pMVar10;
        if ((pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar5,pOVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                ), this != (MVBody *)0x0)) {
          if ((Object *)(this->fields)._._._._.groupId <= pOVar7) goto code_?;
          pVVar11 = BodyData::BodyData_GetVectorFromObscuredFloatArray
                              ((Vector3 *)&stack0xffffffc8,
                               (ObscuredFloat__Array *)
                               (&(this->fields)._._._._.itemId)[(int)pOVar7],(MethodInfo *)0x0);
          uVar13 = pVVar11->x;
          uVar14 = pVVar11->y;
          pMStack_15 = (MethodInfo *)pVVar11->z;
          pMVar9 = (pMVar1->fields).bodyObject;
          if ((pMVar9 != (MVBodyObject *)0x0) &&
             (this = (MVBody *)(pMVar9->fields).bodyData, this != (MVBody *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pMVar10 = (MVBody *)(this->fields)._._._._.objectLinkRefs;
            pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                     (this->fields)._._._._.ownerActorNr;
            this = pMVar10;
            if ((pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
               (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (pDVar5,pOVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                    ), this != (MVBody *)0x0)) {
              if ((Object *)(this->fields)._._._._.groupId <= pOVar3) goto code_?;
              puVar16 = &(this->fields)._._._._.itemId + (int)&pOVar3->klass * 4;
              uVar17 = *puVar16;
              fVar18 = (float)puVar16[1];
              fVar19 = (float)puVar16[2];
              fVar20 = (float)puVar16[3];
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              value.hiddenValue = (int32_t)fVar18;
              value.currentCryptoKey = uVar17;
              value.fakeValue = (int32_t)fVar19;
              value._12_4_ = fVar20;
              iStack_21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
              v.y = (float)(int)uStack_12;
              v.x = (float)&uStack_12;
              v.z = (float)((ulonglong)uStack_12 >> 0x20);
              IVar22 = MathFunctions::MathFunctions_ToIntVector(v,(MethodInfo *)cubeModel);
              uStack_23 = *IVar22._0_4_;
              cubeModel = (MVCubeModelInstance *)
                          CONCAT22(*(undefined2 *)(IVar22._0_4_ + 1),cubeModel._0_2_);
              v_00.y = (float)uVar13;
              v_00.x = (float)&uStack_12;
              v_00.z = (float)uVar14;
              IVar22 = MathFunctions::MathFunctions_ToIntVector(v_00,pMStack_15);
              pMStack_15 = (MethodInfo *)*IVar22._0_4_;
              this = (MVBody *)CONCAT22(*(undefined2 *)(IVar22._0_4_ + 1),this._0_2_);
              this_01 = (ModelingBoxCountConstraint *)func_?();
              if (this_01 != (ModelingBoxCountConstraint *)0x0) {
                IVar22.z = cubeModel._2_2_;
                IVar22.x = (undefined2)uStack_23;
                IVar22.y = uStack_23._2_2_;
                maxCorner.z = this._2_2_;
                maxCorner._0_4_ = pMStack_15;
                ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
                          (this_01,(MVCubeModelBase *)cubeModel_00,IVar22,maxCorner,iStack_21,
                           (MethodInfo *)0x0);
                pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields).constraints;
                pMStack_2 = this_01;
                if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar5,(Object *)(cubeModel_00->fields)._._._.id,(Object *)this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Add_int__IModelingConstraint_
                            );
                  return (IModelingConstraint *)pMStack_2;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  pOVar7 = (Object *)func_?();
  pSVar8 = extraout_ECX;
code_?:
  func_?(pOVar7,pSVar8);
  pcVar24 = (code *)swi(3);
  pIVar25 = (IModelingConstraint *)(*pcVar24)();
  return pIVar25;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  source = (this->fields)._._._.gameObject;
  if (source != (GameObject *)0x0) {
    pMVar2 = (MeshFilter__Array *)
             Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
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
        this_00 = (pMVar3->fields).avatarBlobShadowController;
      }
      else {
        MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
        pMVar3 = (this->fields).bodyObject;
        if (pMVar3 == (MVBodyObject *)0x0) goto code_?;
        this_00 = (pMVar3->fields).avatarBlobShadowController;
      }
      if (this_00 != (AvatarBlobShadowController *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
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
  if (pMVar1 != (MVBodyObject *)0x0) {
    bodyData = (pMVar1->fields).bodyData;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      isVisible = (this->fields).visible;
      pBVar3 = (BodyAccessoriesController *)func_?(TypeInfo__BodyAccessoriesController);
      if (pBVar3 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController__ctor
                  (pBVar3,0,bodyData,pDVar2,isVisible,(MethodInfo *)0x0);
        (this->fields).bodyAccessoriesController = pBVar3;
        func_?(&(this->fields).bodyAccessoriesController,pBVar3);
        pBVar3 = (this->fields).bodyAccessoriesController;
        pDVar2 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
        if (pBVar3 != (BodyAccessoriesController *)0x0) {
          BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                    (pBVar3,pDVar2,(MethodInfo *)0x0);
          pBVar3 = (this->fields).bodyAccessoriesController;
          if (pBVar3 != (BodyAccessoriesController *)0x0) {
            MVBody_UpdateBodyClone(this,(pBVar3->fields).accessoryData,(MethodInfo *)0x0);
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
    DStack_3._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
    DStack_3._version = 0;
    DStack_3._index = 0;
    DStack_3._current.key = (Object *)0x0;
    DStack_3._current.value = (Object *)0x0;
    DStack_3._getEnumeratorRetType = 0;
    if ((pBVar1->fields).accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffac,(pBVar1->fields).accessoryData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_3._dictionary = pDVar4->_dictionary;
      DStack_3._version = pDVar4->_version;
      DStack_3._index = pDVar4->_index;
      DStack_3._current.key = (pDVar4->_current).key;
      DStack_3._16_8_ = *(undefined8 *)&(pDVar4->_current).value;
      while (bVar5 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_3,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                               ), bVar5 != 0) {
        pOVar6 = DStack_3._current.value;
        method_00 = TypeInfo__MV__Common__AvatarAccessoryData;
        this_00 = (Enum *)func_?();
        DStack_3._getEnumeratorRetType = (int32_t)&UNK_?;
        key = mscorlib.dll::System::Enum::Enum_ToString_2(this_00,StringLiteral_d,(MethodInfo *)0x0)
        ;
        if ((Dictionary_2_System_Object_System_Object_ *)pOVar6 ==
            (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        if (((((Dictionary_2_System_Object_System_Object___Class *)pOVar6->klass)->_1).
             typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Dictionary_2_System_Object_System_Object___Class *)pOVar6->klass)->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] !=
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
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)pOVar6,(Object *)key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
          func_?();
          goto code_?;
        }
        piVar8 = (int *)func_?();
        if (*piVar8 == streamingAssetId) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_3,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,(MethodInfo *)method_00);
          *unaff_FS_OFFSET = pMVar2;
          return 1;
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_3,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,in_stack_9);
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
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (pBVar1->fields).accessoryData;
    key = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void OnAnimationUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnAnimationUpdate
               (MVBody *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) || ((pMVar1->fields).boneAnimation == (BoneAnimation *)0x0))
  goto code_?;
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
  if (((newAnimationData->klass->_1).typeHierarchyDepth <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newAnimationData->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  pOVar2 = (Object__Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                      (Object *)StringLiteral_state,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  this_00 = StringLiteral_timeStamp;
  pOVar3 = (Object__Class *)0x0;
  if (pOVar2 == (Object__Class *)0x0) {
code_?:
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                        (Object *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar4 == (Object *)0x0) {
code_?:
      uVar5 = func_?(&stack0xfffffff0);
      func_?(uVar5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar7 = (undefined4 *)func_?();
      pOVar4 = (Object *)*puVar7;
      method_00 = (MethodInfo *)newAnimationData;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
        method_00 = (MethodInfo *)newAnimationData;
      }
      newAnimationData = pOVar4;
      if (*(int *)&(this_00->fields)._firstChar != 0) {
        newAnimationData = (Object *)&UNK_?;
        (**(code **)(*(int *)&(this_00->fields)._firstChar + 0xc))();
      }
      if ((char)this_00[1].fields._stringLength == '\0') {
        pOVar4 = (Object *)func_?();
        if (pOVar4 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar4,ExceptionArgument__Enum_obj,method_00);
          this_01 = (Queue_1_System_Object_ *)(pOVar4 + 1);
          pOVar4[1].klass = pOVar3;
          func_?();
          pOVar4[1].monitor = (MonitorData *)newAnimationData;
          if (this_01 != (Queue_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Enqueue
                      (this_01,pOVar4,
                       MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                      );
            BoneAnimation::BoneAnimation_ComputeRemoteAnimation
                      ((BoneAnimation *)this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pOVar4 = (Object *)func_?();
        if (pOVar4 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar4,ExceptionArgument__Enum_obj,method_00);
          pOVar4[1].klass = pOVar3;
          func_?();
          pOVar4[1].monitor = (MonitorData *)newAnimationData;
          this_00[2].fields._stringLength = (int32_t)pOVar4;
          func_?();
          BoneAnimation::BoneAnimation_ComputeAnimation((BoneAnimation *)this_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    func_?();
  }
  else {
    if ((String__Class *)(pOVar2->_0).image == TypeInfo__System__String) {
      pOVar3 = pOVar2;
    }
    if (pOVar3 != (Object__Class *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
      func_?();
      cRam_? = '\x01';
    }
    if (newHealthData != (Object *)0x0) {
      if ((newHealthData->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar3 = (float *)func_?();
      fVar4 = *pfVar3;
      if (fVar4 < (this_00->fields).previousBlinkHealth) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.5,(MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkHealth = fVar4;
      return;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?();
      cRam_? = '\x01';
    }
    if (newShieldData != (Object *)0x0) {
      if ((newShieldData->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar3 = (float *)func_?();
      fVar4 = *pfVar3;
      if (fVar4 < (this_00->fields).previousBlinkShield) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,0.5,(MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkShield = fVar4;
      return;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pDVar1 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
    pDStack_2 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                HashtableFunctions_DeepCopyHashTable_1(pDVar1,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      puStack_3 = (undefined1 *)0x2;
      pEVar4 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&puStack_3);
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar4,StringLiteral_d,(MethodInfo *)0x0)
      ;
      if (viewItem != (AccessoryDataClient *)0x0) {
        pAStack_6 = (AvatarAccessoryData__Enum__Class *)(viewItem->fields)._.slot;
        pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&pAStack_6);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar1,(Object *)pSVar5,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pEVar4 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&stack0xffffffec)
        ;
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar4,StringLiteral_d,(MethodInfo *)0x0);
        pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar1,(Object *)pSVar5,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        puStack_3 = &stack0xffffffe4;
        pAStack_6 = TypeInfo__MV__Common__AvatarAccessoryData;
        pEVar4 = (Enum *)func_?();
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar4,StringLiteral_d,(MethodInfo *)0x0);
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar1,(Object *)pSVar5,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pEVar4 = (Enum *)func_?();
        IStack_8.m_value = (int32_t)&UNK_?;
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar4,StringLiteral_d,(MethodInfo *)0x0);
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar1,(Object *)pSVar5,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pEVar4 = (Enum *)func_?();
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar4,StringLiteral_d,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar1,(Object *)pSVar5,(pDVar1->fields)._syncRoot,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        IStack_8.m_value = (int32_t)pDVar1[1].monitor;
        pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
        accessoryData = pDStack_2;
        if (pDStack_2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDStack_2,(Object *)pSVar5,(Object *)pDVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pBVar9 = (this->fields).bodyAccessoriesController;
          if (pBVar9 != (BodyAccessoriesController *)0x0) {
            BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                      (pBVar9,0,(MethodInfo *)0x0);
            pBVar9 = (this->fields).bodyAccessoriesController;
            if (pBVar9 != (BodyAccessoriesController *)0x0) {
              BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                        (pBVar9,0,(MethodInfo *)0x0);
              bodyWoId = (this->fields)._._._._.id;
              pMVar10 = (this->fields).bodyObject;
              if (pMVar10 != (MVBodyObject *)0x0) {
                pDStack_2 = (Dictionary_2_System_Object_System_Object_ *)(pMVar10->fields).bodyData;
                pBVar9 = (BodyAccessoriesController *)
                         func_?(TypeInfo__BodyAccessoriesController);
                if (pBVar9 != (BodyAccessoriesController *)0x0) {
                  BodyAccessoriesController::BodyAccessoriesController__ctor
                            (pBVar9,bodyWoId,(BodyData *)pDStack_2,accessoryData,1,(MethodInfo *)0x0
                            );
                  (this->fields).previewBodyAccessoriesController = pBVar9;
                  func_?(&(this->fields).previewBodyAccessoriesController,pBVar9);
                  pBVar9 = (this->fields).previewBodyAccessoriesController;
                  if (pBVar9 != (BodyAccessoriesController *)0x0) {
                    BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                              (pBVar9,accessoryData,(MethodInfo *)0x0);
                    pBVar9 = (this->fields).previewBodyAccessoriesController;
                    if (pBVar9 != (BodyAccessoriesController *)0x0) {
                      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                                (pBVar9,1,(MethodInfo *)0x0);
                      pBVar9 = (this->fields).previewBodyAccessoriesController;
                      if (pBVar9 != (BodyAccessoriesController *)0x0) {
                        MVBody_UpdateBodyClone
                                  (this,(pBVar9->fields).accessoryData,(MethodInfo *)0x0);
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
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
        ((pAVar2->fields)._.blinkers != (Dictionary_2_BlinkType_Blinker_ *)0x0)) &&
       (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                           ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)(pAVar2->fields)._.blinkers,
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                           ),
       pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)0x0)) {
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(pAVar2->fields)._.blinkers;
      if ((this_00 ==
           (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           0x0) || (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                       (this_00,
                                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                                       ),
                   pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)0x0)) goto code_?;
      pDVar4 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffc8,pDVar3,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                         );
      pAVar5 = (AvatarBlinker *)pDVar4->_currentValue;
      while (bVar6 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                     Object,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                 *)&stack0xffffffb8,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                               ), bVar6 != 0) {
        if (pAVar5 == (AvatarBlinker *)0x0) goto code_?;
        pMVar7 = (pAVar5->fields)._.blinkMaterial;
        fVar8 = (float)(pAVar5->fields)._.layerMask;
        in_stack_9 = pAVar5;
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if ((fVar10 <= fVar8 + (float)pMVar7) &&
           (in_stack_9 = pAVar2, func_?(),
           (pAVar2->fields)._.meshFilters != (MeshFilter__Array *)0x0)) {
          pMVar11 = (pAVar2->fields)._.meshFilters;
          puVar12 = (undefined1 *)0x0;
          while ((int)puVar12 < (int)pMVar11->max_length) {
            if ((undefined1 *)pMVar11->max_length <= puVar12) {
              func_?();
              goto code_?;
            }
            this_01 = pMVar11->vector[(int)puVar12];
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pAVar5 = (AvatarBlinker *)&UNK_?;
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              if ((this_01 == (MeshFilter *)0x0) ||
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                 this_02 == (GameObject *)0x0)) goto code_?;
              pMVar11 = (MeshFilter__Array *)0x0;
              in_stack_9 = (AvatarBlinker *)&UNK_?;
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(this_02,(MethodInfo *)0x0);
              if (bVar6 == 0) goto code_?;
              tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
              mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                               (this_01,(MethodInfo *)0x0);
              if (in_stack_9 == (AvatarBlinker *)0x0) goto code_?;
              pMVar11 = (MeshFilter__Array *)&UNK_?;
              pAVar13 = in_stack_9;
              Blinker::Blinker_Draw
                        ((Blinker *)in_stack_9,mesh,tfm,(pAVar2->fields)._.targetCamera,
                         (pAVar2->fields)._.layerMask,(MethodInfo *)0x0);
              puVar12 = (undefined1 *)((int)&pAVar13->klass + 1);
            }
            else {
code_?:
              puVar12 = puVar12 + 1;
            }
          }
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffb8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 ,(MethodInfo *)in_stack_9);
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
  (in_stack_5->fields).accessoryData = in_stack_6;
  uVar7._0_4_ = (Object *)0x0;
  uVar7._4_4_ = 0;
  func_?(&(in_stack_5->fields).accessoryData,in_stack_6);
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                           );
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
              );
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(in_stack_5->fields).accessoryMap;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffbc,pDVar8,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      uVar10 = *(undefined8 *)&(pDVar9->_current).value;
      RVar11 = (RegexCharClass_SingleRange)(pDVar9->_current).key;
      while (RVar12 = RVar11,
            bVar2 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_
                                *)&stack0xffffff94,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                              ), bVar2 != 0) {
        RVar11 = RVar12;
        bVar2 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                          (in_stack_5,(AvatarAccessory *)uVar10,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          uVar7._4_2_ = RVar12.First;
          uVar7._6_2_ = RVar12.Last;
          uVar7._0_4_ = (Object *)this_01;
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Add
                    (this_01,RVar12,
                     MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                    );
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff94,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,(MethodInfo *)uVar7);
      pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc4,this_01,
                          MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                         );
      RVar11 = pLVar13->_current;
      while( true ) {
        method_00 = SUB84(uVar10,4);
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
        pDVar14 = (in_stack_5->fields).accessoryMap;
        if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        uVar10._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        uVar10._0_4_ = (Object *)RVar11;
        this_02 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                             (Int32Enum__Enum)RVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if ((this_02 == (AvatarAccessory *)0x0) ||
           (this_03 = AvatarAccessory::AvatarAccessory_get_Transform(this_02,(MethodInfo *)0x0),
           this_03 == (Transform *)0x0)) goto code_?;
        RVar12.First = 0;
        RVar12.Last = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_03,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar14 = (in_stack_5->fields).accessoryMap;
        if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,(Int32Enum__Enum)RVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        in_stack_15 = RVar11;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_02,(MethodInfo *)0x0);
        RVar11 = RVar12;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          RVar11 = RVar12;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffac,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                 ,method_00);
      pDVar8 = (in_stack_5->fields).accessoryData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffffbc,pDVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        pDVar16 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pDVar9->_current).key;
        uVar17 = *(ulonglong *)&(pDVar9->_current).value;
        while( true ) {
          while( true ) {
            bVar2 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff7c,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar2 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffff7c,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)in_stack_15);
              *unaff_FS_OFFSET = uVar4;
              return;
            }
            pOVar18 = (Object *)uVar17;
            s = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0;
            pMVar19 = (MonoBehaviour *)0xffffffff;
            if (pDVar16 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              if (pDVar16->klass ==
                  (Dictionary_2_System_Object_GUILoginHandler_PlanetData___Class *)
                  TypeInfo__System__String) {
                s = pDVar16;
              }
              if (s == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
              goto code_?;
            }
            bVar2 = mscorlib.dll::System::Int32::Int32_TryParse
                              ((String *)s,(int32_t *)&stack0xfffffff0,(MethodInfo *)0x0);
            if (bVar2 != 0) break;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            in_stack_15 = (RegexCharClass_SingleRange)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          this_04 = (TweenRunner_1_FloatTween_ *)func_?();
          if (this_04 == (TweenRunner_1_FloatTween_ *)0x0) break;
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor(this_04,(MethodInfo *)0x0);
          (this_04->fields).m_Tween = (IEnumerator *)in_stack_5;
          func_?();
          (this_04->fields).m_CoroutineContainer = pMVar19;
          if (pOVar18 == (Object *)0x0) {
            in_stack_6 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          }
          else {
            in_stack_6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (in_stack_6 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
          }
          pEVar20 = (Enum *)func_?();
          pSVar21 = mscorlib.dll::System::Enum::Enum_ToString_2
                              (pEVar20,StringLiteral_d,(MethodInfo *)0x0);
          if (in_stack_6 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          pSVar21 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (in_stack_6,(Object *)pSVar21,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pSVar21 != (String *)0x0) {
            pSVar22 = (String *)0x0;
            if (pSVar21->klass == TypeInfo__System__String) {
              pSVar22 = pSVar21;
            }
            pSVar21 = pSVar22;
            if (pSVar22 == (String *)0x0) goto code_?;
          }
          pDVar16 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                    (in_stack_5->fields).accessoryMap;
          if (pDVar16 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar16,(Object *)(this_04->fields).m_CoroutineContainer,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                            );
          if (bVar2 == 0) {
code_?:
            this_00 = (in_stack_5->fields).accessoryLoader;
            this_05 = (Action_1_Object_ *)func_?();
            if (this_05 == (Action_1_Object_ *)0x0) break;
            uVar17 = CONCAT44(this_04,this_05);
            pDVar16 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&UNK_?;
            mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                      (this_05,(Object *)this_04,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_00 == (AccessoryLoader *)0x0) break;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_00,pSVar21,(Action_1_AvatarAccessory_ *)this_05,(MethodInfo *)0x0);
          }
          else {
            pDVar14 = (in_stack_5->fields).accessoryMap;
            if ((pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
               (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                     (Int32Enum__Enum)(this_04->fields).m_CoroutineContainer,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), pOVar18 == (Object *)0x0)) break;
            bVar2 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)pOVar18[1].monitor,pSVar21,(MethodInfo *)0x0);
            if (bVar2 != 0) goto code_?;
            pDVar16 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                      (in_stack_5->fields).accessoryMap;
            if (pDVar16 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
            pMVar19 = (this_04->fields).m_CoroutineContainer;
            uVar17 = CONCAT44(MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              ,pMVar19);
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar16,(Object *)pMVar19,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar2 != 0) {
              pDVar14 = (in_stack_5->fields).accessoryMap;
              if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
              uVar17 = uVar17 & 0xffffffff;
              pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                   (Int32Enum__Enum)(this_04->fields).m_CoroutineContainer,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                  );
              if (pOVar18 == (Object *)0x0) break;
              bVar2 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)pOVar18[1].monitor,pSVar21,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                pEVar20 = (Enum *)func_?();
                pSVar21 = mscorlib.dll::System::Enum::Enum_ToString_2
                                    (pEVar20,StringLiteral_d,(MethodInfo *)0x0);
                pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (in_stack_6,(Object *)pSVar21,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar18 == (Object *)0x0) break;
                if ((pOVar18->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                          (in_stack_5,*pfVar23,
                           (AccessorySlotType__Enum)(this_04->fields).m_CoroutineContainer,
                           (MethodInfo *)0x0);
                pDVar16 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                          func_?();
                pSVar21 = StringLiteral_d;
                pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2
                                    ((Enum *)pDVar16,StringLiteral_d,(MethodInfo *)0x0);
                uVar17 = ZEXT48(pSVar21);
                pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (in_stack_6,(Object *)pSVar22,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar18 == (Object *)0x0) break;
                if ((pOVar18->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                          (in_stack_5,*pfVar23,
                           (AccessorySlotType__Enum)(this_04->fields).m_CoroutineContainer,
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields).renderers;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                        );
      if (bVar9 == 0) break;
      bVar9 = (this->fields).visible;
      _bStack_18 = CONCAT31(uStack_10,bVar9);
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)LStack_6._current,bVar9,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&LStack_6,
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
  this_03 = this;
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
  (this_03->fields).collidersEnabled = 1;
  (this_03->fields).shadowVisible = 1;
  (this_03->fields).visible = 1;
  this_05 = (Dictionary_2_System_Int32_IModelingConstraint_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>
                           );
  if (this_05 == (Dictionary_2_System_Int32_IModelingConstraint_ *)0x0) goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)this_05,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Dictionary__
            );
  (this_03->fields).constraints = this_05;
  func_?(&(this_03->fields).constraints,this_05);
  this_06 = (List_1_UnityEngine_Renderer_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Renderer>);
  if (this_06 == (List_1_UnityEngine_Renderer_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)this_06,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__List__);
  (this_03->fields).renderers = this_06;
  func_?(&(this_03->fields).renderers,this_06);
  this_07 = (List_1_UnityEngine_Collider_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
  if (this_07 == (List_1_UnityEngine_Collider_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)this_07,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  (this_03->fields).colliders = this_07;
  func_?(&(this_03->fields).colliders,this_07);
  this_08 = (List_1_MVCubeModelInstance_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
  if (this_08 == (List_1_MVCubeModelInstance_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)this_08,
             MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
  (this_03->fields).attachedPartModels = this_08;
  func_?(&(this_03->fields).attachedPartModels,this_08);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this_03->fields).modelScale.x = (pVVar1->zeroVector).x;
  (this_03->fields).modelScale.y = fVar2;
  (this_03->fields).modelScale.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  this_04 = worldObjects;
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 == (PrefabPool *)0x0) goto code_?;
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this_03,data,(ObjectPrefab *)(pPVar4->fields).mvBodyPrefab,
             worldObjects,(MethodInfo *)0x0);
  pMStack_5 = (MVBodyObject *)(this_03->fields)._._._.component;
  if (pMStack_5 == (MVBodyObject *)0x0) {
    (this_03->fields).bodyObject = (MVBodyObject *)0x0;
  }
  else if (((((((String__Class *)pMStack_5->klass)->_1).typeHierarchyDepth <
              (TypeInfo__MVBodyObject->_1).typeHierarchyDepth) ||
            ((((String__Class *)pMStack_5->klass)->_1).typeHierarchy
             [(TypeInfo__MVBodyObject->_1).typeHierarchyDepth - 1] !=
             (Il2CppClass *)TypeInfo__MVBodyObject)) ||
           ((this_03->fields).bodyObject = pMStack_5,
           (((String__Class *)pMStack_5->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVBodyObject->_1).typeHierarchyDepth)) ||
          ((((String__Class *)pMStack_5->klass)->_1).typeHierarchy
           [(TypeInfo__MVBodyObject->_1).typeHierarchyDepth - 1] !=
           (Il2CppClass *)TypeInfo__MVBodyObject)) {
    func_?();
    goto code_?;
  }
  pMStack_5 = (MVBodyObject *)&(this_03->fields).bodyObject;
  func_?();
  this = (MVBody *)0x0;
  if (this_04 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)this_04,
                     (Object *)(this_03->fields)._._._._.groupId,(Object **)&this,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
  if ((bVar6 != 0) && (this != (MVBody *)0x0)) {
    if (((TypeInfo__MVAvatar->_1).typeHierarchyDepth <= (this->klass->_1).typeHierarchyDepth) &&
       ((MVAvatar__Class *)
        (this->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVAvatar)) {
      if (this == (MVBody *)0x0) goto code_?;
      (this_03->fields).hasAvatarBeenAttached = 1;
    }
    if (((this != (MVBody *)0x0) &&
        ((TypeInfo__MVBuildModeAvatar->_1).typeHierarchyDepth <=
         (this->klass->_1).typeHierarchyDepth)) &&
       (((MVBuildModeAvatar__Class *)
         (this->klass->_1).typeHierarchy[(TypeInfo__MVBuildModeAvatar->_1).typeHierarchyDepth - 1]
         == TypeInfo__MVBuildModeAvatar && (this != (MVBody *)0x0)))) {
      (this_03->fields).hasAvatarBeenAttached = 1;
    }
  }
code_?:
  piVar7 = &(this_03->fields)._._._.previewLayerMask;
  *piVar7 = *piVar7 | 0x1000;
  pMStack_5 = (MVBodyObject *)StringLiteral_Player;
  (this_03->fields)._LayerToSetTo_k__BackingField = StringLiteral_Player;
  func_?(&(this_03->fields)._LayerToSetTo_k__BackingField);
  this_00 = (this_03->fields)._._._.gameObject;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    ((this_03->fields)._LayerToSetTo_k__BackingField,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this_00,value,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this_03->fields)._.blueprintData;
    pMStack_5 = (MVBodyObject *)0x4;
    pEVar8 = (Enum *)func_?(TypeInfo__MV__Common__BlueprintData,&pMStack_5);
    pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar8,StringLiteral_d,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_01,(Object *)pSVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar6 != 0) {
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Accessory_data_not_found__This_s,(MethodInfo *)0x0);
      this_02 = (this_03->fields)._.blueprintData;
      pMStack_5 = (MVBodyObject *)0x4;
      pEVar8 = (Enum *)func_?(TypeInfo__MV__Common__BlueprintData,&pMStack_5);
      pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar8,StringLiteral_d,(MethodInfo *)0x0)
      ;
      this_09 = (ParameterOverride_1_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if ((this_09 != (ParameterOverride_1_System_Object_ *)0x0) &&
         (Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    (this_09,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    ), this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_02,(Object *)pSVar9,(Object *)this_09,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    DStack_4._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
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
               GameObject_GetComponentsInChildren_1
                         (pGVar5,1,
                          SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                         );
        uVar6 = 0;
        if (this != (MVBody *)0x0) {
          ppOVar7 = (Object **)&(this->fields)._._._._.itemId;
          for (; (int)uVar6 < (this->fields)._._._._.groupId; uVar6 = uVar6 + 1) {
            if ((uint)(this->fields)._._._._.groupId <= uVar6) {
              func_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((Component *)*ppOVar7 == (Component *)0x0) goto code_?;
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)*ppOVar7,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (MVBody *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar5,(MethodInfo *)0x0);
            ppOVar7 = ppOVar7 + 1;
          }
          goto code_?;
        }
      }
    }
    else {
      this_00 = (Dictionary_2_System_Object_System_Object_ *)(this_02->fields).accessoryMap;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           (&DStack_10,this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                           );
        uStack_11 = 0;
        DStack_4._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9->_dictionary;
        DStack_4._version = pDVar9->_version;
        DStack_4._index = pDVar9->_index;
        DStack_4._current.key = (int32_t)(pDVar9->_current).key;
        DStack_4._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
        pDStack_12 = &DStack_4;
        while (bVar13 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                                 (&DStack_4,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                                 ), bVar13 != 0) {
          BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                    (this_02,(AvatarAccessory *)DStack_4._current.value,DStack_4._current.key,
                     (MethodInfo *)0x0);
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  (this->fields).collidersEnabled = value;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).colliders;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                ((Collider *)LStack_6._current,(this->fields).collidersEnabled,(MethodInfo *)0x0);
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

