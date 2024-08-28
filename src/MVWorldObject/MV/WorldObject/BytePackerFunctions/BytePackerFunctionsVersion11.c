
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
    cVar2 = (int)bp < 0;
    bVar3 = bp == (BytePacker *)0x0;
    if (!bVar3) {
      unaff_ESI = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pOVar4 = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
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
      pOVar5 = (Object *)
               func_?(TypeInfo__MV__WorldObject__LinkDataParameter,
                               (byte *)((int)&kogamaDataType + 3));
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      cVar2 = (int)bp < 0;
      bVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)bp == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0;
      if (!bVar3) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar5,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_7 = 1;
        pOVar5 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_7);
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar5,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_8 = 2;
        pOStack_9 = pOVar4;
        pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStack_8);
        ppOVar10 = &pOStack_9;
        goto code_?;
      }
    }
code_?:
    cVar11 = '\0';
    cVar12 = '\0';
    piVar13 = (int *)func_?();
    if (cVar11 == cVar2) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*(code *)piVar13[-9])();
      return pDVar1;
    }
    *piVar13 = (int)ROUND(extraout_ST0);
    pOVar4 = extraout_ECX;
    if (!bVar3 && cVar11 == cVar2) {
      pcVar14 = (char *)((int)&extraout_ECX[-0x21de491].monitor + 2);
      cVar2 = *pcVar14;
      cVar15 = (char)((uint)piVar13 >> 8);
      cVar11 = *pcVar14 + cVar15;
      *pcVar14 = cVar11 + cVar12;
      pOVar4 = unaff_ESI;
      if (*pcVar14 == '\0' || (SCARRY1(cVar2,cVar15) != SCARRY1(cVar11,cVar12)) != *pcVar14 < '\0') {
        pcVar16 = (code *)swi(3);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar16)();
        return pDVar1;
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
    cVar2 = (int)bp < 0;
    bVar3 = true;
    if (bp == (BytePacker *)0x0) goto code_?;
    unaff_ESI = (Object *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
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
    pOVar4 = (Object *)
             func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                             (byte *)((int)&kogamaDataType + 3));
    pOStack_9 = unaff_ESI;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_9);
    cVar2 = (int)bp < 0;
    bVar3 = true;
    if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        bp == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar4,pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_8 = 1;
    pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_8)
    ;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar4,pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_7 = 2;
    pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStack_7)
    ;
    break;
  default:
    return (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  ppOVar10 = (Object **)&stack0xfffffff4;
code_?:
  pOVar5 = (Object *)func_?(TypeInfo__System__Int32,ppOVar10);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            ((Dictionary_2_System_Object_System_Object_ *)bp,pOVar4,pOVar5,
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
  iStack_1 = 0;
  if (0 < numNameValuePairs) {
    do {
      OVar2.monitor = (MonitorData *)pEStack_3;
      OVar2.klass = (Object__Class *)pDStack_4;
      if (bp == (BytePacker *)0x0) goto code_?;
      pSVar5 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
      pSStack_6 = pSVar5;
      uStack_7 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      if (uStack_7 == 0) {
        BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pBVar8 = (Byte__Class *)TypeInfo__System__Int32;
        goto code_?;
      }
      if (uStack_7 == 1) {
        pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pEStack_3 = (Exception *)func_?(TypeInfo__System__Int32);
        pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                  *)0x0;
        OVar2.monitor = (MonitorData *)pEStack_3;
        OVar2.klass = (Object__Class *)pDStack_4;
        pEVar11 = pEStack_3;
        pSVar5 = pSStack_6;
        if (0 < (int)pDStack_9) {
          pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)&(((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)pEStack_3)->fields)._count;
          do {
            pDVar13 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                      *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
            OVar2.monitor = (MonitorData *)pEStack_3;
            OVar2.klass = (Object__Class *)pDStack_4;
            if (pEStack_3 == (Exception *)0x0) goto code_?;
            if (((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Fields
                  *)&pEStack_3->fields)->_entries <= pDVar10) goto code_?;
            pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                      *)((int)&pDVar10->klass + 1);
            pDStack_12->klass = pDVar13;
            pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)&pDStack_12->monitor;
            pEVar11 = pEStack_3;
            pSVar5 = pSStack_6;
          } while ((int)pDVar10 < (int)pDStack_9);
        }
        goto joined_?;
      }
      if (uStack_7 == 2) {
        BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        pBVar8 = (Byte__Class *)TypeInfo__System__Single;
        goto code_?;
      }
      if (uStack_7 != 3) {
        if (uStack_7 == 4) {
          pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (pDStack_9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          iVar14 = 0;
          if (0 < (int)pDStack_12) {
            do {
              puStack_15 = (undefined *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              pEStack_3 = (Exception *)func_?(TypeInfo__System__Int32,&puStack_15);
              uStack_16 = 0;
              value = (Object *)func_?(TypeInfo__System__Byte,&uStack_16);
              OVar2.monitor = (MonitorData *)pEStack_3;
              OVar2.klass = (Object__Class *)pDStack_4;
              if (pDStack_9 ==
                  (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_9,
                         (Object *)pEStack_3,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)pDStack_12);
          }
          OVar2.monitor = (MonitorData *)pEStack_3;
          OVar2.klass = (Object__Class *)pDStack_4;
          pEVar11 = (Exception *)pDStack_9;
          pSVar5 = pSStack_6;
          goto joined_?;
        }
        if (uStack_7 == 5) {
          bStack_17 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
          pBVar8 = (Byte__Class *)TypeInfo__System__Boolean;
          goto code_?;
        }
        if (uStack_7 == 6) {
          pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pEStack_3 = (Exception *)func_?(TypeInfo__System__Boolean);
          pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)0x0;
          if (0 < (int)pDStack_12) {
            do {
              bVar18 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
              OVar2.monitor = (MonitorData *)pEStack_3;
              OVar2.klass = (Object__Class *)pDStack_4;
              if (pEStack_3 == (Exception *)0x0) goto code_?;
              if (((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Fields
                    *)&pEStack_3->fields)->_entries <= pDVar10) goto code_?;
              *(bool *)((int)&pEStack_3->klass + (int)&pDVar10->vector[0].hashCode) = bVar18;
              pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                        *)((int)&pDVar10->klass + 1);
            } while ((int)pDVar10 < (int)pDStack_12);
          }
          OVar2.monitor = (MonitorData *)pEStack_3;
          OVar2.klass = (Object__Class *)pDStack_4;
          pEVar11 = pEStack_3;
          pSVar5 = pSStack_6;
          goto joined_?;
        }
        if (uStack_7 == 7) {
          pEVar11 = (Exception *)BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
code_?:
          OVar2.monitor = (MonitorData *)pEStack_3;
          OVar2.klass = (Object__Class *)pDStack_4;
          goto joined_?;
        }
        if (uStack_7 == 8) {
          pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (pDStack_12,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          OVar2.monitor = (MonitorData *)pEStack_3;
          OVar2.klass = (Object__Class *)pDStack_4;
          if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (data,(Object *)pSVar5,(Object *)pDStack_12,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          numNameValuePairs_00 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                    (bp,(Dictionary_2_System_Object_System_Object_ *)pDStack_12,numNameValuePairs_00
                     ,(MethodInfo *)0x0);
          goto code_?;
        }
        if (uStack_7 == 9) {
          uStack_19 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
          pBVar8 = TypeInfo__System__Byte;
code_?:
          pEVar11 = (Exception *)func_?(pBVar8);
          goto code_?;
        }
        if (uStack_7 == 10) {
          BytePacker::BytePacker_ReadInt64(bp,(MethodInfo *)0x0);
          pBVar8 = (Byte__Class *)TypeInfo__System__Int64;
          goto code_?;
        }
        if (uStack_7 == 0xb) {
          pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
          pDStack_20 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?(TypeInfo__System__Int64);
          OVar2.monitor = (MonitorData *)pEStack_3;
          OVar2.klass = (Object__Class *)pDStack_4;
          pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)0x0;
          pEVar11 = (Exception *)pDStack_20;
          pSVar5 = pSStack_6;
          if (0 < (int)pDStack_12) {
            pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)&(pDStack_20->fields)._count;
            do {
              pEStack_3 = (Exception *)OVar2.monitor;
              pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                            *)OVar2.klass;
              OVar2 = (Object)BytePacker::BytePacker_ReadInt64(bp,(MethodInfo *)0x0);
              if (pDStack_20 ==
                  (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) goto code_?;
              if ((pDStack_20->fields)._entries <= pDVar10) goto code_?;
              pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                        *)((int)&pDVar10->klass + 1);
              pDStack_9->klass =
                   (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                    *)OVar2.klass;
              pDStack_9->monitor = OVar2.monitor;
              pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)&pDStack_9->fields;
              pEVar11 = (Exception *)pDStack_20;
              pSVar5 = pSStack_6;
            } while ((int)pDVar10 < (int)pDStack_12);
          }
          goto joined_?;
        }
        goto code_?;
      }
      pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
      pEStack_3 = (Exception *)func_?(TypeInfo__System__Single);
      pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                *)0x0;
      OVar2.monitor = (MonitorData *)pEStack_3;
      OVar2.klass = (Object__Class *)pDStack_4;
      pEVar11 = pEStack_3;
      pSVar5 = pSStack_6;
      if (0 < (int)pDStack_9) {
        pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)&(((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)pEStack_3)->fields)._count;
        do {
          pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                        *)BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
          OVar2.monitor = (MonitorData *)pEStack_3;
          OVar2.klass = (Object__Class *)pDStack_4;
          if (pEStack_3 == (Exception *)0x0) goto code_?;
          if (((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Fields
                *)&pEStack_3->fields)->_entries <= pDVar10) goto code_?;
          pDVar10 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)((int)&pDVar10->klass + 1);
          pDStack_12->klass = pDStack_4;
          pDStack_12 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)&pDStack_12->monitor;
          pEVar11 = pEStack_3;
          pSVar5 = pSStack_6;
        } while ((int)pDVar10 < (int)pDStack_9);
      }
