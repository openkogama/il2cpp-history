
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
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      puVar2 = (undefined *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      kogamaDataType = kogamaDataType & 0xffffff;
      pOVar3 = (Object *)
               func_?(TypeInfo__MV__WorldObject__LinkDataParameter,
                               (byte *)((int)&kogamaDataType + 3));
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_5 = 1;
        pOVar3 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_5);
        pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_6 = 2;
        puStack_7 = puVar2;
        pOVar3 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_6);
        ppuVar8 = &puStack_7;
code_?:
        pOVar4 = (Object *)func_?(TypeInfo__System__Int32,ppuVar8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        return (Dictionary_2_System_Object_System_Object_ *)this;
      }
    }
    break;
  case KogamaDataType__Enum_ObjectLinks:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
      cRam_? = '\x01';
    }
    if (bp != (BytePacker *)0x0) {
      puVar2 = (undefined *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      kogamaDataType = kogamaDataType & 0xffffff;
      pOVar3 = (Object *)
               func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                               (byte *)((int)&kogamaDataType + 3));
      puStack_7 = puVar2;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&puStack_7);
      if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_6 = 1;
        pOVar3 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_6);
        pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_5 = 2;
        pOVar3 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_5);
        ppuVar8 = (undefined **)&stack0xfffffff4;
        goto code_?;
      }
    }
    break;
  default:
    return (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void GetHashTableFromBytePacker(BytePacker, Dictionary`2[System.Object,System.Object], Int32) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
     BytePackerFunctionsVersion11_GetHashTableFromBytePacker
               (BytePacker *bp,Dictionary_2_System_Object_System_Object_ *data,
               int32_t numNameValuePairs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (0 < numNameValuePairs) {
    iStack_1 = 0;
    if (bp == (BytePacker *)0x0) goto code_?;
    do {
      pSVar2 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
      uVar3 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      if (uVar3 == 0) {
        BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pBVar4 = (Byte__Class *)TypeInfo__System__Int32;
        goto code_?;
      }
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
          pBVar4 = (Byte__Class *)TypeInfo__System__Single;
          goto code_?;
        }
        if (uVar3 == 3) {
          iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)func_?(TypeInfo__System__Single);
          pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)0x0;
          if (0 < iVar5) {
            piStack_8 = &(pDVar6->fields)._count;
            do {
              fVar9 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
              if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) goto code_?;
              if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
              pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                        *)((int)&pDVar7->klass + 1);
              *piStack_8 = (int32_t)fVar9;
              piStack_8 = piStack_8 + 1;
            } while ((int)pDVar7 < iVar5);
          }
          goto code_?;
        }
        if (uVar3 == 4) {
          iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (pDVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          iVar10 = 0;
          if (0 < iVar5) {
            do {
              BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              key = (Object *)func_?();
              value = (Object *)func_?(TypeInfo__System__Byte);
              if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar6,key,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar5);
          }
          goto joined_?;
        }
        if (uVar3 == 5) {
          BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
          pBVar4 = (Byte__Class *)TypeInfo__System__Boolean;
          goto code_?;
        }
        if (uVar3 == 6) {
          iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)func_?(TypeInfo__System__Boolean);
          pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)0x0;
          if (0 < iVar5) {
            do {
              bVar11 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
              if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) goto code_?;
              if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
              *(bool *)((int)&pDVar6->klass + (int)&pDVar7->vector[0].hashCode) = bVar11;
              pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                        *)((int)&pDVar7->klass + 1);
            } while ((int)pDVar7 < iVar5);
          }
joined_?:
          if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        else {
          if (uVar3 == 7) {
            pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
            goto joined_?;
          }
          if (uVar3 != 8) {
            if (uVar3 == 9) {
              BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
              pBVar4 = TypeInfo__System__Byte;
code_?:
              pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?(pBVar4);
              goto joined_?;
            }
            if (uVar3 == 10) {
              BytePacker::BytePacker_ReadInt64(bp,(MethodInfo *)0x0);
              pBVar4 = (Byte__Class *)TypeInfo__System__Int64;
              goto code_?;
            }
            if (uVar3 == 0xb) {
              iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?(TypeInfo__System__Int64);
              pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                        *)0x0;
              if (0 < iVar5) {
                pSStack_12 = (String__Fields *)&pDVar6->fields;
                do {
                  pSStack_12 = pSStack_12 + 1;
                  SVar13 = (String__Fields)BytePacker::BytePacker_ReadInt64(bp,(MethodInfo *)0x0);
                  if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                 *)0x0) goto code_?;
                  if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
                  pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                            *)((int)&pDVar7->klass + 1);
                  *pSStack_12 = SVar13;
                } while ((int)pDVar7 < iVar5);
              }
              goto code_?;
            }
            goto code_?;
          }
          pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (pDVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (data,(Object *)pSVar2,(Object *)pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
            BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                      (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar6,iVar5,
                       (MethodInfo *)0x0);
            goto code_?;
          }
        }
        goto code_?;
      }
      iVar5 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?(TypeInfo__System__Int32);
      pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                *)0x0;
      if (0 < iVar5) {
        piStack_8 = &(pDVar6->fields)._count;
        do {
          iVar14 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) goto code_?;
          if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
          pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)((int)&pDVar7->klass + 1);
          *piStack_8 = iVar14;
          piStack_8 = piStack_8 + 1;
        } while ((int)pDVar7 < iVar5);
      }
code_?:
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
code_?:
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (data,(Object *)pSVar2,(Object *)pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
code_?:
      iStack_1 = iStack_1 + 1;
    } while (iStack_1 < numNameValuePairs);
  }
  return;
code_?:
  func_?();
code_?:
  uVar15 = func_?(&TypeInfo__MV__Common__HashtableDataType);
  func_?(uVar15);
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc4,(MethodInfo *)0x0);
  str2 = (String *)func_?(&StringLiteral__from_WriteDataToBytePacker_);
  str0 = (String *)func_?(&StringLiteral_Trying_to_read_unsupported_type_);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar2,str2,(MethodInfo *)0x0);
  uVar15 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar15);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__MV__WorldObject__BytePackerFunctions__BytePackerFunctionsVersion11__GetHashTableFromBytePacker_MV__WorldObject__BytePacker__System__Collections__Generic__Dictionary<System::Object,_System::Object>__int_
                 );
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Dictionary`2[System.Object,System.Object] GetLinkDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetLinkDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    puVar1 = (undefined *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&bp + 3);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4 = 1;
      pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_4);
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_5 = 2;
      puStack_6 = puVar1;
      pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_5);
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&puStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return (Dictionary_2_System_Object_System_Object_ *)this_00;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar8;
}


