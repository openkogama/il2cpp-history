
/* Boolean AccessoryShouldBeSelecable(AvatarAccessory) */

bool Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_AccessoryShouldBeSelecable
               (BodyAccessoriesController *this,AvatarAccessory *accessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryMoveOverride != 0) {
    if (accessory == (AvatarAccessory *)0x0) goto code_?;
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
    pIVar2 = TypeRef__AvatarAccessoryHat;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    if (pTVar1 == pTVar3) {
      return 1;
    }
    if ((this->fields).accessoryMoveOverride != 0) {
      if (accessory == (AvatarAccessory *)0x0) goto code_?;
      pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
      pIVar2 = TypeRef__AvatarAccessoryBackAccessories;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar1 == pTVar3) {
        return 1;
      }
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar4 == MVGameMode__Enum_CharacterEditor) {
    if (accessory == (AvatarAccessory *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
    pIVar2 = TypeRef__AvatarAccessoryHat;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    if (pTVar1 != pTVar3) {
      return 1;
    }
  }
  return 0;
}


/* Void ApplyAccessoryOffset(Single, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
               (BodyAccessoriesController *this,float yOffset,AccessorySlotType__Enum slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = slot;
  pBVar1 = this;
  pDVar2 = (this->fields).accessoryMap;
  if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
            AccessorySlotType,System::Object]::
            Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar2,slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)key;
    if (bVar3 == 0) {
code_?:
      this_01 = (pBVar1->fields).accessoryData;
      key_00 = (Type *)func_?();
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar4 = (Dictionary_2_System_String_Theme_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)this_01,key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        unaff_EDI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar4 == (Dictionary_2_System_String_Theme_ *)0x0) {
          this_04 = (Dictionary_2_System_String_Theme_ *)0x0;
        }
        else {
          bVar5 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar4->klass->_1).naturalAligment < bVar5) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          this_04 = (Dictionary_2_System_String_Theme_ *)0x0;
          if (bVar6) {
            this_04 = pDVar4;
          }
          if (this_04 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
        }
        this = (BodyAccessoriesController *)0x3;
        this_03 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&this);
        if (this_03 != (Enum *)0x0) {
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                      mscorlib.dll::System::Enum::Enum_ToString_2
                                (this_03,StringLiteral_d,(MethodInfo *)0x0);
          slot = (AccessorySlotType__Enum)yOffset;
          value = (Theme *)func_?(TypeInfo__System__Single,&slot);
          if (this_04 != (Dictionary_2_System_String_Theme_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_04,(String *)unaff_EDI,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
        }
      }
    }
    else {
      pDVar2 = (pBVar1->fields).accessoryMap;
      if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
        pAVar7 = (AvatarAccessory *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 AccessorySlotType,System::Object]::
                 Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                           ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar2,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                           );
        if (pAVar7 != (AvatarAccessory *)0x0) {
          this = (BodyAccessoriesController *)
                 AvatarAccessory::AvatarAccessory_get_Transform(pAVar7,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                              ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
          VVar9 = *pVVar8;
          if ((((uint)(TypeInfo__BodyAccessoriesController->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__BodyAccessoriesController->_1).cctor_started == 0)) {
            func_?(TypeInfo__BodyAccessoriesController);
          }
          this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset;
          if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
            pVVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      AccessorySlotType,UnityEngine::Vector3]::
                      Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3__get_Item
                                ((Vector3 *)&stack0xffffffe4,this_00,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                                );
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffe4,VVar9,*pVVar8,(MethodInfo *)0x0);
            pMVar10 = (MethodInfo *)pVVar8->z;
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
            this = (BodyAccessoriesController *)yOffset;
            yOffset = 0.0;
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xffffffe4,*pVVar8,(float)this,(MethodInfo *)0x0)
            ;
            yOffset = (float)&UNK_?;
            this = (BodyAccessoriesController *)&stack0xffffffe4;
            VVar9.y = (float)&stack0xffffffe4;
            VVar9.x = (float)&UNK_?;
            VVar9.z = (float)pMVar10;
            slot = (AccessorySlotType__Enum)&stack0xffffffe4;
            method = pMVar10;
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)this,VVar9,*pVVar8,(MethodInfo *)0x0);
            if (this != (BodyAccessoriesController *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        ((Transform *)this,*pVVar8,(MethodInfo *)0x0);
              pDVar2 = (pBVar1->fields).accessoryMap;
              if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
                pAVar7 = (AvatarAccessory *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         AccessorySlotType,System::Object]::
                         Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                    pDVar2,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                   );
                if (pAVar7 != (AvatarAccessory *)0x0) {
                  this_02 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar7,(MethodInfo *)0x0)
                  ;
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_identity
                                      ((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
                  if (this_02 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              (this_02,*pQVar11,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pDVar4 = extraout_EDX;
code_?:
  func_?(pDVar4,unaff_EDI);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ApplySizeChange(Single, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
               (BodyAccessoriesController *this,float size,AccessorySlotType__Enum slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = slot;
  pBVar1 = this;
  pDVar2 = (this->fields).accessoryMap;
  if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
            AccessorySlotType,System::Object]::
            Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar2,slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)key;
    if (bVar3 == 0) {
code_?:
      this_00 = (pBVar1->fields).accessoryData;
      key_00 = (Type *)func_?();
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar4 = (Dictionary_2_System_String_Theme_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_00,key_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        unaff_EDI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar4 == (Dictionary_2_System_String_Theme_ *)0x0) {
          this_05 = (Dictionary_2_System_String_Theme_ *)0x0;
        }
        else {
          bVar5 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar4->klass->_1).naturalAligment < bVar5) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          this_05 = (Dictionary_2_System_String_Theme_ *)0x0;
          if (bVar6) {
            this_05 = pDVar4;
          }
          if (this_05 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
        }
        this = (BodyAccessoriesController *)0x5;
        this_04 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&this);
        if (this_04 != (Enum *)0x0) {
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                      mscorlib.dll::System::Enum::Enum_ToString_2
                                (this_04,StringLiteral_d,(MethodInfo *)0x0);
          slot = (AccessorySlotType__Enum)size;
          value = (Theme *)func_?(TypeInfo__System__Single,&slot);
          if (this_05 != (Dictionary_2_System_String_Theme_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_05,(String *)unaff_EDI,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
        }
      }
    }
    else {
      pDVar2 = (pBVar1->fields).accessoryMap;
      if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
        this_01 = (HealthBar *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                  AccessorySlotType,System::Object]::
                  Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                            ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar2,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if (this_01 != (HealthBar *)0x0) {
          HealthBar::HealthBar_set_MaxHealth(this_01,size,(MethodInfo *)0x0);
          pDVar2 = (pBVar1->fields).accessoryMap;
          if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
            this_02 = (Component_1 *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      AccessorySlotType,System::Object]::
                      Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar2,
                                 key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                );
            if (this_02 != (Component_1 *)0x0) {
              slot = 0;
              this = (BodyAccessoriesController *)&UNK_?;
              size = (float)this_02;
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform(this_02,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                in_stack_7 = TypeInfo__UnityEngine__Vector3;
                method = (MethodInfo *)&UNK_?;
                func_?();
              }
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                 ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffffec,*pVVar8,size,(MethodInfo *)0x0);
              if (this_03 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (this_03,*pVVar8,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pDVar4 = extraout_EDX;
code_?:
  func_?(pDVar4,unaff_EDI);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean AttachAccessory(AvatarAccessory, AccessorySlotType, Single, Single) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_AttachAccessory
               (BodyAccessoriesController *this,AvatarAccessory *acc,AccessorySlotType__Enum slot,
               float offset,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryMap;
  if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
            AccessorySlotType,System::Object]::
            Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar1,slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).accessoryMap;
      if (pDVar1 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System
      ::Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Add
                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar1,slot,
                 (Object *)acc,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Add_MV__Common__AccessorySlotType__AvatarAccessory_
                );
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_add_accessory_a_second,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Out_commented_return_false,(MethodInfo *)0x0);
    }
    if (acc != (AvatarAccessory *)0x0) {
      pTVar3 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this->fields).bodyData;
      if ((((uint)(TypeInfo__BodyAccessoriesController->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__BodyAccessoriesController->_1).cctor_started == 0)) {
        func_?(TypeInfo__BodyAccessoriesController,pTVar3);
      }
      this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
      if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
        part = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               AccessorySlotType,System::Object]::
               Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                         ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)this_00,slot,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                         );
        if (this_02 != (BodyData *)0x0) {
          pTVar3 = BodyData::BodyData_GetPartBone_1(this_02,part,(MethodInfo *)0x0);
          if (this_02 != (BodyData *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      ((Transform *)this_02,pTVar3,(MethodInfo *)0x0);
            BodyAccessoriesController_ApplyAccessoryOffset(this,offset,slot,(MethodInfo *)0x0);
            BodyAccessoriesController_ApplySizeChange(this,(float)slot,slot,(MethodInfo *)0x0);
            pCVar4 = AvatarAccessory::AvatarAccessory_get_Colliders(acc,(MethodInfo *)0x0);
            uVar5 = 0;
            if (pCVar4 != (Collider__Array *)0x0) {
              ppCVar6 = pCVar4->vector;
              while( true ) {
                if ((int)pCVar4->max_length <= (int)uVar5) break;
                if (pCVar4->max_length <= uVar5) goto code_?;
                if (*ppCVar6 == (Collider *)0x0) goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          (*ppCVar6,0,(MethodInfo *)0x0);
                uVar5 = uVar5 + 1;
                ppCVar6 = ppCVar6 + 1;
              }
              pTVar3 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
              this_01 = (this_02->fields).PartConstraintsBoxMin;
              if (this_01 != (ObscuredFloat__Array__Array *)0x0) {
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0);
                if (pGVar7 != (GameObject *)0x0) {
                  layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                    (pGVar7,(MethodInfo *)0x0);
                  LayerUtil::LayerUtil_SetLayerRecursively(pTVar3,layer,(MethodInfo *)0x0);
                  AvatarAccessory::AvatarAccessory_set_Visible(acc,1,(MethodInfo *)0x0);
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)acc,(MethodInfo *)0x0);
                  if (pGVar7 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                              (pGVar7,
                               FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                              );
                    return 1;
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
  func_?(0);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  bVar2 = (*pcVar9)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_Destroy
               (BodyAccessoriesController *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  KStack_6.key = 0;
  KStack_6.value = 0;
  func_?();
  this_00 = (this->fields).accessoryLoader;
  pLStack_7 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (this_00 != (AccessoryLoader *)0x0) {
    pLStack_7 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              (this_00,(MethodInfo *)0x0);
  }
  this_01 = (this->fields).accessoryMap;
  (this->fields).accessoryLoader = (AccessoryLoader *)0x0;
  if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    auStack_10._0_4_ = pDVar8->dictionary;
    auStack_10._4_4_ = pDVar8->next;
    auStack_10._8_4_ = pDVar8->stamp;
    auStack_10._12_4_ = (pDVar8->current).key;
    auStack_10._16_4_ = (pDVar8->current).value;
    iStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_6 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                            );
      DStack_9.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_6;
      DStack_9.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
      ;
      this_02 = (Component_1 *)func_?();
      if (this_02 == (Component_1 *)0x0) {
        func_?();
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    pLStack_7->klass = (Link__Array__Class *)0x72;
    iStack_1 = -1;
    func_?();
    (this->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0;
    (this->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  *unaff_FS_OFFSET = pOStack_3;
  return;
}


/* Void DestroyAccessory(AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_DestroyAccessory
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryMap;
  if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    this_00 = (AvatarAccessory *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              AccessorySlotType,System::Object]::
              Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                        ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar1,slot,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                        );
    if (this_00 != (AvatarAccessory *)0x0) {
      this_01 = AvatarAccessory::AvatarAccessory_get_Transform(this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_01,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar1 = (this->fields).accessoryMap;
        if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
          AccessorySlotType,System::Object]::
          Dictionary_2_MV_Common_AccessorySlotType_System_Object__Remove
                    ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar1,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                    );
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
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


/* Single GetOffset(AccessorySlotType) */

float Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetOffset
                (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlot,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).accessoryData;
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)accessorySlot;
  key = (Type *)func_?(&pDStack_1,0);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?(0);
  }
  else {
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar3->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar5) {
        this_02 = pDVar3;
      }
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)&this;
    this = (BodyAccessoriesController *)0x3;
    unaff_EDI = in_stack_6;
    this_01 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData);
    if (this_01 == (Enum *)0x0) goto code_?;
    key_00 = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
    if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_02,(Type *)key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pPVar7);
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?(pPVar7);
      return *pfVar8;
    }
  }
  func_?(uVar2);
  pDVar3 = extraout_EDX;
