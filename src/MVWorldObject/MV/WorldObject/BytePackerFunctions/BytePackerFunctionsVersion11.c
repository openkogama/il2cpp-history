
/* Dictionary`2[System.Object,System.Object] GetDataParameters(BytePacker, KogamaDataType, Boolean)
    */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetDataParameters
          (BytePacker *bp,KogamaDataType__Enum kogamaDataType,bool readRuntimeData,
          MethodInfo *method)

{
  switch(kogamaDataType & 0xff) {
  case KogamaDataType__Enum_Prototypes:
    pDVar1 = BytePackerFunctionsVersion11_GetPrototypeDataParameters(bp,(MethodInfo *)0x0);
    return pDVar1;
  case KogamaDataType__Enum_WorldObjects:
    pDVar1 = BytePackerFunctionsVersion11_GetWorldObjectDataParameters
                       (bp,readRuntimeData,(MethodInfo *)0x0);
    return pDVar1;
  case KogamaDataType__Enum_Links:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      unaff_ESI = (BytePacker *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      unaff_BX = (undefined2)iVar2;
      in_stack_3 =
           (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
            *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pSVar4 = (String *)func_?();
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
      bp = (BytePacker *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,pSVar4,pCVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar4 = (String *)func_?();
        pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,pSVar4,pCVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar4 = (String *)func_?();
code_?:
        pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,pSVar4,pCVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        return pDVar1;
      }
    }
    break;
  case KogamaDataType__Enum_ObjectLinks:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      unaff_ESI = (BytePacker *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      unaff_BX = (undefined2)iVar2;
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      in_stack_3 =
           (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
            *)func_?();
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
      bp = (BytePacker *)0x0;
      pBStack_6 = unaff_ESI;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,(String *)in_stack_3,pCVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar4 = (String *)func_?();
        pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pDVar1,pSVar4,pCVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar4 = (String *)func_?();
        goto code_?;
      }
    }
    break;
  default:
    return (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  uVar7 = func_?();
  pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(uVar7 ^ 0x5a);
  pbVar9 = (byte *)(extraout_ECX + 0x34);
  bVar10 = *pbVar9;
  bVar11 = (byte)(uVar7 >> 8);
  *pbVar9 = *pbVar9 + bVar11;
  pDVar1 = pDVar8 + 1;
  bVar12 = *(byte *)&pDVar1->klass;
  bVar13 = (byte)((ushort)unaff_BX >> 8);
  bVar14 = *(char *)&pDVar1->klass + bVar13;
  *(byte *)&pDVar1->klass = bVar14 + CARRY1(bVar10,bVar11);
  pcVar15 = (char *)((int)&pDVar8[0x1a2c6a8].fields.valueSlots + 1);
  *pcVar15 = *pcVar15 + (char)unaff_BX + (CARRY1(bVar12,bVar13) || CARRY1(bVar14,CARRY1(bVar10,bVar11)));
  if (cRam_? == '\0') {
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (0 < in_stack_16) {
    uVar17 = CONCAT44(unaff_ESI,bp);
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    do {
      if (pBStack_6 == (BytePacker *)0x0) {
code_?:
        func_?(0,uVar17);
code_?:
        arg1 = (Object *)func_?(TypeInfo__MV__Common__HashtableDataType);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar4 = mscorlib.dll::System::String::String_Concat_1
                            ((Object *)StringLiteral_Trying_to_read_unsupported_type_,arg1,
                             (Object *)StringLiteral__from_WriteDataToBytePacker_,(MethodInfo *)0x0)
        ;
        this_00 = (IsolatedStorageException *)func_?();
        mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
        IsolatedStorageException__ctor_1(this_00,pSVar4,(MethodInfo *)0x0);
        func_?();
        pcVar18 = (code *)swi(3);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
        return pDVar1;
      }
      pSVar4 = BytePacker::BytePacker_ReadString(pBStack_6,(MethodInfo *)0x0);
      pSVar19 = pSVar4;
      uVar20 = BytePacker::BytePacker_ReadByte(pBStack_6,(MethodInfo *)0x0);
      uVar21 = (undefined4)uVar17;
      if (uVar20 == 0) {
        BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
        pBVar22 = (Byte__Class *)TypeInfo__System__Int32;
code_?:
        uVar17 = CONCAT44(&UNK_?,uVar21);
        this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)func_?(pBVar22);
joined_?:
        if (in_stack_3 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (in_stack_3,pSVar4,(CrossPlatformInputManager_VirtualButton *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      else {
        if (uVar20 == 1) {
          iVar2 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
          uVar17 = CONCAT44(&UNK_?,uVar21);
          this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?(TypeInfo__System__Int32);
          iVar23 = 0;
          pSVar4 = pSVar19;
          if (0 < iVar2) {
            do {
              iVar24 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
              if (this == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                           *)0x0) goto code_?;
              func_?(iVar23,iVar24);
              iVar23 = iVar23 + 1;
              pSVar4 = pSVar19;
            } while (iVar23 < iVar2);
          }
          goto joined_?;
        }
        if (uVar20 == 2) {
          BytePacker::BytePacker_ReadSingle(pBStack_6,(MethodInfo *)0x0);
          pBVar22 = (Byte__Class *)TypeInfo__System__Single;
          goto code_?;
        }
        if (uVar20 == 3) {
          iVar2 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
          uVar17 = CONCAT44(&UNK_?,uVar21);
          this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?(TypeInfo__System__Single);
          iVar23 = 0;
          pSVar4 = pSVar19;
          if (0 < iVar2) {
            do {
              fVar25 = BytePacker::BytePacker_ReadSingle(pBStack_6,(MethodInfo *)0x0);
              if (this == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                           *)0x0) goto code_?;
              func_?(iVar23,fVar25);
              iVar23 = iVar23 + 1;
              pSVar4 = pSVar19;
            } while (iVar23 < iVar2);
          }
          goto joined_?;
        }
        if (uVar20 == 4) {
          uVar17 = CONCAT44(&UNK_?,uVar21);
          iVar2 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
          this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          iVar23 = 0;
          pSVar4 = pSVar19;
          if (0 < iVar2) {
            do {
              BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
              pSVar4 = (String *)func_?(TypeInfo__System__Int32,&stack0xffffffc4);
              pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                        func_?(TypeInfo__System__Byte,&stack0xffffffd9);
              if (this == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                           *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        (this,pSVar4,pCVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              iVar23 = iVar23 + 1;
              pSVar4 = pSVar19;
            } while (iVar23 < iVar2);
          }
          goto joined_?;
        }
        if (uVar20 == 5) {
          BytePacker::BytePacker_ReadByte(pBStack_6,(MethodInfo *)0x0);
          pBVar22 = (Byte__Class *)TypeInfo__System__Boolean;
          goto code_?;
        }
        if (uVar20 == 6) {
          iVar2 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
          uVar17 = CONCAT44(&UNK_?,uVar21);
          this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?(TypeInfo__System__Boolean);
          iVar23 = 0;
          pSVar4 = pSVar19;
          if (0 < iVar2) {
            do {
              uVar20 = BytePacker::BytePacker_ReadByte(pBStack_6,(MethodInfo *)0x0);
              if (this == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                           *)0x0) goto code_?;
              func_?(iVar23,uVar20 != 0);
              iVar23 = iVar23 + 1;
              pSVar4 = pSVar19;
            } while (iVar23 < iVar2);
          }
          goto joined_?;
        }
        if (uVar20 == 7) {
          uVar17 = CONCAT44(&UNK_?,uVar21);
          this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)BytePacker::BytePacker_ReadString(pBStack_6,(MethodInfo *)0x0);
          goto joined_?;
        }
        if (uVar20 != 8) {
          if (uVar20 == 9) {
            BytePacker::BytePacker_ReadByte(pBStack_6,(MethodInfo *)0x0);
            pBVar22 = TypeInfo__System__Byte;
          }
          else {
            if (uVar20 != 10) {
              if (uVar20 != 0xb) goto code_?;
              iVar2 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
              uVar17 = CONCAT44(&UNK_?,uVar21);
              this = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)func_?(TypeInfo__System__Int64);
              iVar23 = 0;
              pSVar4 = pSVar19;
              if (0 < iVar2) {
                do {
                  uVar26 = BytePacker::BytePacker_ReadUInt64(pBStack_6,(MethodInfo *)0x0);
                  if (this == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                               *)0x0) goto code_?;
                  func_?(iVar23,uVar26);
                  iVar23 = iVar23 + 1;
                  uVar17 = uVar26;
                  pSVar4 = pSVar19;
                } while (iVar23 < iVar2);
              }
              goto joined_?;
            }
            BytePacker::BytePacker_ReadUInt64(pBStack_6,(MethodInfo *)0x0);
            pBVar22 = (Byte__Class *)TypeInfo__System__Int64;
          }
          goto code_?;
        }
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (in_stack_3 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (in_stack_3,pSVar4,(CrossPlatformInputManager_VirtualButton *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        iVar2 = BytePacker::BytePacker_ReadInt32(pBStack_6,(MethodInfo *)0x0);
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (pBStack_6,pDVar1,iVar2,(MethodInfo *)0x0);
      }
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)((int)&pDVar8->klass + 1);
    } while ((int)pDVar8 < in_stack_16);
  }
  return pDVar8;
}


/* Void GetHashTableFromBytePacker(BytePacker, Dictionary`2[System.Object,System.Object], Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
     BytePackerFunctionsVersion11_GetHashTableFromBytePacker
               (BytePacker *bp,Dictionary_2_System_Object_System_Object_ *data,
               int32_t numNameValuePairs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if (0 < numNameValuePairs) {
    uVar2 = CONCAT44(unaff_ESI,unaff_EDI);
    do {
      if (bp == (BytePacker *)0x0) {
code_?:
        func_?(0,uVar2);
code_?:
        arg1 = (Object *)func_?(TypeInfo__MV__Common__HashtableDataType);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_1
                           ((Object *)StringLiteral_Trying_to_read_unsupported_type_,arg1,
                            (Object *)StringLiteral__from_WriteDataToBytePacker_,(MethodInfo *)0x0);
        this = (IsolatedStorageException *)func_?();
        mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
        IsolatedStorageException__ctor_1(this,pSVar3,(MethodInfo *)0x0);
        pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                     MethodInfo__MV__WorldObject__BytePackerFunctions__BytePackerFunctionsVersion11__GetHashTableFromBytePacker_MV__WorldObject__BytePacker__System__Collections__Generic__Dictionary<System::Object,_System::Object>__int_
        ;
        iStack_1 = 0;
        pIStack_5 = this;
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar3 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
      pSStack_7 = pSVar3;
      uVar8 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      uVar9 = (undefined4)uVar2;
      if (uVar8 == 0) {
        BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pBVar10 = (Byte__Class *)TypeInfo__System__Int32;
code_?:
        uVar2 = CONCAT44(&UNK_?,uVar9);
        value_00 = (Dictionary_2_System_Object_System_Object_ *)func_?(pBVar10);
joined_?:
        if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)data,pSVar3,(CrossPlatformInputManager_VirtualButton *)value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      else {
        if (uVar8 == 1) {
          pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                       BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uVar2 = CONCAT44(&UNK_?,uVar9);
          pDStack_11 = (Dictionary_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__Int32);
          iVar12 = 0;
          value_00 = pDStack_11;
          pSVar3 = pSStack_7;
          if (0 < (int)pDStack_4) {
            do {
              iVar13 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              if (pDStack_11 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              func_?(iVar12,iVar13);
              iVar12 = iVar12 + 1;
              value_00 = pDStack_11;
              pSVar3 = pSStack_7;
            } while (iVar12 < (int)pDStack_4);
          }
          goto joined_?;
        }
        if (uVar8 == 2) {
          BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
          pBVar10 = (Byte__Class *)TypeInfo__System__Single;
          goto code_?;
        }
        if (uVar8 == 3) {
          pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                       BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uVar2 = CONCAT44(&UNK_?,uVar9);
          pDStack_11 = (Dictionary_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__Single);
          iVar12 = 0;
          value_00 = pDStack_11;
          pSVar3 = pSStack_7;
          if (0 < (int)pDStack_4) {
            do {
              fVar14 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
              if (pDStack_11 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              func_?(iVar12,fVar14);
              iVar12 = iVar12 + 1;
              value_00 = pDStack_11;
              pSVar3 = pSStack_7;
            } while (iVar12 < (int)pDStack_4);
          }
          goto joined_?;
        }
        if (uVar8 == 4) {
          uVar2 = CONCAT44(&UNK_?,uVar9);
          pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                       BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDStack_11 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDStack_11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          iVar12 = 0;
          value_00 = pDStack_11;
          pSVar3 = pSStack_7;
          if (0 < (int)pDStack_4) {
            do {
              pIStack_5 = (IsolatedStorageException *)
                           BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              pSVar3 = (String *)func_?(TypeInfo__System__Int32,&pIStack_5);
              uStack_15 = 0;
              value = (CrossPlatformInputManager_VirtualButton *)
                      func_?(TypeInfo__System__Byte,&uStack_15);
              if (pDStack_11 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDStack_11,pSVar3,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              iVar12 = iVar12 + 1;
              value_00 = pDStack_11;
              pSVar3 = pSStack_7;
            } while (iVar12 < (int)pDStack_4);
          }
          goto joined_?;
        }
        if (uVar8 == 5) {
          uVar8 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
          uStack_16 = uVar8 != 0;
          pBVar10 = (Byte__Class *)TypeInfo__System__Boolean;
          goto code_?;
        }
        if (uVar8 == 6) {
          pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                       BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uVar2 = CONCAT44(&UNK_?,uVar9);
          pDStack_11 = (Dictionary_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__Boolean);
          iVar12 = 0;
          value_00 = pDStack_11;
          pSVar3 = pSStack_7;
          if (0 < (int)pDStack_4) {
            do {
              uVar8 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
              if (pDStack_11 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              func_?(iVar12,uVar8 != 0);
              iVar12 = iVar12 + 1;
              value_00 = pDStack_11;
              pSVar3 = pSStack_7;
            } while (iVar12 < (int)pDStack_4);
          }
          goto joined_?;
        }
        if (uVar8 == 7) {
          uVar2 = CONCAT44(&UNK_?,uVar9);
          value_00 = (Dictionary_2_System_Object_System_Object_ *)
                     BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
          goto joined_?;
        }
        if (uVar8 != 8) {
          if (uVar8 == 9) {
            uStack_17 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
            pBVar10 = TypeInfo__System__Byte;
          }
          else {
            if (uVar8 != 10) {
              if (uVar8 != 0xb) goto code_?;
              pDStack_11 = (Dictionary_2_System_Object_System_Object_ *)
                           BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              uVar2 = CONCAT44(&UNK_?,uVar9);
              pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                           func_?(TypeInfo__System__Int64);
              iVar12 = 0;
              value_00 = pDStack_4;
              pSVar3 = pSStack_7;
              if (0 < (int)pDStack_11) {
                do {
                  uVar18 = BytePacker::BytePacker_ReadUInt64(bp,(MethodInfo *)0x0);
                  if (pDStack_4 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                  goto code_?;
                  func_?(iVar12,uVar18);
                  iVar12 = iVar12 + 1;
                  uVar2 = uVar18;
                  value_00 = pDStack_4;
                  pSVar3 = pSStack_7;
                } while (iVar12 < (int)pDStack_11);
              }
              goto joined_?;
            }
            BytePacker::BytePacker_ReadUInt64(bp,(MethodInfo *)0x0);
            pBVar10 = (Byte__Class *)TypeInfo__System__Int64;
          }
          goto code_?;
        }
        pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDStack_4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)data,pSVar3,(CrossPlatformInputManager_VirtualButton *)pDStack_4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        iVar13 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (bp,pDStack_4,iVar13,(MethodInfo *)0x0);
      }
      iStack_1 = iStack_1 + 1;
    } while (iStack_1 < numNameValuePairs);
  }
  return;
}


/* Dictionary`2[System.Object,System.Object] GetLinkDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetLinkDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    puVar1 = (undefined *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pSVar3 = (String *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&bp + 3);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar2,pSVar3,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_5 = 1;
      pSVar3 = (String *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_5);
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&stack0xffffffec);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar2,pSVar3,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_6 = 2;
      puStack_7 = puVar1;
      pSVar3 = (String *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_6);
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&puStack_7);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar2,pSVar3,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return pDVar2;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar2;
}


/* Dictionary`2[System.Object,System.Object] GetObjectLinkDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetObjectLinkDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    puVar1 = (undefined *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pSVar3 = (String *)
             func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,(int)&bp + 3);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar2,pSVar3,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_5 = 1;
      pSVar3 = (String *)
               func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_5);
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&stack0xffffffec);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar2,pSVar3,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_6 = 2;
      puStack_7 = puVar1;
      pSVar3 = (String *)
               func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_6);
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&puStack_7);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar2,pSVar3,pCVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return pDVar2;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar2;
}


/* Dictionary`2[System.Object,System.Object] GetPrototypeDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetPrototypeDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    pBVar1 = (BytePacker__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    iVar2 = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    count = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    value = BytePacker::BytePacker_ReadBytes(this,count,(MethodInfo *)0x0);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pSVar4 = (String *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&bp + 3);
    bp = (BytePacker *)&pIStack_5;
    pIStack_5 = (Int32__Class *)pBVar1;
    pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar3,pSVar4,pCVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_7 = (MonitorData *)CONCAT13(1,(undefined3)uStack_7);
      pSVar4 = (String *)
               func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_7 + 3
                              );
      pCVar6 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Single,&stack0xffffffe8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar3,pSVar4,pCVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_7._0_3_ = CONCAT12(2,(undefined2)uStack_7);
      pSVar4 = (String *)
               func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_7 + 2
                              );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar3,pSVar4,(CrossPlatformInputManager_VirtualButton *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar4 = (String *)func_?();
      uStack_7 = (MonitorData *)&puStack_8;
      pIStack_5 = TypeInfo__System__Int32;
      puStack_8 = (undefined *)iVar2;
      pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar3,pSVar4,pCVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return pDVar3;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar9)();
  return pDVar3;
}


/* Dictionary`2[System.Object,System.Object] GetWorldObjectDataParameters(BytePacker, Boolean) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetWorldObjectDataParameters
          (BytePacker *bp,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    fStack_1 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    func_?();
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    func_?();
    fVar2 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fVar3 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fStack_4 = fVar2;
    puStack_5 = (undefined *)BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    fStack_1 = fVar3;
    puVar6 = (undefined *)0x0;
    func_?();
    data = (Dictionary_2_System_Object_System_Object_ *)func_?();
    pDVar7 = data;
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    iVar8 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePackerFunctionsVersion11_GetHashTableFromBytePacker(bp,data,iVar8,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_9 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    pSVar10 = (String *)func_?();
    uStack_11 = &stack0xffffffd8;
    uStack_12 = TypeInfo__System__Int32;
    pCVar13 = (CrossPlatformInputManager_VirtualButton *)func_?();
    if (this != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_9._0_3_ = CONCAT12(1,(undefined2)uStack_9);
      pSVar10 = (String *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                               (int)&uStack_9 + 2);
      puStack_5 = puVar6;
      pCVar13 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&puStack_5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_9._0_2_ = CONCAT11(2,(undefined1)uStack_9);
      pSVar10 = (String *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                               (int)&uStack_9 + 1);
      fStack_4 = fStack_1;
      pCVar13 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&fStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_9 = (WorldObjectDataParameters__Enum__Class *)CONCAT31(uStack_9._1_3_,3);
      pSVar10 = (String *)func_?();
      pCVar13 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_11 = (undefined1 *)CONCAT13(4,(undefined3)uStack_11);
      pSVar10 = (String *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      pCVar13 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffffa0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_11._0_3_ = CONCAT12(5,(undefined2)uStack_11);
      pSVar10 = (String *)func_?();
      pCVar13 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_11._0_2_ = CONCAT11(6,(undefined1)uStack_11);
      pSVar10 = (String *)func_?();
      pCVar13 = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,pCVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_11 = (undefined1 *)CONCAT31(uStack_11._1_3_,7);
      pSVar10 = (String *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this,pSVar10,(CrossPlatformInputManager_VirtualButton *)pDVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (readRuntimeData != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        uVar14 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        uStack_9._3_1_ = uVar14;
        if ((uVar14 & 1) != 0) {
          BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uStack_12 = (Int32__Class *)CONCAT13(9,(undefined3)uStack_12);
          pDVar15 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                     *)((int)&uStack_12 + 3);
          pSVar10 = (String *)func_?();
          pCVar13 = (CrossPlatformInputManager_VirtualButton *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar15,pSVar10,pCVar13,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        if ((uStack_9._3_1_ & 2) != 0) {
          BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          uStack_9._3_1_ = 10;
          pDVar15 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                     *)((int)&uStack_9 + 3);
          pSVar10 = (String *)func_?();
          pCVar13 = (CrossPlatformInputManager_VirtualButton *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar15,pSVar10,pCVar13,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        iVar8 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        this = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker(bp,pDVar7,iVar8,(MethodInfo *)0x0);
        uStack_12._0_3_ = CONCAT12(8,(undefined2)uStack_12);
        pSVar10 = (String *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this,pSVar10,(CrossPlatformInputManager_VirtualButton *)pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar16)();
  return pDVar7;
}


/* Void ReadWorldObjectOwnerState(BytePacker, Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
     BytePackerFunctionsVersion11_ReadWorldObjectOwnerState
               (BytePacker *bp,Dictionary_2_System_Object_System_Object_ *worldObjectData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    uStack_1 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    this_00 = worldObjectData;
    if ((uStack_1 & 1) != 0) {
      iVar2 = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
      bp = (BytePacker *)CONCAT13(9,bp._0_3_);
      pSStack_3 = (String *)
                   func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&bp + 3
                                  );
      iStack_4 = iVar2;
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&iStack_4);
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_00,pSStack_3,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    if ((uStack_1 & 2) != 0) {
      pSVar6 = (String *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
      bp = (BytePacker *)CONCAT13(10,bp._0_3_);
      key = (String *)
            func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&bp + 3);
      pSStack_3 = pSVar6;
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&pSStack_3);
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_00,key,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

