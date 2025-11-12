
/* StarsParam GetParamPerTime(Single) */

StarsParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
StarsParamsList_GetParamPerTime(StarsParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Stars_params_list_is_empty);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.SortedParams;
  if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
    if ((pDVar1->fields)._._size < 1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Stars_params_list_is_empty,(MethodInfo *)0x0);
      this_00 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)
              FUN_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam);
      pOVar2 = _UNK_?;
      value[1].monitor = _UNK_?;
      value[2].klass = pOVar2;
      if (this_00 == (SortedList_2_System_Single_System_Object_ *)0x0) goto DAT_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                (this_00,0.0,value,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_
                );
    }
    pMVar3 = 
    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_
    ;
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
      list = (IList_1_System_Single_ *)
             FUN_?(pDVar1,(MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_
                                   ->klass->rgctx_data[2].method)->klass->rgctx_data[0x1c].
                                  rgctxDataDummy);
      iVar4 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                         (list,currentTime,pMVar3->klass->rgctx_data[3].method);
      pDVar1 = (this->fields)._.SortedParams;
      if (iVar4 < 1) {
        if (pDVar1 == (DotParamsList_1_StarsParam_ *)0x0) goto DAT_?;
        iVar4 = (pDVar1->fields)._._size;
      }
      else if (pDVar1 == (DotParamsList_1_StarsParam_ *)0x0) goto DAT_?;
      lVar5 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                                    ->klass->rgctx_data[0x1c].rgctxDataDummy);
      if (lVar5 != 0) {
        fVar6 = (float)FUN_?(extraout_XMM0_Qa,
                                      TypeInfo__System__Collections__Generic__IList<float>,lVar5,
                                      iVar4 + -1);
        pDVar1 = (this->fields)._.SortedParams;
        if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
          lVar5 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                                        ->klass->rgctx_data[0x21].rgctxDataDummy);
          if (lVar5 != 0) {
            lVar5 = FUN_?(extraout_XMM0_Qa_00,
                                   TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                                   ,lVar5,iVar4 + -1);
            if (lVar5 != 0) {
              fVar7 = *(float *)(lVar5 + 0x18);
              fVar8 = *(float *)(lVar5 + 0x1c);
              fVar9 = *(float *)(lVar5 + 0x20);
              fVar10 = *(float *)(lVar5 + 0x24);
              pDVar1 = (this->fields)._.SortedParams;
              if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                iVar11 = 0;
                if (iVar4 < (pDVar1->fields)._._size) {
                  iVar11 = iVar4;
                }
                lVar5 = FUN_?((this->fields)._.SortedParams,
                                       MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                                       ->klass->rgctx_data[0x1c].rgctxDataDummy);
                if (lVar5 != 0) {
                  fVar12 = (float)FUN_?(extraout_XMM0_Qa_01,
                                                TypeInfo__System__Collections__Generic__IList<float>
                                                ,lVar5,iVar11);
                  pDVar1 = (this->fields)._.SortedParams;
                  if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                    lVar5 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                                                  ->klass->rgctx_data[0x21].rgctxDataDummy);
                    if (lVar5 != 0) {
                      lVar5 = FUN_?(extraout_XMM0_Qa_02,
                                             TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                                             ,lVar5,iVar11);
                      if (lVar5 != 0) {
                        fVar13 = *(float *)(lVar5 + 0x18);
                        fVar14 = *(float *)(lVar5 + 0x1c);
                        fVar15 = *(float *)(lVar5 + 0x20);
                        fVar16 = *(float *)(lVar5 + 0x24);
                        if (currentTime <= fVar6) {
                          fVar17 = (_UNK_? - fVar6) + currentTime;
                        }
                        else {
                          fVar17 = currentTime - fVar6;
                        }
                        if (fVar12 <= fVar6) {
                          fVar12 = fVar12 + _UNK_?;
                        }
                        pSVar18 = (StarsParam *)
                                  FUN_?(
                                               TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam
                                               );
                        fVar17 = fVar17 / (fVar12 - fVar6);
                        if (fVar17 < 0.0) {
                          fVar17 = 0.0;
                        }
                        else if (_UNK_? < fVar17) {
                          fVar17 = _UNK_?;
                        }
                        (pSVar18->fields).TintColor.g = (fVar13 - fVar7) * fVar17 + fVar7;
                        (pSVar18->fields).TintColor.b = (fVar14 - fVar8) * fVar17 + fVar8;
                        (pSVar18->fields).TintColor.a = (fVar15 - fVar9) * fVar17 + fVar9;
                        *(float *)&pSVar18->field_0x24 = (fVar16 - fVar10) * fVar17 + fVar10;
                        return pSVar18;
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
DAT_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  pSVar18 = (StarsParam *)(*pcVar19)();
  return pSVar18;
}


/* StarsParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
     StarsParamsList__ctor(StarsParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__
           ->klass->rgctx_data[8].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pSVar2 = (StarsParam__Array *)FUN_?(pvVar1,0);
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

