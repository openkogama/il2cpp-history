
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
      unaff_ESI = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      unaff_EBX = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pOVar2 = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      bp = (BytePacker *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)bp,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      kogamaDataType = kogamaDataType & 0xffffff;
      pOVar3 = (Object *)
               func_?(TypeInfo__MV__WorldObject__LinkDataParameter,
                               (byte *)((int)&kogamaDataType + 3));
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )bp != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_5 = 1;
        pOVar3 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_5);
        pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar3,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_6 = 2;
        pOStack_7 = pOVar2;
        unaff_ESI = (Object *)
                    func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_6);
        ppOVar8 = &pOStack_7;
        goto code_?;
      }
    }
code_?:
    func_?();
    *(int *)(unaff_EBX + -0xbba7410) = *(int *)(unaff_EBX + -0xbba7410) + -1;
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
    if (bp == (BytePacker *)0x0) goto code_?;
    unaff_ESI = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    unaff_EBX = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    bp = (BytePacker *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)bp,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    kogamaDataType = kogamaDataType & 0xffffff;
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                             (byte *)((int)&kogamaDataType + 3));
    pOStack_7 = unaff_ESI;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_7);
    if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        bp == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_6 = 1;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_6)
    ;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_5 = 2;
    unaff_ESI = (Object *)
                func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_5);
    break;
  default:
    return (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  ppOVar8 = (Object **)&stack0xfffffff4;
code_?:
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,ppOVar8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            ((Dictionary_2_System_Object_System_Object_ *)bp,unaff_ESI,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
            );
  return (Dictionary_2_System_Object_System_Object_ *)
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         bp;
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
              pOVar11 = (Object *)func_?();
              pOVar12 = (Object *)func_?(TypeInfo__System__Byte);
              if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar11,pOVar12,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar5);
          }
joined_?:
          if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        else {
          if (uVar3 == 5) {
            BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
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
                uVar3 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
                if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                               *)0x0) goto code_?;
                if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
                *(bool *)((int)&pDVar6->klass + (int)&pDVar7->vector[0].hashCode) = uVar3 != 0;
                pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                           *)((int)&pDVar7->klass + 1);
              } while ((int)pDVar7 < iVar5);
            }
            goto code_?;
          }
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
              BytePacker::BytePacker_ReadUInt64(bp,(MethodInfo *)0x0);
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
                pSStack_13 = (String__Fields *)&pDVar6->fields;
                do {
                  pSStack_13 = pSStack_13 + 1;
                  SVar14 = (String__Fields)BytePacker::BytePacker_ReadUInt64(bp,(MethodInfo *)0x0);
                  if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                 *)0x0) goto code_?;
                  if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
                  pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                             *)((int)&pDVar7->klass + 1);
                  *pSStack_13 = SVar14;
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
          iVar15 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) goto code_?;
          if ((pDVar6->fields)._entries <= pDVar7) goto code_?;
          pDVar7 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)((int)&pDVar7->klass + 1);
          *piStack_8 = iVar15;
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
  uVar16 = func_?(&TypeInfo__MV__Common__HashtableDataType);
  pOVar11 = (Object *)func_?(uVar16);
  pOVar12 = (Object *)func_?(&StringLiteral__from_WriteDataToBytePacker_);
  arg0 = (Object *)func_?(&StringLiteral_Trying_to_read_unsupported_type_);
  pSVar2 = mscorlib.dll::System::String::String_Concat_1(arg0,pOVar11,pOVar12,(MethodInfo *)0x0);
  uVar16 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar16);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__MV__WorldObject__BytePackerFunctions__BytePackerFunctionsVersion11__GetHashTableFromBytePacker_MV__WorldObject__BytePacker__System__Collections__Generic__Dictionary<System::Object,_System::Object>__int_
                 );
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    pBVar1 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar1,0,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    count = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    pBVar1 = BytePacker::BytePacker_ReadBytes(bp,count,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar2 = (Object *)func_?();
    pOVar3 = (Object *)func_?();
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4 = (Int32__Class *)CONCAT13(1,(undefined3)uStack_4);
      pOVar2 = (Object *)
               func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_4 + 3
                              );
      pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffec);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4._0_3_ = CONCAT12(2,(undefined2)uStack_4);
      pOVar2 = (Object *)
               func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_4 + 2
                              );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,(Object *)pBVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4._0_2_ = CONCAT11(3,(undefined1)uStack_4);
      pOVar2 = (Object *)func_?();
      uStack_4 = TypeInfo__System__Int32;
      pOVar3 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,pOVar2,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar6;
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
    puVar1 = (undefined *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    iStack_2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                             (pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                          (pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,method_00);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)mscorlib.dll::System::BitConverter::BitConverter_ToSingle
                             (pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = BytePacker::BytePacker_ReadBytes(bp,4,(MethodInfo *)0x0);
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar3,0,(MethodInfo *)0x0);
    pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    pDVar6 = pDVar5;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    iVar7 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePackerFunctionsVersion11_GetHashTableFromBytePacker
              (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar5,iVar7,(MethodInfo *)0x0);
    pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDStack_4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar8 = (Object *)func_?();
    pOVar9 = (Object *)func_?();
    pDVar5 = pDStack_4;
    if (pDStack_4 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDStack_4,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_10 = 1;
      puStack_11 = puVar1;
      pOVar8 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_10);
      pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&puStack_11);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_12 = 2;
      pOVar8 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_12);
      iStack_13 = iStack_2;
      pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&iStack_13);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar8 = (Object *)func_?();
      pOVar9 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar8 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      pOVar9 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffff90);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar8 = (Object *)func_?();
      pOVar9 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar8 = (Object *)func_?();
      pOVar9 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar8 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar8,(Object *)pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (readRuntimeData != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        bStack_14 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        if ((bStack_14 & 1) != 0) {
          BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pOVar8 = (Object *)func_?();
          pOVar9 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_4,pOVar8,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        if ((bStack_14 & 2) != 0) {
          BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          bStack_14 = 10;
          pOVar8 = (Object *)func_?();
          pOVar9 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_4,pOVar8,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        iVar7 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar6,iVar7,(MethodInfo *)0x0);
        pOVar8 = (Object *)func_?();
        pDVar5 = pDStack_4;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDStack_4,pOVar8,(Object *)pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      return (Dictionary_2_System_Object_System_Object_ *)pDVar5;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pDVar16 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar15)();
  return pDVar16;
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

