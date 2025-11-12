
/* StarsParam GetParamPerTime(Single) */

StarsParam * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::StarsParamsList_GetParamPerTime(StarsParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning((Object *)StringLiteral_Stars_params_list_is_empty,(MethodInfo *)0x0);
      this_00 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)FUN_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam);
      value[1].monitor = (MonitorData *)0x3f0000003f000000;
      value[2].klass = (Object__Class *)0x3f8000003f000000;
      if (this_00 == (SortedList_2_System_Single_System_Object_ *)0x0) goto DAT_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__Add(this_00,0.0,value,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_);
    }
    pMVar2 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_;
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
      list = (IList_1_System_Single_ *)FUN_?(pDVar1,(MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_->klass->rgctx_data[2].method)->klass->rgctx_data[0x1c].rgctxDataDummy);
      iVar3 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch(list,currentTime,pMVar2->klass->rgctx_data[3].method);
      pDVar1 = (this->fields)._.SortedParams;
      if (iVar3 < 1) {
        if (pDVar1 == (DotParamsList_1_StarsParam_ *)0x0) goto DAT_?;
        iVar3 = (pDVar1->fields)._._size;
      }
      else if (pDVar1 == (DotParamsList_1_StarsParam_ *)0x0) goto DAT_?;
      lVar4 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__->klass->rgctx_data[0x1c].rgctxDataDummy);
      if (lVar4 != 0) {
        fVar5 = (float)FUN_?(extraout_XMM0_Qa,TypeInfo__System__Collections__Generic__IList<float>,lVar4,iVar3 + -1);
        pDVar1 = (this->fields)._.SortedParams;
        if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
          lVar4 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__->klass->rgctx_data[0x21].rgctxDataDummy);
          if (lVar4 != 0) {
            lVar4 = FUN_?(extraout_XMM0_Qa_00,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>,lVar4,iVar3 + -1);
            if (lVar4 != 0) {
              fVar6 = *(float *)(lVar4 + 0x18);
              fVar7 = *(float *)(lVar4 + 0x1c);
              fVar8 = *(float *)(lVar4 + 0x20);
              fVar9 = *(float *)(lVar4 + 0x24);
              pDVar1 = (this->fields)._.SortedParams;
              if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                iVar10 = 0;
                if (iVar3 < (pDVar1->fields)._._size) {
                  iVar10 = iVar3;
                }
                lVar4 = FUN_?((this->fields)._.SortedParams,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__->klass->rgctx_data[0x1c].rgctxDataDummy);
                if (lVar4 != 0) {
                  fVar11 = (float)FUN_?(extraout_XMM0_Qa_01,TypeInfo__System__Collections__Generic__IList<float>,lVar4,iVar10);
                  pDVar1 = (this->fields)._.SortedParams;
                  if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                    lVar4 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__->klass->rgctx_data[0x21].rgctxDataDummy);
                    if (lVar4 != 0) {
                      lVar4 = FUN_?(extraout_XMM0_Qa_02,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>,lVar4,iVar10);
                      if (lVar4 != 0) {
                        fVar12 = *(float *)(lVar4 + 0x18);
                        fVar13 = *(float *)(lVar4 + 0x1c);
                        fVar14 = *(float *)(lVar4 + 0x20);
                        fVar15 = *(float *)(lVar4 + 0x24);
                        if (currentTime <= fVar5) {
                          fVar16 = (100.0 - fVar5) + currentTime;
                        }
                        else {
                          fVar16 = currentTime - fVar5;
                        }
                        if (fVar11 <= fVar5) {
                          fVar11 = fVar11 + 100.0;
                        }
                        pSVar17 = (StarsParam *)FUN_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam);
                        fVar16 = fVar16 / (fVar11 - fVar5);
                        if (fVar16 < 0.0) {
                          fVar16 = 0.0;
                        }
                        else if (1.0 < fVar16) {
                          fVar16 = 1.0;
                        }
                        (pSVar17->fields).TintColor.g = (fVar12 - fVar6) * fVar16 + fVar6;
                        (pSVar17->fields).TintColor.b = (fVar13 - fVar7) * fVar16 + fVar7;
                        (pSVar17->fields).TintColor.a = (fVar14 - fVar8) * fVar16 + fVar8;
                        *(float *)&pSVar17->field_0x24 = (fVar15 - fVar9) * fVar16 + fVar9;
                        return pSVar17;
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
  pcVar18 = (code *)swi(3);
  pSVar17 = (StarsParam *)(*pcVar18)();
  return pSVar17;
}


/* StarsParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::StarsParamsList__ctor(StarsParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__->klass->rgctx_data[8].rgctxDataDummy;
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