code_?:
  pDStack_1 = unaff_EDI;
  func_?(pDVar3);
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* Single GetScale(AccessorySlotType) */

float Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetScale
                (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlot,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).accessoryData;
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)accessorySlot;
  key = (Type *)func_?(&pDStack_1,0);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?(0);
  }
  else {
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar3->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar5) {
        this_02 = pDVar3;
      }
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)&this;
    this = (BodyAccessoriesController *)0x5;
    unaff_EDI = in_stack_6;
    this_01 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData);
    if (this_01 == (Enum *)0x0) goto code_?;
    key_00 = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
    if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_02,(Type *)key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pPVar7);
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?(pPVar7);
      return *pfVar8;
    }
  }
  func_?(uVar2);
  pDVar3 = extraout_EDX;
code_?:
  pDStack_1 = unaff_EDI;
  func_?(pDVar3);
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* Vector3 GetSlotPosition(AccessorySlotType, Vector3) */

Vector3 * Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetSlotPosition
                    (Vector3 *__return_storage_ptr__,BodyAccessoriesController *this,
                    AccessorySlotType__Enum slot,Vector3 offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BodyAccessoriesController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BodyAccessoriesController->_1).cctor_started == 0)) {
    func_?(TypeInfo__BodyAccessoriesController);
  }
  AVar1 = slot;
  this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
  if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    pSVar2 = (String *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              AccessorySlotType,System::Object]::
              Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                        ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)this_00,slot,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                        );
    this_01 = (this->fields).bodyData;
    if (this_01 != (BodyData *)0x0) {
      this_02 = BodyData::BodyData_GetPartBone_1(this_01,pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        slot = AVar1;
        arg1 = (Object *)func_?(TypeInfo__MV__Common__AccessorySlotType,&slot);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar2 = mscorlib.dll::System::String::String_Format_1
                            (StringLiteral_Accessory__Failed_to_get_bone__0,(Object *)pSVar2,arg1,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
      }
      if (this_02 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
        uVar5 = pVVar4->x;
        uVar6 = pVVar4->y;
        fVar7 = pVVar4->z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xffffffdc,this_02,(MethodInfo *)0x0);
        fVar8 = pVVar4->x;
        fVar9 = pVVar4->y;
        fVar10 = pVVar4->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_01.y = fVar9;
        a_01.x = fVar8;
        a_01.z = fVar10;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffdc,a_01,offset.x,(MethodInfo *)0x0);
        a_02.y = (float)uVar6;
        a_02.x = (float)uVar5;
        a_02.z = fVar7;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffdc,a_02,*pVVar4,(MethodInfo *)0x0);
        uVar11 = pVVar4->x;
        uVar12 = pVVar4->y;
        fVar8 = pVVar4->z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&stack0xffffffdc,this_02,(MethodInfo *)0x0);
        fVar9 = offset.y;
        uVar13 = pVVar4->x;
        puStack14 = (undefined *)pVVar4->z;
        offset.y = (float)&stack0xffffffdc;
        offset.x = (float)&UNK_?;
        offset.z = (float)uVar13;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)offset.y,*pVVar4,fVar9,(MethodInfo *)0x0);
        a.y = (float)uVar12;
        a.x = (float)uVar11;
        a.z = fVar8;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffdc,a,*pVVar4,(MethodInfo *)0x0);
        uVar15 = pVVar4->x;
        uVar16 = pVVar4->y;
        fVar8 = pVVar4->z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffdc,this_02,(MethodInfo *)0x0);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffdc,*pVVar4,offset.z,(MethodInfo *)0x0);
        a_00.y = (float)uVar16;
        a_00.x = (float)uVar15;
        a_00.z = fVar8;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffdc,a_00,*pVVar4,(MethodInfo *)0x0);
        fVar9 = pVVar4->y;
        fVar8 = pVVar4->z;
        __return_storage_ptr__->x = pVVar4->x;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar8;
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar17)();
  return pVVar4;
}


