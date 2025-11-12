
/* CelestialParam GetParamPerTime(Single) */

CelestialParam * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::CelestialParamsList_GetParamPerTime(CelestialParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning((Object *)StringLiteral_Celestial_params_list_is_empty,(MethodInfo *)0x0);
      this_00 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)FUN_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
      *(undefined4 *)&value[3].monitor = 0x3f800000;
      value[1].monitor = (MonitorData *)0x3f0000003f000000;
      value[2].klass = (Object__Class *)0x3f8000003f000000;
      value[2].monitor = (MonitorData *)0x3f0000003f000000;
      value[3].klass = (Object__Class *)0x3f8000003f000000;
      if (this_00 == (SortedList_2_System_Single_System_Object_ *)0x0) goto DAT_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__Add(this_00,0.0,value,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_);
    }
    pMVar2 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_;
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
      list = (IList_1_System_Single_ *)FUN_?(pDVar1,(MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_->klass->rgctx_data[2].method)->klass->rgctx_data[0x1c].rgctxDataDummy);
      iVar3 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch(list,currentTime,pMVar2->klass->rgctx_data[3].method);
      pDVar1 = (this->fields)._.SortedParams;
      if (iVar3 < 1) {
        if (pDVar1 == (DotParamsList_1_CelestialParam_ *)0x0) goto DAT_?;
        iVar3 = (pDVar1->fields)._._size;
      }
      else if (pDVar1 == (DotParamsList_1_CelestialParam_ *)0x0) goto DAT_?;
      lVar4 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__->klass->rgctx_data[0x1c].rgctxDataDummy);
      if (lVar4 != 0) {
        fVar5 = (float)FUN_?(extraout_XMM0_Qa,TypeInfo__System__Collections__Generic__IList<float>,lVar4,iVar3 + -1);
        pDVar1 = (this->fields)._.SortedParams;
        if (((pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) && (lVar4 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__->klass->rgctx_data[0x21].rgctxDataDummy), lVar4 != 0)) && (lVar4 = FUN_?(extraout_XMM0_Qa_00,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>,lVar4,iVar3 + -1), lVar4 != 0)) {
          fVar6 = *(float *)(lVar4 + 0x18);
          fVar7 = *(float *)(lVar4 + 0x1c);
          fVar8 = *(float *)(lVar4 + 0x20);
          fVar9 = *(float *)(lVar4 + 0x24);
          fVar10 = *(float *)(lVar4 + 0x28);
          fVar11 = *(float *)(lVar4 + 0x2c);
          fVar12 = *(float *)(lVar4 + 0x30);
          fVar13 = *(float *)(lVar4 + 0x34);
          fVar14 = *(float *)(lVar4 + 0x38);
          pDVar1 = (this->fields)._.SortedParams;
          if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
            iVar15 = 0;
            if (iVar3 < (pDVar1->fields)._._size) {
              iVar15 = iVar3;
            }
            lVar4 = FUN_?((this->fields)._.SortedParams,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__->klass->rgctx_data[0x1c].rgctxDataDummy);
            if (lVar4 != 0) {
              fVar16 = (float)FUN_?(extraout_XMM0_Qa_01,TypeInfo__System__Collections__Generic__IList<float>,lVar4,iVar15);
              pDVar1 = (this->fields)._.SortedParams;
              if (((pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) && (lVar4 = FUN_?(pDVar1,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__->klass->rgctx_data[0x21].rgctxDataDummy), lVar4 != 0)) && (lVar4 = FUN_?(extraout_XMM0_Qa_02,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>,lVar4,iVar15), lVar4 != 0)) {
                fVar17 = *(float *)(lVar4 + 0x38);
                fVar18 = *(float *)(lVar4 + 0x28);
                fVar19 = *(float *)(lVar4 + 0x2c);
                fVar20 = *(float *)(lVar4 + 0x30);
                fVar21 = *(float *)(lVar4 + 0x34);
                fVar22 = *(float *)(lVar4 + 0x18);
                fVar23 = *(float *)(lVar4 + 0x1c);
                fVar24 = *(float *)(lVar4 + 0x20);
                fVar25 = *(float *)(lVar4 + 0x24);
                if (currentTime <= fVar5) {
                  fVar26 = (100.0 - fVar5) + currentTime;
                }
                else {
                  fVar26 = currentTime - fVar5;
                }
                if (fVar16 <= fVar5) {
                  fVar16 = fVar16 + 100.0;
                }
                fVar26 = fVar26 / (fVar16 - fVar5);
                pCVar27 = (CelestialParam *)FUN_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
                if (fVar26 < 0.0) {
                  fVar5 = 0.0;
                }
                else {
                  fVar5 = fVar26;
                  if (1.0 < fVar26) {
                    fVar5 = 1.0;
                  }
                }
                (pCVar27->fields).TintColor.g = (fVar22 - fVar6) * fVar5 + fVar6;
                (pCVar27->fields).TintColor.b = (fVar23 - fVar7) * fVar5 + fVar7;
                (pCVar27->fields).TintColor.a = (fVar24 - fVar8) * fVar5 + fVar8;
                (pCVar27->fields).LightColor.r = (fVar25 - fVar9) * fVar5 + fVar9;
                if (fVar26 < 0.0) {
                  fVar5 = 0.0;
                }
                else {
                  fVar5 = fVar26;
                  if (1.0 < fVar26) {
                    fVar5 = 1.0;
                  }
                }
                (pCVar27->fields).LightColor.g = (fVar18 - fVar10) * fVar5 + fVar10;
                (pCVar27->fields).LightColor.b = (fVar19 - fVar11) * fVar5 + fVar11;
                (pCVar27->fields).LightColor.a = (fVar20 - fVar12) * fVar5 + fVar12;
                (pCVar27->fields).LightIntencity = (fVar21 - fVar13) * fVar5 + fVar13;
                if (fVar26 < 0.0) {
                  fVar26 = 0.0;
                }
                else if (1.0 < fVar26) {
                  fVar26 = 1.0;
                }
                *(float *)&pCVar27[1].klass = (fVar17 - fVar14) * fVar26 + fVar14;
                return pCVar27;
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
  pCVar27 = (CelestialParam *)(*pcVar28)();
  return pCVar27;
}


/* CelestialParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::CelestialParamsList__ctor(CelestialParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__->klass->rgctx_data[8].rgctxDataDummy;
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

