
/* SkyParam GetParamPerTime(Single) */

SkyParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
SkyParamsList_GetParamPerTime(SkyParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sky_params_list_is_empty);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.SortedParams;
  if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
    if ((pDVar1->fields)._._size < 1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Sky_params_list_is_empty,(MethodInfo *)0x0);
      this_00 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)
              FUN_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
      pOVar2 = _UNK_?;
      pMVar3 = _UNK_?;
      value[1].monitor = _UNK_?;
      value[2].klass = pOVar2;
      value[2].monitor = pMVar3;
      value[3].klass = pOVar2;
      if (this_00 == (SortedList_2_System_Single_System_Object_ *)0x0) goto DAT_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                (this_00,0.0,value,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_
                );
    }
    pMVar4 = 
    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
    ;
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
      list = (IList_1_System_Single_ *)
             FUN_?(pDVar1,(MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
                                   ->klass->rgctx_data[2].method)->klass->rgctx_data[0x1c].
                                  rgctxDataDummy);
      iVar5 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                         (list,currentTime,pMVar4->klass->rgctx_data[3].method);
      pDVar1 = (this->fields)._.SortedParams;
      if (iVar5 < 1) {
        if (pDVar1 == (DotParamsList_1_SkyParam_ *)0x0) goto DAT_?;
        iVar5 = (pDVar1->fields)._._size;
      }
      else if (pDVar1 == (DotParamsList_1_SkyParam_ *)0x0) goto DAT_?;
      lVar6 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                                    ->klass->rgctx_data[0x1c].rgctxDataDummy);
      if (lVar6 != 0) {
        fVar7 = (float)FUN_?(extraout_XMM0_Qa,
                                      TypeInfo__System__Collections__Generic__IList<float>,lVar6,
                                      iVar5 + -1);
        pDVar1 = (this->fields)._.SortedParams;
        if (((pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) &&
            (lVar6 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                           ->klass->rgctx_data[0x21].rgctxDataDummy), lVar6 != 0))
           && (lVar6 = FUN_?(extraout_XMM0_Qa_00,
                                      TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                      ,lVar6,iVar5 + -1), lVar6 != 0)) {
          fVar8 = *(float *)(lVar6 + 0x18);
          fVar9 = *(float *)(lVar6 + 0x1c);
          fVar10 = *(float *)(lVar6 + 0x20);
          fVar11 = *(float *)(lVar6 + 0x24);
          fVar12 = *(float *)(lVar6 + 0x28);
          fVar13 = *(float *)(lVar6 + 0x2c);
          fVar14 = *(float *)(lVar6 + 0x30);
          fVar15 = *(float *)(lVar6 + 0x34);
          pDVar1 = (this->fields)._.SortedParams;
          if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
            iVar16 = 0;
            if (iVar5 < (pDVar1->fields)._._size) {
              iVar16 = iVar5;
            }
            lVar6 = FUN_?((this->fields)._.SortedParams,
                                   MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                                   ->klass->rgctx_data[0x1c].rgctxDataDummy);
            if (lVar6 != 0) {
              fVar17 = (float)FUN_?(extraout_XMM0_Qa_01,
                                            TypeInfo__System__Collections__Generic__IList<float>,
                                            lVar6,iVar16);
              pDVar1 = (this->fields)._.SortedParams;
              if (((pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) &&
                  (lVar6 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                                 ->klass->rgctx_data[0x21].rgctxDataDummy),
                  lVar6 != 0)) &&
                 (lVar6 = FUN_?(extraout_XMM0_Qa_02,
                                         TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                         ,lVar6,iVar16), lVar6 != 0)) {
                fVar18 = *(float *)(lVar6 + 0x28);
                fVar19 = *(float *)(lVar6 + 0x2c);
                fVar20 = *(float *)(lVar6 + 0x30);
                fVar21 = *(float *)(lVar6 + 0x34);
                fVar22 = *(float *)(lVar6 + 0x18);
                fVar23 = *(float *)(lVar6 + 0x1c);
                fVar24 = *(float *)(lVar6 + 0x20);
                fVar25 = *(float *)(lVar6 + 0x24);
                if (currentTime <= fVar7) {
                  fVar26 = (_UNK_? - fVar7) + currentTime;
                }
                else {
                  fVar26 = currentTime - fVar7;
                }
                if (fVar17 <= fVar7) {
                  fVar17 = fVar17 + _UNK_?;
                }
                fVar26 = fVar26 / (fVar17 - fVar7);
                pSVar27 = (SkyParam *)
                          FUN_?(
                                       TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam
                                       );
                fVar7 = _UNK_?;
                if (fVar26 < 0.0) {
                  fVar17 = 0.0;
                }
                else {
                  fVar17 = _UNK_?;
                  if (fVar26 <= _UNK_?) {
                    fVar17 = fVar26;
                  }
                }
                (pSVar27->fields).TopColor.g = (fVar22 - fVar8) * fVar17 + fVar8;
                (pSVar27->fields).TopColor.b = (fVar23 - fVar9) * fVar17 + fVar9;
                (pSVar27->fields).TopColor.a = (fVar24 - fVar10) * fVar17 + fVar10;
                (pSVar27->fields).BottomColor.r = (fVar25 - fVar11) * fVar17 + fVar11;
                if (fVar26 < 0.0) {
                  fVar26 = 0.0;
                }
                else if (fVar7 < fVar26) {
                  fVar26 = fVar7;
                }
                (pSVar27->fields).BottomColor.g = (fVar18 - fVar12) * fVar26 + fVar12;
                (pSVar27->fields).BottomColor.b = (fVar19 - fVar13) * fVar26 + fVar13;
                (pSVar27->fields).BottomColor.a = (fVar20 - fVar14) * fVar26 + fVar14;
                *(float *)&pSVar27->field_0x34 = (fVar21 - fVar15) * fVar26 + fVar15;
                return pSVar27;
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  pSVar27 = (SkyParam *)(*pcVar28)();
  return pSVar27;
}


/* SkyParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
     SkyParamsList__ctor(SkyParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__
           ->klass->rgctx_data[8].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (SkyParam__Array *)FUN_?(pvVar1,0);
  bVar3 = iRam_? != 0;
  (this->fields)._.Params = pSVar2;
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

