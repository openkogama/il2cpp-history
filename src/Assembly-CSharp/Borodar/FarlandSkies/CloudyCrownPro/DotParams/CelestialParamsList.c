
/* CelestialParam GetParamPerTime(Single) */

CelestialParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
CelestialParamsList_GetParamPerTime(CelestialParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Celestial_params_list_is_empty);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.SortedParams;
  if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
    if ((pDVar1->fields)._._size < 1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Celestial_params_list_is_empty,(MethodInfo *)0x0);
      this_00 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)
              FUN_?(
                           TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam
                           );
      pOVar2 = _UNK_?;
      pMVar3 = _UNK_?;
      *(undefined4 *)&value[3].monitor = 0x3f800000;
      value[1].monitor = pMVar3;
      value[2].klass = pOVar2;
      value[2].monitor = pMVar3;
      value[3].klass = pOVar2;
      if (this_00 == (SortedList_2_System_Single_System_Object_ *)0x0) goto DAT_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                (this_00,0.0,value,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_
                );
    }
    pMVar4 = 
    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
    ;
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
      list = (IList_1_System_Single_ *)
             FUN_?(pDVar1,(MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
                                   ->klass->rgctx_data[2].method)->klass->rgctx_data[0x1c].
                                  rgctxDataDummy);
      iVar5 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                         (list,currentTime,pMVar4->klass->rgctx_data[3].method);
      pDVar1 = (this->fields)._.SortedParams;
      if (iVar5 < 1) {
        if (pDVar1 == (DotParamsList_1_CelestialParam_ *)0x0) goto DAT_?;
        iVar5 = (pDVar1->fields)._._size;
      }
      else if (pDVar1 == (DotParamsList_1_CelestialParam_ *)0x0) goto DAT_?;
      lVar6 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                                    ->klass->rgctx_data[0x1c].rgctxDataDummy);
      if (lVar6 != 0) {
        fVar7 = (float)FUN_?(extraout_XMM0_Qa,
                                      TypeInfo__System__Collections__Generic__IList<float>,lVar6,
                                      iVar5 + -1);
        pDVar1 = (this->fields)._.SortedParams;
        if (((pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) &&
            (lVar6 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                           ->klass->rgctx_data[0x21].rgctxDataDummy), lVar6 != 0))
           && (lVar6 = FUN_?(extraout_XMM0_Qa_00,
                                      TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                      ,lVar6,iVar5 + -1), lVar6 != 0)) {
          fVar8 = *(float *)(lVar6 + 0x18);
          fVar9 = *(float *)(lVar6 + 0x1c);
          fVar10 = *(float *)(lVar6 + 0x20);
          fVar11 = *(float *)(lVar6 + 0x24);
          fVar12 = *(float *)(lVar6 + 0x28);
          fVar13 = *(float *)(lVar6 + 0x2c);
          fVar14 = *(float *)(lVar6 + 0x30);
          fVar15 = *(float *)(lVar6 + 0x34);
          fVar16 = *(float *)(lVar6 + 0x38);
          pDVar1 = (this->fields)._.SortedParams;
          if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
            iVar17 = 0;
            if (iVar5 < (pDVar1->fields)._._size) {
              iVar17 = iVar5;
            }
            lVar6 = FUN_?((this->fields)._.SortedParams,
                                   MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                                   ->klass->rgctx_data[0x1c].rgctxDataDummy);
            if (lVar6 != 0) {
              fVar18 = (float)FUN_?(extraout_XMM0_Qa_01,
                                            TypeInfo__System__Collections__Generic__IList<float>,
                                            lVar6,iVar17);
              pDVar1 = (this->fields)._.SortedParams;
              if (((pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) &&
                  (lVar6 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                                 ->klass->rgctx_data[0x21].rgctxDataDummy),
                  lVar6 != 0)) &&
                 (lVar6 = FUN_?(extraout_XMM0_Qa_02,
                                         TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                         ,lVar6,iVar17), lVar6 != 0)) {
                fVar19 = *(float *)(lVar6 + 0x38);
                fVar20 = *(float *)(lVar6 + 0x28);
                fVar21 = *(float *)(lVar6 + 0x2c);
                fVar22 = *(float *)(lVar6 + 0x30);
                fVar23 = *(float *)(lVar6 + 0x34);
                fVar24 = *(float *)(lVar6 + 0x18);
                fVar25 = *(float *)(lVar6 + 0x1c);
                fVar26 = *(float *)(lVar6 + 0x20);
                fVar27 = *(float *)(lVar6 + 0x24);
                if (currentTime <= fVar7) {
                  fVar28 = (_UNK_? - fVar7) + currentTime;
                }
                else {
                  fVar28 = currentTime - fVar7;
                }
                if (fVar18 <= fVar7) {
                  fVar18 = fVar18 + _UNK_?;
                }
                fVar28 = fVar28 / (fVar18 - fVar7);
                pCVar29 = (CelestialParam *)
                          FUN_?(
                                       TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam
                                       );
                fVar7 = _UNK_?;
                if (fVar28 < 0.0) {
                  fVar18 = 0.0;
                }
                else {
                  fVar18 = _UNK_?;
                  if (fVar28 <= _UNK_?) {
                    fVar18 = fVar28;
                  }
                }
                (pCVar29->fields).TintColor.g = (fVar24 - fVar8) * fVar18 + fVar8;
                (pCVar29->fields).TintColor.b = (fVar25 - fVar9) * fVar18 + fVar9;
                (pCVar29->fields).TintColor.a = (fVar26 - fVar10) * fVar18 + fVar10;
                (pCVar29->fields).LightColor.r = (fVar27 - fVar11) * fVar18 + fVar11;
                if (fVar28 < 0.0) {
                  fVar8 = 0.0;
                }
                else {
                  fVar8 = fVar7;
                  if (fVar28 <= fVar7) {
                    fVar8 = fVar28;
                  }
                }
                (pCVar29->fields).LightColor.g = (fVar20 - fVar12) * fVar8 + fVar12;
                (pCVar29->fields).LightColor.b = (fVar21 - fVar13) * fVar8 + fVar13;
                (pCVar29->fields).LightColor.a = (fVar22 - fVar14) * fVar8 + fVar14;
                (pCVar29->fields).LightIntencity = (fVar23 - fVar15) * fVar8 + fVar15;
                if (fVar28 < 0.0) {
                  fVar28 = 0.0;
                }
                else if (fVar7 < fVar28) {
                  fVar28 = fVar7;
                }
                *(float *)&pCVar29[1].klass = (fVar19 - fVar16) * fVar28 + fVar16;
                return pCVar29;
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  pCVar29 = (CelestialParam *)(*pcVar30)();
  return pCVar29;
}


/* CelestialParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
     CelestialParamsList__ctor(CelestialParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__
           ->klass->rgctx_data[8].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pCVar2 = (CelestialParam__Array *)FUN_?(pvVar1,0);
  bVar3 = iRam_? != 0;
  (this->fields)._.Params = pCVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