joined_?:
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pEStack_3 = (Exception *)OVar2.monitor;
      pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                    *)OVar2.klass;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (data,(Object *)pSVar5,(Object *)pEVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
code_?:
      iStack_1 = iStack_1 + 1;
    } while (iStack_1 < numNameValuePairs);
  }
  return;
code_?:
  pEStack_3 = (Exception *)OVar2.monitor;
  pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                *)OVar2.klass;
  func_?();
code_?:
  uVar21 = func_?(&TypeInfo__MV__Common__HashtableDataType);
  func_?(uVar21);
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc4,(MethodInfo *)0x0);
  str2 = (String *)func_?(&StringLiteral__from_WriteDataToBytePacker_);
  str0 = (String *)func_?(&StringLiteral_Trying_to_read_unsupported_type_);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar5,str2,(MethodInfo *)0x0);
  uVar21 = func_?(&TypeInfo__System__Exception);
  pEVar11 = (Exception *)func_?(uVar21);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar11,pSVar5,(MethodInfo *)0x0);
  pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                *)func_?(&
                                  MethodInfo__MV__WorldObject__BytePackerFunctions__BytePackerFunctionsVersion11__GetHashTableFromBytePacker_MV__WorldObject__BytePacker__System__Collections__Generic__Dictionary<System::Object,_System::Object>__int_
                                 );
  pEStack_3 = pEVar11;
  func_?();
  OVar2.monitor = (MonitorData *)pEStack_3;
  OVar2.klass = (Object__Class *)pDStack_4;