/* Dictionary`2[System.Object,System.Object] GetObjectLinkDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetObjectLinkDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    puVar1 = (undefined *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,(int)&bp + 3);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4 = 1;
      pOVar2 = (Object *)
               func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_4);
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_5 = 2;
      puStack_6 = puVar1;
      pOVar2 = (Object *)
               func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_5);
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&puStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return (Dictionary_2_System_Object_System_Object_ *)this_00;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar8;
}


/* Dictionary`2[System.Object,System.Object] GetPrototypeDataParameters(BytePacker) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetPrototypeDataParameters(BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    pBVar1 = (BytePacker__Class *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    iVar2 = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    count = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    value = BytePacker::BytePacker_ReadBytes(this,count,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pOVar3 = (Object *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&bp + 3);
    bp = (BytePacker *)&pIStack_4;
    pIStack_4 = (Int32__Class *)pBVar1;
    pOVar5 = (Object *)func_?();
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_6 = (MonitorData *)CONCAT13(1,(undefined3)uStack_6);
      pOVar3 = (Object *)
               func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_6 + 3
                              );
      pOVar5 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_6._0_3_ = CONCAT12(2,(undefined2)uStack_6);
      pOVar3 = (Object *)
               func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_6 + 2
                              );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar3,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar3 = (Object *)func_?();
      uStack_6 = (MonitorData *)&puStack_7;
      pIStack_4 = TypeInfo__System__Int32;
      puStack_7 = (undefined *)iVar2;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return (Dictionary_2_System_Object_System_Object_ *)this_00;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar9;
}


/* Dictionary`2[System.Object,System.Object] GetWorldObjectDataParameters(BytePacker, Boolean) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
BytePackerFunctionsVersion11_GetWorldObjectDataParameters
          (BytePacker *bp,bool readRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Quaternion);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    iStack_1 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,method_00);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    iVar3 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePackerFunctionsVersion11_GetHashTableFromBytePacker
              (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar2,iVar3,(MethodInfo *)0x0);
    value = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar4 = (Object *)func_?();
    pIVar5 = TypeInfo__System__Int32;
    pOVar6 = (Object *)func_?();
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_7 = 1;
      pOVar4 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_7);
      pIStack_8 = pIVar5;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_9 = 2;
      pOVar4 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_9);
      iStack_10 = iStack_1;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      pOVar6 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffff94);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (readRuntimeData != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        bStack_11 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        if ((bStack_11 & 1) != 0) {
          BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pWVar12 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          pOVar4 = (Object *)func_?();
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pWVar12,pOVar4,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        if ((bStack_11 & 2) != 0) {
          BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          bStack_11 = 10;
          pWVar12 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          pOVar4 = (Object *)func_?();
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pWVar12,pOVar4,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        iVar3 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (bp,(Dictionary_2_System_Object_System_Object_ *)this,iVar3,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)&stack0xfffffff2;
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,(Object *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      return (Dictionary_2_System_Object_System_Object_ *)pDVar2;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pDVar14 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar13)();
  return pDVar14;
}


/* Void ReadWorldObjectOwnerState(BytePacker, Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::BytePackerFunctionsVersion11::
     BytePackerFunctionsVersion11_ReadWorldObjectOwnerState
               (BytePacker *bp,Dictionary_2_System_Object_System_Object_ *worldObjectData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    cRam_? = '\x01';
  }
  this = bp;
  if (bp != (BytePacker *)0x0) {
    uStack_1 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    this_00 = worldObjectData;
    if ((uStack_1 & 1) != 0) {
      iVar2 = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
      bp = (BytePacker *)CONCAT13(9,bp._0_3_);
      pOStack_3 = (Object *)
                   func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&bp + 3
                                  );
      iStack_4 = iVar2;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,pOStack_3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    if ((uStack_1 & 2) != 0) {
      pOVar5 = (Object *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
      bp = (BytePacker *)CONCAT13(10,bp._0_3_);
      key = (Object *)
            func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&bp + 3);
      pOStack_3 = pOVar5;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_3);
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,key,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