/* Transform GetSlotTransform(AccessorySlotType) */

Transform *
Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetSlotTransform
          (BodyAccessoriesController *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyData;
  if ((((uint)(TypeInfo__BodyAccessoriesController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BodyAccessoriesController->_1).cctor_started == 0)) {
    func_?(TypeInfo__BodyAccessoriesController);
  }
  this_01 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
  if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    part = (String *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
           AccessorySlotType,System::Object]::
           Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                     ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)this_01,slot,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                     );
    if (this_00 != (BodyData *)0x0) {
      pTVar1 = BodyData::BodyData_GetPartBone_1(this_00,part,(MethodInfo *)0x0);
      return pTVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar1 = (Transform *)(*pcVar2)();
  return pTVar1;
}


/* Boolean IsAccessoryEquipped(Int32) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
               (BodyAccessoriesController *this,int32_t streamingAssetId,MethodInfo *method)

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
  bStack_6 = 0;
  uStack_7 = 0;
  iStack_8 = 0;
  KStack_9.key = 0;
  KStack_9.value = 0;
  func_?();
  uStack_10 = 0xffffffff;
  this_00 = (this->fields).accessoryData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puStack_11 = &stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_13._0_4_ = pDVar12->dictionary;
    auStack_13._4_4_ = pDVar12->next;
    auStack_13._8_4_ = pDVar12->stamp;
    auStack_13._12_4_ = (pDVar12->current).key;
    auStack_13._16_4_ = (pDVar12->current).value;
    uStack_1 = 0;
    do {
      cVar14 = func_?();
      if (cVar14 == '\0') goto code_?;
      KStack_9 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_13,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      func_?();
      this_01 = (Dictionary_2_System_Type_Pool_ *)func_?();
      this_02 = (Enum *)func_?();
      if (this_02 == (Enum *)0x0) {
code_?:
        auStack_13._4_4_ = &UNK_?;
        func_?();
        goto code_?;
      }
      key = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0);
      if ((this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pDVar15 = (Dictionary_2_System_Int32_System_Int32_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_01,(Type *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pDVar15 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
code_?:
        auStack_13._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
        goto code_?;
      }
      if ((pDVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
        auStack_13._8_4_ = TypeInfo__System__Int32;
        auStack_13._0_4_ = &UNK_?;
        auStack_13._4_4_ = pDVar15;
        func_?();
        goto code_?;
      }
      auStack_13._4_4_ = &UNK_?;
      auStack_13._8_4_ = pDVar15;
      piVar16 = (int *)func_?();
    } while (*piVar16 != streamingAssetId);
    bStack_6 = 1;
code_?:
    uStack_1 = 0xffffffff;
    puVar17 = &UNK_?;
    func_?();
    if (iStack_8 != 0) {
code_?:
      func_?();
      pcVar18 = (code *)swi(3);
      bVar19 = (*pcVar18)();
      return bVar19;
    }
    if (puVar17 == (undefined *)0x7f) {
      *unaff_FS_OFFSET = uStack_3;
      return bStack_6;
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Boolean IsAccessoryInWoData(AvatarAccessory) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
               (BodyAccessoriesController *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  DStack_2.fields.generation = (int32_t)&DAT_?;
  DStack_2.fields.serialization_info = (SerializationInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &DStack_2.fields.serialization_info;
  DStack_2.fields.hcp = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffffa4;
  pIVar3 = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar3 = DStack_2.fields.hcp;
  }
  DStack_2.fields.hcp = pIVar3;
  DStack_2.fields.keySlots = (WinningConditionType__Enum__Array *)0x0;
  DStack_2.fields.threshold._3_1_ = 0;
  DStack_2.fields.threshold._2_1_ = 0;
  DStack_2.fields.emptySlot = 0;
  DStack_2.klass = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  DStack_2.monitor = (MonitorData *)0x0;
  DStack_2.fields.table = (Int32__Array *)0x0;
  DStack_2.fields.linkSlots = (Link__Array *)0x0;
  func_?();
  DStack_2.fields.touchedSlots = -1;
  this_00 = (this->fields).accessoryData;
  DStack_2.fields.count = (int32_t)&stack0xffffffa4;
  DStack_2.fields.hcp = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffffa4;
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (DStack_2.fields.count = (int32_t)&stack0xffffffa4,
     DStack_2.fields.hcp = (IEqualityComparer_1_WinningConditionType_ *)&stack0xffffffa4,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Values__
                         ),
     this_01 == (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
code_?:
    func_?(0);
    DStack_4.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)extraout_EDX;
code_?:
    DStack_4.host_enumerator.next = (int32_t)unaff_EDI;
    func_?();
  }
  else {
    pDVar5 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_4,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Object,_System::Object>__GetEnumerator__
                       );
    DStack_2.klass =
         (Dictionary_2_WinningConditionType_System_Object___Class *)
         (pDVar5->host_enumerator).dictionary;
    DStack_2.monitor = (MonitorData *)(pDVar5->host_enumerator).next;
    DStack_2.fields.table = (Int32__Array *)(pDVar5->host_enumerator).stamp;
    DStack_2.fields.linkSlots = (Link__Array *)(pDVar5->host_enumerator).current.key;
    DStack_2.fields.keySlots =
         (WinningConditionType__Enum__Array *)(pDVar5->host_enumerator).current.value;
    uStack_1 = 0;
    do {
      DStack_4.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
      ;
      DStack_4.host_enumerator.dictionary = &DStack_2;
      cVar6 = func_?();
      piVar7 = (int *)DStack_2.fields.count;
      if (cVar6 == '\0') {
        *(int *)DStack_2.fields.count = 0x76;
        goto code_?;
      }
      DStack_4.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
      ;
      DStack_4.host_enumerator.dictionary = &DStack_2;
      DStack_4.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if ((Dictionary_2_System_Type_Pool_ *)DStack_4.host_enumerator.dictionary ==
          (Dictionary_2_System_Type_Pool_ *)0x0) {
        this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
      }
      else {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_Type_Pool_ *)DStack_4.host_enumerator.dictionary)->klass->_1).
             naturalAligment < bVar8) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Dictionary_2_System_Type_Pool_ *)DStack_4.host_enumerator.dictionary)->klass->_1).
            typeHierarchy[bVar8 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar9) {
          this_03 = (Dictionary_2_System_Type_Pool_ *)DStack_4.host_enumerator.dictionary;
        }
        if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      DStack_4.host_enumerator.next = (int32_t)&this;
      this = (BodyAccessoriesController *)0x4;
      DStack_4.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)
           TypeInfo__MV__Common__AvatarAccessoryData;
      this_02 = (Enum *)func_?();
      if ((this_02 == (Enum *)0x0) ||
         (pSVar10 = mscorlib.dll::System::Enum::Enum_ToString_2
                             (this_02,StringLiteral_d,in_stack_11),
         this_03 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
      in_stack_11 = (MethodInfo *)&UNK_?;
      pPVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_03,(Type *)pSVar10,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      a = (Pool *)0x0;
      if (pPVar12 != (Pool *)0x0) {
        if ((String__Class *)pPVar12->klass == TypeInfo__System__String) {
          a = pPVar12;
        }
        if (a == (Pool *)0x0) {
          func_?(pPVar12,TypeInfo__System__String);
          goto code_?;
        }
      }
      if (avatarAccessory == (AvatarAccessory *)0x0) goto code_?;
      pSVar10 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          avatarAccessory,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar13 = mscorlib.dll::System::String::String_op_Equality((String *)a,pSVar10,(MethodInfo *)0x0)
      ;
      piVar7 = (int *)DStack_2.fields.count;
    } while (bVar13 == 0);
    DStack_2.fields.threshold._3_1_ = 1;
    *(int *)DStack_2.fields.count = 0x78;
code_?:
    uStack_1 = 0xffffffff;
    DStack_4.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
    ;
    DStack_4.host_enumerator.dictionary = &DStack_2;
    func_?();
    if (DStack_2.fields.emptySlot == 0) {
      if (*piVar7 == 0x78) {
        *unaff_FS_OFFSET = DStack_2.fields.serialization_info;
        return DStack_2.fields.threshold._3_1_;
      }
      *unaff_FS_OFFSET = DStack_2.fields.serialization_info;
      return 0;
    }
  }
  DStack_4.host_enumerator.next = 0;
  DStack_4.host_enumerator.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  func_?();
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* Boolean IsAccessorySlotOccupied(AccessorySlotType) */