code_?:
  pEStack_3 = (Exception *)OVar2.monitor;
  pDStack_4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                *)OVar2.klass;
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  this = bp;
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    puStack_1 = (undefined *)BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    this_01 = (BytePacker *)BytePacker::BytePacker_ReadSingle(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this_01,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    iVar3 = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
    BytePackerFunctionsVersion11_GetHashTableFromBytePacker
              (this,(Dictionary_2_System_Object_System_Object_ *)pDVar2,iVar3,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar4 = (Object *)((int)&bp + 3);
    bp = (BytePacker *)((uint)bp & 0xffffff);
    pOVar5 = (Object *)func_?();
    pOVar6 = (Object *)func_?();
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_7 = 1;
      pOVar5 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_7);
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffd8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_8 = 2;
      pOVar5 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStack_8);
      puStack_9 = puStack_1;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&puStack_9);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      pOVar6 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffff84);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?();
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar5,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (readRuntimeData != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        bStack_10 = BytePacker::BytePacker_ReadByte(this,(MethodInfo *)0x0);
        if ((bStack_10 & 1) != 0) {
          BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
          pWVar11 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          pOVar4 = (Object *)func_?();
          pOVar5 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pWVar11,pOVar4,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        if ((bStack_10 & 2) != 0) {
          BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
          bStack_10 = 10;
          pWVar11 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          pOVar4 = (Object *)func_?();
          pOVar5 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pWVar11,pOVar4,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        iVar3 = BytePacker::BytePacker_ReadInt32(this,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (this,(Dictionary_2_System_Object_System_Object_ *)this_00,iVar3,(MethodInfo *)0x0
                  );
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)&stack0xfffffff2;
        pOVar4 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      return (Dictionary_2_System_Object_System_Object_ *)pDVar2;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pDVar13 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar12)();
  return pDVar13;
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

