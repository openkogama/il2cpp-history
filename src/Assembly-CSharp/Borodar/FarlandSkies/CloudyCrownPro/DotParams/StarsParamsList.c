
/* StarsParam GetParamPerTime(Single) */

StarsParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
StarsParamsList_GetParamPerTime(StarsParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.SortedParams;
  if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)pDVar1,
                        MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__
                       );
    if ((int)pIVar2 < 1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Stars_params_list_is_empty,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.SortedParams;
      pSVar3 = (ScaleAnimationBase *)
               func_?(
                              TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam
                              );
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                         (&CStack_5,(MethodInfo *)0x0);
      fVar6 = pCVar4->g;
      fVar7 = pCVar4->b;
      fVar8 = pCVar4->a;
      (pSVar3->fields).state = (int32_t)pCVar4->r;
      (pSVar3->fields).originalScale.x = fVar6;
      (pSVar3->fields).originalScale.y = fVar7;
      (pSVar3->fields).originalScale.z = fVar8;
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,in_stack_9);
      if (pDVar1 == (DotParamsList_1_StarsParam_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                ((SortedList_2_System_Single_System_Object_ *)pDVar1,0.0,(Object *)pSVar3,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_
                );
    }
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
      pIVar2 = (IList_1_VoxelHit_ *)
               DotParamsList`1[StarsParam]::DotParamsList_1_StarsParam__FindIndexPerTime
                         (pDVar1,currentTime,
                          MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_
                         );
      if ((int)pIVar2 < 1) {
        pDVar1 = (this->fields)._.SortedParams;
        if (pDVar1 == (DotParamsList_1_StarsParam_ *)0x0) goto code_?;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pDVar1,
                            MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__
                           );
      }
      pDVar1 = (this->fields)._.SortedParams;
      if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
        pIVar10 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                  Object]::SortedList_2_System_Single_System_Object__get_Keys
                            ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                            );
        if (pIVar10 != (IList_1_System_Single_ *)0x0) {
          puVar11 = (undefined1 *)((int)&pIVar2[-1].monitor + 3);
          fVar12 = (float10)func_?(3,TypeInfo__System__Collections__Generic__IList<float>,
                                            pIVar10,puVar11);
          pDVar1 = (this->fields)._.SortedParams;
          fVar6 = (float)fVar12;
          if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
            pIVar13 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                      Object]::SortedList_2_System_Single_System_Object__get_Values
                                ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                                );
            if (pIVar13 != (IList_1_System_Object_ *)0x0) {
              iVar14 = func_?(3,
                                       TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                                       ,pIVar13,puVar11);
              if (iVar14 != 0) {
                CStack_5.r = *(float *)(iVar14 + 0xc);
                CStack_5.g = *(float *)(iVar14 + 0x10);
                CStack_5.b = *(float *)(iVar14 + 0x14);
                CStack_5.a = *(float *)(iVar14 + 0x18);
                pDVar1 = (this->fields)._.SortedParams;
                if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                  pIVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)pDVar1,
                                       MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__
                                      );
                  if ((int)pIVar15 <= (int)pIVar2) {
                    pIVar2 = (IList_1_VoxelHit_ *)0x0;
                  }
                  pDVar1 = (this->fields)._.SortedParams;
                  if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                    pIVar10 = System.dll::System::Collections::Generic::SortedList`2[System::
                              Single,System::Object]::
                              SortedList_2_System_Single_System_Object__get_Keys
                                        ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                                        );
                    if (pIVar10 != (IList_1_System_Single_ *)0x0) {
                      fVar12 = (float10)func_?(3,
                                                  TypeInfo__System__Collections__Generic__IList<float>
                                                  ,pIVar10,pIVar2);
                      pDVar1 = (this->fields)._.SortedParams;
                      fStack_16 = (float)fVar12;
                      if (pDVar1 != (DotParamsList_1_StarsParam_ *)0x0) {
                        pIVar13 = System.dll::System::Collections::Generic::SortedList`2[System::
                                  Single,System::Object]::
                                  SortedList_2_System_Single_System_Object__get_Values
                                            ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                                            );
                        if (pIVar13 != (IList_1_System_Object_ *)0x0) {
                          iVar14 = func_?(3,
                                                  TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                                                  ,pIVar13,pIVar2);
                          if (iVar14 != 0) {
                            uStack_17 = *(undefined4 *)(iVar14 + 0xc);
                            uStack_18 = *(undefined4 *)(iVar14 + 0x10);
                            uStack_19 = *(undefined4 *)(iVar14 + 0x14);
                            fStack_20 = *(float *)(iVar14 + 0x18);
                            if (fVar6 < currentTime) {
                              this = (StarsParamsList *)(currentTime - fVar6);
                            }
                            else {
                              this = (StarsParamsList *)((_UNK_? - fVar6) + currentTime);
                            }
                            if (fStack_16 <= fVar6) {
                              fStack_16 = fStack_16 + _UNK_?;
                            }
                            fStack_16 = fStack_16 - fVar6;
                            method_00 = 
                            TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam;
                            pSVar3 = (ScaleAnimationBase *)func_?();
                            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                                               ((Color *)&stack0xffffffc8,(MethodInfo *)0x0);
                            fVar6 = pCVar4->g;
                            fVar7 = pCVar4->b;
                            fVar8 = pCVar4->a;
                            (pSVar3->fields).state = (int32_t)pCVar4->r;
                            (pSVar3->fields).originalScale.x = fVar6;
                            (pSVar3->fields).originalScale.y = fVar7;
                            (pSVar3->fields).originalScale.z = fVar8;
                            ScaleAnimationBase::ScaleAnimationBase_Play
                                      (pSVar3,0.0,(MethodInfo *)method_00);
                            a.g = CStack_5.g;
                            a.r = CStack_5.r;
                            a.b = CStack_5.b;
                            a.a = CStack_5.a;
                            b.g = (float)uStack_18;
                            b.r = (float)uStack_17;
                            b.b = (float)uStack_19;
                            b.a = fStack_20;
                            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                               ((Color *)&stack0xffffffc8,a,b,(float)this / fStack_16
                                                ,(MethodInfo *)0x0);
                            fVar6 = pCVar4->g;
                            fVar7 = pCVar4->b;
                            fVar8 = pCVar4->a;
                            (pSVar3->fields).state = (int32_t)pCVar4->r;
                            (pSVar3->fields).originalScale.x = fVar6;
                            (pSVar3->fields).originalScale.y = fVar7;
                            (pSVar3->fields).originalScale.z = fVar8;
                            return (StarsParam *)pSVar3;
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
    }
  }
code_?:
  func_?(0);
  pcVar21 = (code *)swi(3);
  pSVar22 = (StarsParam *)(*pcVar21)();
  return pSVar22;
}


/* StarsParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
     StarsParamsList__ctor(StarsParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SortedParamsList`1[StarsParam]::SortedParamsList_1_StarsParam___ctor
            ((SortedParamsList_1_StarsParam_ *)this,
             MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__
            );
  return;
}

