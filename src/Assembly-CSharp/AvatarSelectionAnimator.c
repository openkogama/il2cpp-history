
/* Int32 GetNextIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_GetNextIndex
                  (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    cRam_? = '\x01';
  }
  if ((this->fields).forward != 0) {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 != (List_1_MVBody_ *)0x0) {
      iVar2 = (this->fields).currentIndex;
      iVar3 = 0;
      if (iVar2 != (pLVar1->fields)._size + -1) {
        iVar3 = iVar2 + 1;
      }
      return iVar3;
    }
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  iVar2 = (this->fields).currentIndex;
  if (iVar2 == 0) {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    iVar2 = (pLVar1->fields)._size;
  }
  return iVar2 + -1;
}


/* Void SetTargetIndex(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndex
               (AvatarSelectionAnimator *this,int32_t currentIndexInp,int32_t TargetIndexInp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  if ((currentIndexInp == TargetIndexInp) && ((this->fields).targetIndex == -1)) {
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).Bodies;
    if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar1,currentIndexInp,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       RVar2 != (RegexCharClass_SingleRange)0x0)) {
      uVar3._0_4_ = (this->fields).displayPos.x;
      uVar3._4_4_ = (this->fields).displayPos.y;
      (**(code **)(*(int *)RVar2 + 400))
                (RVar2,uVar3,(this->fields).displayPos.z,*(undefined4 *)(*(int *)RVar2 + 0x194));
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).Bodies;
      if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar1,currentIndexInp,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (RVar2 != (RegexCharClass_SingleRange)0x0) {
          uVar5._0_4_ = (pVVar4->oneVector).x;
          uVar5._4_4_ = (pVVar4->oneVector).y;
          (**(code **)(*(int *)RVar2 + 0x108))
                    (RVar2,uVar5,(pVVar4->oneVector).z,*(undefined4 *)(*(int *)RVar2 + 0x10c));
          return;
        }
      }
    }
  }
  else {
    (this->fields).targetIndex = TargetIndexInp;
    if ((this->fields).currentIndex == -1) {
      (this->fields).currentIndex = currentIndexInp;
    }
    iVar6 = (this->fields).currentIndex;
    if (iVar6 < TargetIndexInp) {
      iVar7 = TargetIndexInp - iVar6;
    }
    else {
      pLVar8 = (this->fields).Bodies;
      if (pLVar8 == (List_1_MVBody_ *)0x0) goto code_?;
      iVar7 = TargetIndexInp + -1 + ((pLVar8->fields)._size - iVar6);
      if (TargetIndexInp < iVar6) {
        iVar6 = iVar6 - TargetIndexInp;
        goto code_?;
      }
    }
    pLVar8 = (this->fields).Bodies;
    if (pLVar8 != (List_1_MVBody_ *)0x0) {
      iVar6 = iVar6 + -1 + ((pLVar8->fields)._size - TargetIndexInp);
code_?:
      if ((bool)(this->fields).forward == iVar7 < iVar6) {
        return;
      }
      iVar9 = AvatarSelectionAnimator_GetNextIndex(this,(MethodInfo *)0x0);
      fVar10 = _UNK_? - (this->fields).time;
      (this->fields).forward = iVar7 < iVar6;
      (this->fields).currentIndex = iVar9;
      (this->fields).time = fVar10;
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetTargetIndexNoAnim(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndexNoAnim
               (AvatarSelectionAnimator *this,int32_t oldindex,int32_t TargetIndexInp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = (this->fields).currentIndex;
  if (index != -1) {
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).Bodies;
    if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
    uVar3._0_4_ = (this->fields).hidePos.x;
    uVar3._4_4_ = (this->fields).hidePos.y;
    (**(code **)(*(int *)RVar2 + 400))
              (RVar2,uVar3,(this->fields).hidePos.z,*(undefined4 *)(*(int *)RVar2 + 0x194));
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).Bodies;
    if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar1,(this->fields).currentIndex,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
    uVar5._0_4_ = (pVVar4->oneVector).x;
    uVar5._4_4_ = (pVVar4->oneVector).y;
    (**(code **)(*(int *)RVar2 + 0x108))
              (RVar2,uVar5,(pVVar4->oneVector).z,*(undefined4 *)(*(int *)RVar2 + 0x10c));
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).Bodies;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar1,oldindex,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      uVar6._0_4_ = (this->fields).hidePos.x;
      uVar6._4_4_ = (this->fields).hidePos.y;
      (**(code **)(*(int *)RVar2 + 400))
                (RVar2,uVar6,(this->fields).hidePos.z,*(undefined4 *)(*(int *)RVar2 + 0x194));
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).Bodies;
      if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar1,oldindex,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (RVar2 != (RegexCharClass_SingleRange)0x0) {
          uVar7._0_4_ = (pVVar4->oneVector).x;
          uVar7._4_4_ = (pVVar4->oneVector).y;
          (**(code **)(*(int *)RVar2 + 0x108))
                    (RVar2,uVar7,(pVVar4->oneVector).z,*(undefined4 *)(*(int *)RVar2 + 0x10c));
          pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).Bodies;
          if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar1,TargetIndexInp,
                                MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                               );
            if (RVar2 != (RegexCharClass_SingleRange)0x0) {
              uVar8._0_4_ = (this->fields).displayPos.x;
              uVar8._4_4_ = (this->fields).displayPos.y;
              (**(code **)(*(int *)RVar2 + 400))
                        (RVar2,uVar8,(this->fields).displayPos.z,
                         *(undefined4 *)(*(int *)RVar2 + 0x194));
              pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).Bodies;
              if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar1,TargetIndexInp,
                                    MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                   );
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector3);
                  cRam_? = '\x01';
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                  uVar9._0_4_ = (pVVar4->oneVector).x;
                  uVar9._4_4_ = (pVVar4->oneVector).y;
                  (**(code **)(*(int *)RVar2 + 0x108))
                            (RVar2,uVar9,(pVVar4->oneVector).z,
                             *(undefined4 *)(*(int *)RVar2 + 0x10c));
                  (this->fields).currentIndex = -1;
                  (this->fields).targetIndex = -1;
                  (this->fields).time = 0.0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_Start
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  (this->fields).addition =
       (_UNK_? - (this->fields).endmultiplier * (this->fields).timeSlowThreshold) /
       (_UNK_? - (this->fields).timeSlowThreshold);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_Update
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).targetIndex;
  if (iVar1 != -1) {
    iVar2 = (this->fields).currentIndex;
    if (iVar2 == -1) {
      return;
    }
    this = _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    uVar3 = iVar1 - iVar2;
    uVar4 = (int)uVar3 >> 0x1f;
    fVar5 = (float)(int)(((uVar3 ^ uVar4) - uVar4) + -1) + (float)_UNK_?;
    fStack_6 = (this_00->fields).baseTimeMultiplier * fVar5;
    (this_00->fields).SuperspeedFactor = fVar5;
    index = AvatarSelectionAnimator_GetNextIndex(this_00,(MethodInfo *)0x0);
    if ((this_00->fields).forward == 0) {
      this = _UNK_?;
    }
    fVar5 = (this_00->fields).time;
    pfVar7 = &(this_00->fields).timeSlowThreshold;
    if ((*pfVar7 <= fVar5 && fVar5 != *pfVar7) && (index == (this_00->fields).targetIndex)) {
      fStack_6 = (((this_00->fields).endmultiplier - (this_00->fields).addition) * fVar5 +
                 (this_00->fields).addition) * (this_00->fields).baseTimeMultiplier;
    }
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this_00->fields).Bodies;
    (this_00->fields).time = fVar8 * fStack_6 + fVar5;
    if (pLVar9 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar9,(this_00->fields).currentIndex,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      uVar11 = (this_00->fields).displayPos.x;
      uVar12 = (this_00->fields).distance.x;
      if (RVar10 != (RegexCharClass_SingleRange)0x0) {
        (**(code **)(*(int *)RVar10 + 400))
                  (RVar10,(float)uVar11 + (float)uVar12 * (float)this * (this_00->fields).time);
        pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this_00->fields).Bodies;
        if (pLVar9 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar9,(this_00->fields).currentIndex,
                              MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_)
          ;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).x;
          if (RVar10 != (RegexCharClass_SingleRange)0x0) {
            (**(code **)(*(int *)RVar10 + 0x108))
                      (RVar10,(float)uVar13 * ((float)_UNK_? - (this_00->fields).time));
            pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this_00->fields).Bodies;
            if (pLVar9 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar9,index,
                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                 );
              uVar14 = (this_00->fields).displayPos.x;
              uVar15 = (this_00->fields).distance.x;
              uVar16 = (this_00->fields).distance.x;
              if (RVar10 != (RegexCharClass_SingleRange)0x0) {
                (**(code **)(*(int *)RVar10 + 400))
                          (RVar10,((float)uVar14 +
                                  (float)uVar15 * (float)this * (this_00->fields).time) -
                                  (float)uVar16 * (float)this);
                pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this_00->fields).Bodies;
                if (pLVar9 !=
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                  RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar9,index,
                                      MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                     );
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  uVar17 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).x;
                  if (RVar10 != (RegexCharClass_SingleRange)0x0) {
                    (**(code **)(*(int *)RVar10 + 0x108))
                              (RVar10,(float)uVar17 * (this_00->fields).time);
                    if ((this_00->fields).time <= (float)_UNK_?) {
                      return;
                    }
                    pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (this_00->fields).Bodies;
                    if ((pLVar9 !=
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                       && (RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar9,(this_00->fields).currentIndex,
                                               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                              ), RVar10 != (RegexCharClass_SingleRange)0x0)) {
                      uVar18 = (this_00->fields).hidePos.x;
                      (**(code **)(*(int *)RVar10 + 400))(RVar10,uVar18);
                      pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )(this_00->fields).Bodies;
                      if (pLVar9 !=
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                      {
                        RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar9,(this_00->fields).currentIndex,
                                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                           );
                        puVar19 = (undefined8 *)func_?();
                        if (RVar10 != (RegexCharClass_SingleRange)0x0) {
                          (**(code **)(*(int *)RVar10 + 0x108))(RVar10,(int)*puVar19);
                          (this_00->fields).time = 0.0;
                          if (index != (this_00->fields).targetIndex) {
                            (this_00->fields).currentIndex = index;
                            return;
                          }
                          pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)(this_00->fields).Bodies;
                          if ((pLVar9 !=
                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) && (RVar10 = mscorlib.dll::System::Collections::Generic::
                                                 List`1[System::Text::RegularExpressions::
                                                 RegexCharClass+SingleRange]::
                                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                           (pLVar9,index,
                                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                  ), RVar10 != (RegexCharClass_SingleRange)0x0)) {
                            func_?(0x1a,RVar10);
                            pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)(this_00->fields).Bodies;
                            if (pLVar9 !=
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                              RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::
                                       Text::RegularExpressions::RegexCharClass+SingleRange]::
                                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                 (pLVar9,index,
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                 );
                              func_?();
                              if (RVar10 != (RegexCharClass_SingleRange)0x0) {
                                func_?(9,RVar10);
                                (this_00->fields).currentIndex = -1;
                                (this_00->fields).targetIndex = -1;
                                (this_00->fields).SuperspeedFactor = 1.0;
                                return;
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
    }
    func_?();
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
  return;
}


/* AvatarSelectionAnimator() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator__ctor
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVBody>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVBody_ *)func_?(TypeInfo__System__Collections__Generic__List<MVBody>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVBody>__List__);
  ppLVar1 = &(this->fields).Bodies;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  (this->fields).currentIndex = -1;
  (this->fields).targetIndex = -1;
  (this->fields).baseTimeMultiplier = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->rightVector).x;
  uVar4 = (pVVar2->rightVector).y;
  fVar5 = (pVVar2->rightVector).z * _UNK_?;
  fVar6 = (float)uVar4 * _UNK_?;
  (this->fields).distance.x = (float)uVar3 * _UNK_?;
  (this->fields).distance.y = fVar6;
  (this->fields).distance.z = fVar5;
  (this->fields).forward = 1;
  (this->fields).timeSlowThreshold = 0.8;
  (this->fields).endmultiplier = 0.01;
  (this->fields).SuperspeedFactor = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