bool Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_IsAccessorySlotOccupied
               (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlotType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).accessoryData;
  AStack_1 = accessorySlotType;
  key = (String *)func_?(&AStack_1,0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void LoadedAccessoryCallback(AvatarAccessory, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_LoadedAccessoryCallback
               (BodyAccessoriesController *this,AvatarAccessory *accessory,
               AccessorySlotType__Enum slot,MethodInfo *method)

{
  acc = accessory;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)accessory,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Failed_to_load_accessory_,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).accessoryData;
  pTVar2 = (Type *)func_?(&stack0xfffffff8,0);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    pAVar3 = extraout_ECX;
    pSVar4 = extraout_EDX;
  }
  else {
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar5->klass->_1).naturalAligment < bVar6) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar7) {
        this_01 = pDVar5;
      }
      if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pEVar8 = (Enum *)func_?();
    if ((pEVar8 == (Enum *)0x0) ||
       (pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar8,StringLiteral_d,(MethodInfo *)0x0),
       this_01 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
    pAVar3 = (AvatarAccessory *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (this_01,(Type *)pSVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    accessory = pAVar3;
    if (pAVar3 == (AvatarAccessory *)0x0) {
code_?:
      if ((acc == (AvatarAccessory *)0x0) ||
         (pSVar9 = (String *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)acc,
                              (MethodInfo *)0x0), pSVar9 == (String *)0x0)) goto code_?;
      bVar1 = mscorlib.dll::System::String::String_Contains
                        (pSVar9,(String *)accessory,(MethodInfo *)0x0);
      if (bVar1 == 0) goto code_?;
      pEVar8 = (Enum *)func_?();
      if (pEVar8 != (Enum *)0x0) {
        pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar8,StringLiteral_d,(MethodInfo *)0x0);
        pPVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_01,(Type *)pSVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pPVar10 != (Pool *)0x0) {
          if ((pPVar10->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar11 = (float *)func_?(pPVar10);
            offset = *pfVar11;
            pEVar8 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,
                                             &stack0xfffffff0);
            if (pEVar8 != (Enum *)0x0) {
              pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2
                                 (pEVar8,StringLiteral_d,(MethodInfo *)0x0);
              pPVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                        ::Dictionary_2_System_Type_Pool__get_Item
                                  (this_01,(Type *)pSVar9,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              if (pPVar10 != (Pool *)0x0) {
                if ((pPVar10->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar11 = (float *)func_?(pPVar10);
                bVar1 = BodyAccessoriesController_AttachAccessory
                                  (this,acc,slot,offset,*pfVar11,(MethodInfo *)0x0);
                if (bVar1 == 0) goto code_?;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((this->fields).accessoryMoveOverride == 0) {
code_?:
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  MVar12 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                     ((MethodInfo *)0x0);
                  if (MVar12 != MVGameMode__Enum_CharacterEditor) goto code_?;
                  pTVar2 = mscorlib.dll::System::Object::Object_GetType
                                     ((Object *)acc,(MethodInfo *)0x0);
                  pIVar13 = TypeRef__AvatarAccessoryHat;
                  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pTVar14 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                      ((RuntimeTypeHandle)pIVar13,(MethodInfo *)0x0);
                  if (pTVar2 == pTVar14) goto code_?;
                }
                else {
                  pTVar2 = mscorlib.dll::System::Object::Object_GetType
                                     ((Object *)acc,(MethodInfo *)0x0);
                  pIVar13 = TypeRef__AvatarAccessoryHat;
                  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pTVar14 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                      ((RuntimeTypeHandle)pIVar13,(MethodInfo *)0x0);
                  if (pTVar2 != pTVar14) {
                    if ((this->fields).accessoryMoveOverride != 0) {
                      accessory = (AvatarAccessory *)
                                  mscorlib.dll::System::Object::Object_GetType
                                            ((Object *)acc,(MethodInfo *)0x0);
                      pIVar13 = TypeRef__AvatarAccessoryBackAccessories;
                      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) !=
                           0) && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                        slot = (AccessorySlotType__Enum)TypeInfo__System__Type;
                        accessory = (AvatarAccessory *)&UNK_?;
                        func_?();
                      }
                      pAVar3 = (AvatarAccessory *)
                                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                          ((RuntimeTypeHandle)pIVar13,(MethodInfo *)0x0);
                      if (accessory == pAVar3) goto code_?;
                    }
                    goto code_?;
                  }
                }
code_?:
                if ((this->fields).accessoryMoveOverride != 0) {
                  BodyAccessoriesController_MakeAccessorySelectable(this,acc,slot,(MethodInfo *)0x0)
                  ;
                }
code_?:
                BodyAccessoriesController_UpdateAccessoryVisibility
                          (this,(this->fields).accessoriesVisible,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
code_?:
            func_?(pPVar10,TypeInfo__System__Single);
          }
        }
      }
      goto code_?;
    }
    accessory = (AvatarAccessory *)0x0;
    if ((String__Class *)pAVar3->klass == TypeInfo__System__String) {
      accessory = pAVar3;
    }
    pSVar4 = TypeInfo__System__String;
    if (accessory != (AvatarAccessory *)0x0) goto code_?;
  }
  func_?(pAVar3,pSVar4);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void MakeAccessorySelectable(AvatarAccessory, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_MakeAccessorySelectable
               (BodyAccessoriesController *this,AvatarAccessory *accessory,
               AccessorySlotType__Enum accessorySlot,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  KStack_6.key = 0;
  KStack_6.value = 0;
  func_?();
  iStack_7 = -1;
  this_00 = (this->fields).accessoryData;
  pTStack_8 = (Transform *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pTStack_8 = (Transform *)&stack0xffffff80;
    puStack_4 = &stack0xffffff80;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
               &stack0xffffffa0,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar9 = func_?(), cVar9 != '\0') {
      KStack_6 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff8c,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      pDVar10 = (Dictionary_2_System_Type_Pool_ *)func_?();
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar10 == (Dictionary_2_System_Type_Pool_ *)0x0) {
        this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
      }
      else {
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar10->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar12) {
          this_03 = pDVar10;
        }
        if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      ppUStack_13 = (UseInteratorVisualization **)0x2;
      pEVar14 = (Enum *)func_?();
      if (((pEVar14 == (Enum *)0x0) ||
          (pSVar15 = mscorlib.dll::System::Enum::Enum_ToString_2
                              (pEVar14,StringLiteral_d,(MethodInfo *)0x0),
          this_03 == (Dictionary_2_System_Type_Pool_ *)0x0)) ||
         (pIVar16 = (Int32__Class *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,(Type *)pSVar15,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pIVar16 == (Int32__Class *)0x0)) goto code_?;
      if ((Il2CppClass *)((pIVar16->_0).image)->codeGenModule !=
          (TypeInfo__MV__Common__AccessorySlotType->_0).element_class) {
        QStack_17.z = (float)TypeInfo__MV__Common__AccessorySlotType;
        QStack_17.x = (float)&UNK_?;
        QStack_17.y = (float)pIVar16;
        func_?();
        goto code_?;
      }
      QStack_17.y = (float)&UNK_?;
      QStack_17.z = (float)pIVar16;
      pAVar18 = (AccessorySlotType__Enum *)func_?();
      if (accessorySlot == *pAVar18) {
        pUStack_19 = (UseInteratorVisualization *)0x1;
        pEVar14 = (Enum *)func_?();
        if (pEVar14 == (Enum *)0x0) goto code_?;
        pSVar15 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar14,StringLiteral_d,(MethodInfo *)0x0);
        QStack_17.y = (float)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                       (this_03,(Type *)pSVar15,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
        QStack_17.z = (float)TypeInfo__System__Int32;
        QStack_17.x = (float)&UNK_?;
        piVar20 = (int32_t *)func_?();
        iStack_7 = *piVar20;
      }
    }
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    pTStack_8->klass = (Transform__Class *)0x8f;
    uStack_1 = 0xffffffff;
    func_?();
  }
  if (((accessory != (AvatarAccessory *)0x0) &&
      (pTVar21 = AvatarAccessory::AvatarAccessory_get_Transform(accessory,(MethodInfo *)0x0),
      pTVar21 != (Transform *)0x0)) &&
     (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pTVar21,(MethodInfo *)0x0), pGVar22 != (GameObject *)0x0))
  {
    pUStack_23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (pGVar22,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pUStack_23 != (UseInteratorVisualization__Array *)0x0) {
      ppUStack_13 = pUStack_23->vector;
      while( true ) {
        if ((int)pUStack_23->max_length <= (int)unaff_EDI) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((Dictionary_2_System_Object_System_Object___Class *)pUStack_23->max_length <= unaff_EDI)
        break;
        pUStack_19 = *ppUStack_13;
        pGVar22 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar22,StringLiteral_SelectionHelper,(MethodInfo *)0x0);
        if ((pGVar22 == (GameObject *)0x0) ||
           (pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar22,in_stack_24),
           pUStack_19 == (UseInteratorVisualization *)0x0)) goto code_?;
        in_stack_24 = (MethodInfo *)&UNK_?;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pUStack_19,in_stack_25);
        if (this_01 == (GameObject *)0x0) goto code_?;
        in_stack_25 = (MethodInfo *)&UNK_?;
        pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,in_stack_26);
        if (pTStack_8 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTStack_8,pTVar21,in_stack_27);
        in_stack_27 = (MethodInfo *)0x0;
        in_stack_26 = (MethodInfo *)&UNK_?;
        pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar22,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                            (&VStack_29,(MethodInfo *)0x0);
        if (pTStack_8 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTStack_8,*pVVar28,in_stack_30);
        in_stack_30 = (MethodInfo *)0x0;
        pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar22,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                            (&QStack_17,(MethodInfo *)0x0);
        if (pTStack_8 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTStack_8,*pQVar31,in_stack_32);
        pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar22,(MethodInfo *)0x0);
        in_stack_32 = (MethodInfo *)0x0;
        pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            (&VStack_33,(MethodInfo *)0x0);
        if (pTStack_8 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTStack_8,*pVVar28,in_stack_34);
        pTStack_8 = (Transform *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                               (pGVar22,
                                UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                               );
        in_stack_34 = (MethodInfo *)0x0;
        value = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                          ((MeshFilter *)pUStack_19,(MethodInfo *)0x0);
        if (pTStack_8 == (Transform *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::MeshCollider::MeshCollider_set_sharedMesh
                  ((MeshCollider *)pTStack_8,value,in_stack_35);
        value_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Hidden,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar22,value_00,(MethodInfo *)0x0);
        in_stack_35 =
             SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
        ;
        this_02 = (SelectionHelperAvatarAccessory *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            (pGVar22,
                             SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
                            );
        if (this_02 == (SelectionHelperAvatarAccessory *)0x0) goto code_?;
        SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
                  (this_02,accessory,accessorySlot,(this->fields).bodyWoId,iStack_7,
                   (MethodInfo *)0x0);
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                    ((int)&(unaff_EDI->_0).image + 1);
        ppUStack_13 = ppUStack_13 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?(unaff_EDI,0,0);
code_?:
  func_?();
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void RefreshAccessories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
               (BodyAccessoriesController *this,
               Dictionary_2_System_Object_System_Object_ *accessoryData,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff5c;
  puVar5 = &stack0xffffff5c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  iStack_8 = 0;
  auStack_9._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  pIStack_10 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
  pSStack_11 = (SerializationInfo *)0x0;
  iStack_12 = 0;
  auStack_9._16_4_ = (Object *)0x0;
  MStack_13._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0x0;
  KStack_14.key = 0;
  KStack_14.value = 0;
  auStack_9._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_9._4_4_ = (Object__Array *)0x0;
  auStack_9._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_9._12_4_ = 0;
  func_?();
  (this->fields).accessoryData = accessoryData;
  pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)0xffffffff;
  piStack_16 = (int *)&stack0xffffff5c;
  puStack_4 = &stack0xffffff5c;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  pDVar17 = (this->fields).accessoryMap;
  pLStack_18 = this_01;
  if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
  goto code_?;
  pDVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &stack0xffffff68,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar17,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                     );
  auStack_9._20_4_ = pDVar19->dictionary;
  pIStack_10 = (IEqualityComparer_1_WinningConditionType_ *)pDVar19->next;
  pSStack_11 = (SerializationInfo *)pDVar19->stamp;
  iStack_12 = (pDVar19->current).key;
  pOStack_6 = (pDVar19->current).value;
  uStack_1 = 0;
  while (cVar20 = func_?(), cVar20 != '\0') {
    KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)(auStack_9 + 0x14),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                          );
    in_stack_21 =
         MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
    ;
    pAVar22 = (AvatarAccessory *)func_?();
    bVar23 = BodyAccessoriesController_IsAccessoryInWoData(this,pAVar22,(MethodInfo *)0x0);
    if (bVar23 == 0) {
      item = func_?();
      if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,item,
                 MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                );
    }
  }
  accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  *piStack_16 = 100;
  uStack_1 = 0xffffffff;
  pMVar24 = 
  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
  ;
  func_?();
  iVar25 = iStack_8;
  if (iStack_8 == 0) {
    if (*piStack_16 == 100) {
      accessoryData = (Dictionary_2_System_Object_System_Object_ *)0xffffffff;
      pDStack_15 = accessoryData;
    }
    if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) {
code_?:
      iVar25 = func_?();
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff6c,
               (List_1_UnityEngine_Color32_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
              );
    uStack_1 = 2;
    while( true ) {
      auStack_9._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
      ;
      auStack_9._0_4_ = &stack0xffffff88;
      cVar20 = func_?();
      if (cVar20 == '\0') break;
      pLStack_18 = (List_1_UnityEngine_Vector4_ *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &stack0xffffff88,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                             );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar17 = (this->fields).accessoryMap;
      if (((pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
          (pAVar22 = (AvatarAccessory *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AccessorySlotType,System::Object]::
                    Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                               (AccessorySlotType__Enum)pLStack_18,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                              ), pAVar22 == (AvatarAccessory *)0x0)) ||
         (pMVar24 = (MethodInfo *)AvatarAccessory::AvatarAccessory_get_Transform(pAVar22,pMVar24),
         pMVar24 == (MethodInfo *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                ((Transform *)pMVar24,(Transform *)0x0,in_stack_21);
      pDVar17 = (this->fields).accessoryMap;
      if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
      goto code_?;
      in_stack_21 = (MethodInfo *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System
      ::Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Remove
                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                 (AccessorySlotType__Enum)pLStack_18,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                );
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pAVar22,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    pDVar26 = (Dictionary_2_System_Object_System_Object_ *)((int)&accessoryData->klass + 1);
    piStack_16[(int)pDVar26] = 0x9f;
    uStack_1 = 0xffffffff;
    func_?(&stack0xffffff88,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   );
    iVar25 = iStack_8;
    if (iStack_8 == 0) {
      if (((pDVar26 != (Dictionary_2_System_Object_System_Object_ *)0xffffffff) &&
          (piStack_16[(int)pDVar26] == 0x9f)) && (-1 < (int)pDVar26)) {
        pDVar26 = accessoryData;
      }
      accessoryData = pDVar26;
      pDVar26 = (this->fields).accessoryData;
      if (pDVar26 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar19 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff68,
                            (Dictionary_2_WinningConditionType_System_Object_ *)pDVar26,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        auStack_9._0_4_ = pDVar19->dictionary;
        auStack_9._4_4_ = pDVar19->next;
        auStack_9._8_4_ = pDVar19->stamp;
        auStack_9._12_4_ = (pDVar19->current).key;
        auStack_9._16_4_ = (pDVar19->current).value;
        uStack_1 = 4;
        while (cVar20 = func_?(), iVar25 = iStack_8, cVar20 != '\0') {
          KStack_14 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_9,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          pSVar27 = (String *)func_?();
          pSVar28 = (String *)0x0;
          if (pSVar27 != (String *)0x0) {
            if (pSVar27->klass == TypeInfo__System__String) {
              pSVar28 = pSVar27;
            }
            if (pSVar28 == (String *)0x0) goto code_?;
          }
          pMVar24 = (MethodInfo *)0x0;
          MStack_13._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0xffffffff;
          bVar23 = mscorlib.dll::System::Int32::Int32_TryParse
                            (pSVar28,(int32_t *)&MStack_13,(MethodInfo *)0x0);
          if (bVar23 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          else {
            this_02 = (ScaleAnimationBase *)func_?();
            ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar24);
            if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
            (this_02->fields).state = (int32_t)this;
            (this_02->fields)._._._._.m_CachedPtr = (void *)MStack_13._._._.m_CachedPtr;
            func_?();
            this_03 = (Dictionary_2_System_Type_Pool_ *)func_?();
            pLStack_18 = (List_1_UnityEngine_Vector4_ *)0x4;
            pEVar29 = (Enum *)func_?();
            if ((pEVar29 == (Enum *)0x0) ||
               (pMVar24 = (MethodInfo *)StringLiteral_d,
               pSVar28 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   (pEVar29,StringLiteral_d,(MethodInfo *)0x0),
               this_03 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (this_03,(Type *)pSVar28,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            pDVar17 = (this->fields).accessoryMap;
            if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
            goto code_?;
            bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AccessorySlotType,System::Object]::
                    Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                               (AccessorySlotType__Enum)(this_02->fields)._._._._.m_CachedPtr,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar23 == 0) {
code_?:
              this_00 = (this->fields).accessoryLoader;
              pAStack_30 = (Action_1_AvatarAccessory_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)pAStack_30,(Object *)this_02,
                         MethodInfo__BodyAccessoriesController___RefreshAccessories_c__AnonStorey0____m__0_AvatarAccessory_
                         ,MethodInfo__System__Action<AvatarAccessory>__Action_System__Object__void__
                        );
              if (this_00 == (AccessoryLoader *)0x0) goto code_?;
              Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
              AccessoryLoader_LoadAccessory
                        (this_00,(String *)pDStack_15,pAStack_30,(MethodInfo *)0x0);
            }
            else {
              pDVar17 = (this->fields).accessoryMap;
              if ((pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                 (pCVar31 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                            AccessorySlotType,System::Object]::
                            Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                      ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                       pDVar17,(AccessorySlotType__Enum)
                                              (this_02->fields)._._._._.m_CachedPtr,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ),
                 pCVar31 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
              goto code_?;
              pAStack_30 = (Action_1_AvatarAccessory_ *)
                           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     (pCVar31,(MethodInfo *)in_stack_32);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              in_stack_32 = pAStack_30;
              bVar23 = mscorlib.dll::System::String::String_op_Inequality
                                ((String *)pAStack_30,(String *)pDStack_15,(MethodInfo *)0x0);
              if (bVar23 != 0) goto code_?;
              pDVar17 = (this->fields).accessoryMap;
              if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
              goto code_?;
              bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      AccessorySlotType,System::Object]::
                      Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                                 (AccessorySlotType__Enum)(this_02->fields)._._._._.m_CachedPtr,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                                );
              if (bVar23 != 0) {
                pDVar17 = (this->fields).accessoryMap;
                if ((pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                   (pCVar31 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                              AccessorySlotType,System::Object]::
                              Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                        ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                         pDVar17,(AccessorySlotType__Enum)
                                                (this_02->fields)._._._._.m_CachedPtr,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                        ),
                   pCVar31 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
                goto code_?;
                pAStack_30 = (Action_1_AvatarAccessory_ *)
                             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                             ::Json::Serialization::JsonProperty]::
                             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                       (pCVar31,pMVar24);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar23 = mscorlib.dll::System::String::String_op_Equality
                                  ((String *)pAStack_30,(String *)pDStack_15,(MethodInfo *)0x0);
                if (bVar23 != 0) {
                  pAStack_30 = (Action_1_AvatarAccessory_ *)0x3;
                  pEVar29 = (Enum *)func_?();
                  if (pEVar29 == (Enum *)0x0) goto code_?;
                  pSVar28 = mscorlib.dll::System::Enum::Enum_ToString_2
                                      (pEVar29,StringLiteral_d,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_03,(Type *)pSVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
                  pfVar33 = (float *)func_?();
                  BodyAccessoriesController_ApplyAccessoryOffset
                            (this,*pfVar33,
                             (AccessorySlotType__Enum)(this_02->fields)._._._._.m_CachedPtr,
                             (MethodInfo *)0x0);
                  uStack_34 = 5;
                  pEVar29 = (Enum *)func_?();
                  if (pEVar29 == (Enum *)0x0) goto code_?;
                  pSVar28 = mscorlib.dll::System::Enum::Enum_ToString_2
                                      (pEVar29,StringLiteral_d,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_03,(Type *)pSVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
                  pfVar33 = (float *)func_?();
                  BodyAccessoriesController_ApplySizeChange
                            (this,*pfVar33,
                             (AccessorySlotType__Enum)(this_02->fields)._._._._.m_CachedPtr,
                             (MethodInfo *)0x0);
                }
              }
            }
          }
        }
        piStack_16[(int)((int)&accessoryData->klass + 1)] = 0x238;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar25 == 0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    iVar25 = func_?(iVar25);
  }
  func_?(iVar25);
  pSVar27 = extraout_ECX;
code_?:
  func_?(pSVar27);
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void UpdateAccessoryVisibility(Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_UpdateAccessoryVisibility
               (BodyAccessoriesController *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  this_00 = (this->fields).accessoryMap;
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_13,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    pDStack_7 = (pDVar12->host_enumerator).dictionary;
    iStack_8 = (pDVar12->host_enumerator).next;
    iStack_9 = (pDVar12->host_enumerator).stamp;
    iStack_10 = (pDVar12->host_enumerator).current.key;
    pOStack_6 = (pDVar12->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      cVar14 = func_?();
      if (cVar14 == '\0') {
        *puStack_11 = 0x44;
        uStack_1 = 0xffffffff;
        func_?();
        (this->fields).accessoriesVisible = visible;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_02 = (AvatarAccessory *)func_?();
      if (this_02 == (AvatarAccessory *)0x0) break;
      AvatarAccessory::AvatarAccessory_set_Visible(this_02,visible,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateOffset(AccessorySlotType, Single) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_UpdateOffset
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,float offset,
               MethodInfo *method)

{
  BodyAccessoriesController_ApplyAccessoryOffset(this,offset,slot,(MethodInfo *)0x0);
  return;
}


/* Void UpdateScale(AccessorySlotType, Single) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_UpdateScale
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,float scale,
               MethodInfo *method)

{
  BodyAccessoriesController_ApplySizeChange(this,scale,slot,(MethodInfo *)0x0);
  return;
}


/* BodyAccessoriesController() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Dictionary__
            );
  if (this != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System::
    Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Add
              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)this,
               AccessorySlotType__Enum_Torso,(Object *)StringLiteral_Torso,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System::
    Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Add
              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)this,
               AccessorySlotType__Enum_Head,(Object *)StringLiteral_Head,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System::
    Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Add
              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)this,
               AccessorySlotType__Enum_Back,(Object *)StringLiteral_Torso,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap = this;
    this_00 = (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Dictionary__
              );
    fVar1 = 0.0;
    uVar2 = 0;
    func_?();
    if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
      VVar3.z = fVar1;
      VVar3.x = (float)(int)uVar2;
      VVar3.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
      AccessorySlotType,UnityEngine::Vector3]::
      Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3__Add
                (this_00,AccessorySlotType__Enum_Head,VVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      fVar1 = 0.0;
      uVar4 = 0;
      uVar5 = 0;
      func_?();
      value.y = (float)uVar4;
      value.x = (float)uVar5;
      value.z = fVar1;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
      AccessorySlotType,UnityEngine::Vector3]::
      Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3__Add
                (this_00,AccessorySlotType__Enum_Torso,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      method = (MethodInfo *)0x0;
      uVar2 = 0;
      func_?();
      fVar6 = (float)uVar2;
      fVar7 = (float)(int)((ulonglong)uVar2 >> 0x20);
      VVar3 = (Vector3)CONCAT84(uVar8,fVar6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
      AccessorySlotType,UnityEngine::Vector3]::
      Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3__Add
                (this_00,AccessorySlotType__Enum_Back,VVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset = this_00;
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* BodyAccessoriesController(Int32, BodyData, Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController__ctor
               (BodyAccessoriesController *this,int32_t bodyWoId,BodyData *bodyData,
               Dictionary_2_System_Object_System_Object_ *accessoryData,bool isVisible,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
            );
  (this->fields).accessoryMap = this_00;
  method_00 = TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader;
  this_01 = (AccessoryLoader *)func_?();
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields).accessoryLoader = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).bodyWoId = bodyWoId;
  (this->fields).bodyData = bodyData;
  (this->fields).accessoryData = accessoryData;
  (this->fields).accessoriesVisible = isVisible;
  return;
}


/* Void set_AccessoryMoveOverride(Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_set_AccessoryMoveOverride
               (BodyAccessoriesController *this,bool value,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  (this->fields).accessoryMoveOverride = value;
  if (value == 0) {
    this_00 = (this->fields).bodyData;
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if ((this_00 != (BodyData *)0x0) &&
       (pLStack_8 = (Link__Array *)&stack0xffffffa8,
       pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8,
       pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar9 != (GameObject *)0x0))
    {
      pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_20
                         (pGVar9,1,
                          SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                         );
      uVar11 = 0;
      if (pCVar10 != (CFX_LightIntensityFade__Array *)0x0) {
        ppCVar12 = pCVar10->vector;
        for (; (int)uVar11 < (int)pCVar10->max_length; uVar11 = uVar11 + 1) {
          if (pCVar10->max_length <= uVar11) {
            uVar13 = func_?(0);
            func_?(uVar13);
            goto code_?;
          }
          if (*ppCVar12 == (CFX_LightIntensityFade *)0x0) goto code_?;
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)*ppCVar12,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar9,(MethodInfo *)0x0);
          ppCVar12 = ppCVar12 + 1;
        }
        goto code_?;
      }
    }
  }
  else {
    this_01 = (this->fields).accessoryMap;
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
      pLStack_8 = (Link__Array *)&stack0xffffffa8;
      pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
      pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_15,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar14->dictionary;
      auStack_6._4_4_ = pDVar14->next;
      auStack_6._8_4_ = pDVar14->stamp;
      auStack_6._12_4_ = (pDVar14->current).key;
      auStack_6._16_4_ = (pDVar14->current).value;
      iStack_1 = 0;
      while (cVar16 = func_?(), cVar16 != '\0') {
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                              );
        DStack_15.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_15.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
        ;
        accessory = (AvatarAccessory *)func_?();
        DStack_15.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_15.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
        ;
        accessorySlot = func_?();
        BodyAccessoriesController_MakeAccessorySelectable
                  (this,accessory,accessorySlot,(MethodInfo *)0x0);
      }
      pLStack_8->klass = (Link__Array__Class *)0x5e;
      iStack_1 = -1;
      func_?();
code_?:
      *unaff_FS_OFFSET = pOStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

