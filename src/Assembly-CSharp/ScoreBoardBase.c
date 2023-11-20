
/* Void ChangeStatType(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ChangeStatType
               (ScoreBoardBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  (this->fields).statType = (undefined1)statType;
  (*(code *)(this->klass->vtable).ReSortScoreBoard.method)
            (this,(this->klass->vtable).IsNewScoreBetter.methodPtr);
  return;
}


/* Color GetBackgroundColor(Int32) */

Color * Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_GetBackgroundColor
                  (Color *__return_storage_ptr__,ScoreBoardBase *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__Styles;
  uVar2 = (TypeInfo__Styles->_1).cctor_finished_or_no_cctor;
  __return_storage_ptr__->r = 0.0;
  __return_storage_ptr__->g = 0.0;
  __return_storage_ptr__->b = 0.0;
  __return_storage_ptr__->a = 0.0;
  if (uVar2 == 0) {
    func_?(pSVar1);
  }
  pCVar3 = Styles::Styles_GetColor
                     (&CStack_4,ColorStyle__Enum_OffWhiteTransparent,(MethodInfo *)0x0);
  fVar5 = pCVar3->g;
  fVar6 = pCVar3->b;
  fVar7 = pCVar3->a;
  fVar8 = (this->fields).backgroundAlpha;
  __return_storage_ptr__->r = pCVar3->r;
  __return_storage_ptr__->g = fVar5;
  __return_storage_ptr__->b = fVar6;
  __return_storage_ptr__->a = fVar7;
  __return_storage_ptr__->a = fVar8;
  return __return_storage_ptr__;
}


/* Boolean HandleAlreadyOnScoreBoard(Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_HandleAlreadyOnScoreBoard
               (ScoreBoardBase *this,int32_t id,int32_t newScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).scoreBoardPlayerData;
  do {
    if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((pLVar2->fields)._size <= iVar1) {
      return 0;
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).scoreBoardPlayerData;
    if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar2,iVar1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).scoreBoardPlayerData;
    if (id == *(int *)((int)RVar5 + 0x14)) {
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,iVar1,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      bVar4 = ScoreBoardBase_IsNewScoreBetter
                        (this,newScore,*(int32_t *)((int)RVar5 + 0x18),(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).scoreBoardPlayerData;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,iVar1,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        *(int32_t *)((int)RVar5 + 0x18) = newScore;
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).scoreBoardPlayerData;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,iVar1,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        iVar1 = *(int *)((int)RVar5 + 8);
        uVar6 = func_?();
        if (iVar1 == 0) goto code_?;
        func_?(0x4b,iVar1,uVar6);
      }
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_Initialize
               (ScoreBoardBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_);
    cRam_? = '\x01';
  }
  (this->fields).statType = (undefined1)statType;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (unaff_ESI == (Delegate *)0x0) {
      (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pDStack_4 = unaff_ESI;
      pAVar2 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
      pDStack_4 = unaff_ESI;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    unaff_ESI = pDVar3;
    pDStack_4 = (Delegate *)&(pMVar1->fields).OnWinningConditionFulfilled;
    func_?();
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).scoreBoardPlayerData;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size < 1) {
        return;
      }
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        );
      if ((RVar6 != (RegexCharClass_SingleRange)0x0) &&
         (piVar7 = *(int **)((int)RVar6 + 0x1c), piVar7 != (int *)0x0)) {
        iVar5 = (**(code **)(*piVar7 + 0x170))(auStack_8,piVar7,*(undefined4 *)(*piVar7 + 0x174));
        (this->fields).backgroundAlpha = *(float *)(iVar5 + 0xc);
        return;
      }
    }
  }
  func_?();
code_?:
  pDStack_4 = unaff_ESI;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsNewScoreBetter(Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
               (ScoreBoardBase *this,int32_t newScore,int32_t oldScore,MethodInfo *method)

{
  switch((this->fields).statType) {
  case 1:
  case 3:
  case 6:
    if (oldScore < newScore) {
      return 1;
    }
    break;
  case 2:
  case 8:
    if (oldScore < 0) {
      return 1;
    }
    if (0 < newScore) {
      if (newScore < oldScore) {
        return 1;
      }
      if (oldScore == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean IsNewScoreBetter(Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
               (ScoreBoardBase *this,int32_t newScore,int32_t oldScore,int32_t newId,int32_t oldId,
               MethodInfo *method)

{
  bVar1 = ScoreBoardBase_IsNewScoreBetter(this,newScore,oldScore,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_OnDestroy
               (ScoreBoardBase *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).UnSubscribeToCallbacks.method)
            (this,(this->klass->vtable).GetBackgroundColor.methodPtr);
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_OnWinningConditionFulfilled
               (ScoreBoardBase *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined4 *)((int)RVar3 + 0x18) = 0;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      piVar4 = *(int **)((int)RVar3 + 8);
      uVar5 = (*(code *)(this->klass->vtable).ScoreIntoString.method)(this);
      if (piVar4 == (int *)0x0) break;
      (**(code **)(*piVar4 + 0x318))(piVar4,uVar5,*(undefined4 *)(*piVar4 + 0x31c));
      pLVar1 = (this->fields).scoreBoardPlayerData;
      index = index + 1;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ReSortScoreBoard
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined4 *)((int)RVar3 + 0x18) = 0xffffffff;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined4 *)((int)RVar3 + 0x14) = 0xffffffff;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined1 *)((int)RVar3 + 0x28) = 0;
      index = index + 1;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ResetScoreBoard
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined4 *)((int)RVar3 + 0x18) = 0xffffffff;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined4 *)((int)RVar3 + 0x14) = 0xffffffff;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      *(undefined1 *)((int)RVar3 + 0x28) = 0;
      index = index + 1;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ScoreIntoString(Int32) */

String * Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ScoreIntoString
                   (ScoreBoardBase *this,int32_t score,MethodInfo *method)

{
  this = (ScoreBoardBase *)CONCAT31(this._1_3_,(this->fields).statType);
  pSVar1 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                     (score,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void SetActiveMemberUI(Int32, Boolean) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SetActiveMemberUI
               (ScoreBoardBase *this,int32_t index,bool shouldBeActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).scoreBoardPlayerData;
  if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
     (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
    x = *(Object_1 **)((int)RVar2 + 0x20);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).scoreBoardPlayerData;
    if (((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
        (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           ), RVar2 != (RegexCharClass_SingleRange)0x0)) &&
       (*(GameObject **)((int)RVar2 + 0x20) != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)RVar2 + 0x20),shouldBeActive,(MethodInfo *)0x0);
      if (shouldBeActive == 0) {
        return;
      }
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if (((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
          (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), RVar2 != (RegexCharClass_SingleRange)0x0)) &&
         (piStack4 = *(int **)((int)RVar2 + 0x10), piStack4 != (int *)0x0)) {
        uStack5 = *(undefined4 *)(*piStack4 + 0x31c);
        pSStack6 = ::StringLiteral__;
        (**(code **)(*piStack4 + 0x318))();
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetPlacementTextForIndex(Int32) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SetPlacementTextForIndex
               (ScoreBoardBase *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).scoreBoardPlayerData;
  if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
     (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
    piVar3 = *(int **)((int)RVar2 + 0x10);
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x318))(piVar3);
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).scoreBoardPlayerData;
      if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
        exists = *(Object_1 **)((int)RVar2 + 0x24);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          (exists,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return;
        }
        pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).scoreBoardPlayerData;
        if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar1,index,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
          piVar3 = *(int **)((int)RVar2 + 0x24);
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x318))(piVar3);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SortNewScore(String, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SortNewScore
               (ScoreBoardBase *this,String *playerName,int32_t id,int32_t scoreCount,
               bool activateMemberUI,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Add_ScoreBoardBase__ScoreData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Insert_int__ScoreBoardBase__ScoreData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = scoreCount;
  bVar2 = ScoreBoardBase_HandleAlreadyOnScoreBoard(this,id,scoreCount,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pLVar3 = (this->fields).scoreBoardPlayerData;
    if ((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    *(int32_t *)((int)RVar4 + 0x18) = iVar1;
    pLVar3 = (this->fields).scoreBoardPlayerData;
    if ((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       ((RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           ), RVar4 == (RegexCharClass_SingleRange)0x0 ||
        (*(int **)((int)RVar4 + 0xc) == (int *)0x0)))) goto code_?;
    (**(code **)(**(int **)((int)RVar4 + 0xc) + 0x318))();
    pLVar3 = (this->fields).scoreBoardPlayerData;
    if ((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    piVar5 = *(int **)((int)RVar4 + 0x1c);
    (*(code *)(this->klass->vtable).GetBackgroundColor.method)();
    if (piVar5 == (int *)0x0) goto code_?;
    (**(code **)(*piVar5 + 0x178))();
    pLVar3 = (this->fields).scoreBoardPlayerData;
    if ((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    *(int32_t *)((int)RVar4 + 0x14) = id;
    pLVar3 = (this->fields).scoreBoardPlayerData;
    if ((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    scoreCount = *(int32_t *)((int)RVar4 + 8);
    (*(code *)(this->klass->vtable).ScoreIntoString.method)();
    if (scoreCount == 0) goto code_?;
    (**(code **)(*(int *)scoreCount + 0x318))();
    pLVar3 = (this->fields).scoreBoardPlayerData;
    if ((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    *(bool *)((int)RVar4 + 0x28) = activateMemberUI;
    if (id < 0) {
      pLVar3 = (this->fields).scoreBoardPlayerData;
      if (((pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (this->fields).scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (*(int **)((int)RVar4 + 8) == (int *)0x0)) goto code_?;
      (**(code **)(**(int **)((int)RVar4 + 8) + 0x318))();
    }
  }
  this_00 = (MethodInfo *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__List__);
  pLVar3 = (this->fields).scoreBoardPlayerData;
  scoreCount = 0;
  if (pLVar3 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (scoreCount < (pLVar3->fields)._size) {
      iVar6 = 0;
      if (this_00 == (MethodInfo *)0x0) goto code_?;
      for (; pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).scoreBoardPlayerData, iVar6 < (int)this_00->name;
          iVar6 = iVar6 + 1) {
        if ((((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar7,scoreCount,
                                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                                   ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )this_00,iVar6,
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           (pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this->fields).scoreBoardPlayerData,
           pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
        goto code_?;
        _activateMemberUI =
             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
        ;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar7,scoreCount,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          );
        if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
        _activateMemberUI = (MethodInfo *)&UNK_?;
        method = this_00;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_00,iVar6,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          );
        if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
        method = (MethodInfo *)0x7;
        _activateMemberUI = (MethodInfo *)&UNK_?;
        cVar8 = func_?();
        if (cVar8 != '\0') {
          pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).scoreBoardPlayerData;
          if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar7,scoreCount,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            );
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Insert
                    ((List_1_System_Object_ *)this_00,iVar6,(Object *)RVar4,
                     MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Insert_int__ScoreBoardBase__ScoreData_
                    );
          goto code_?;
        }
      }
      if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,scoreCount,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)RVar4,
                 MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Add_ScoreBoardBase__ScoreData_
                );
code_?:
      pLVar3 = (this->fields).scoreBoardPlayerData;
      scoreCount = scoreCount + 1;
      if (pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    (this->fields).scoreBoardPlayerData = (List_1_ScoreBoardBase_ScoreData_ *)this_00;
    func_?();
    pLVar3 = (this->fields).scoreBoardPlayerData;
    iVar6 = 0;
    if (pLVar3 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
code_?:
  if ((pLVar3->fields)._size <= iVar6) {
    (*(code *)(this->klass->vtable).__unknown_1.method)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scoreBoardPlayerData;
  scoreCount = 0;
  if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,iVar6,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  piVar5 = *(int **)((int)RVar4 + 0x10);
  scoreCount = iVar6 + 1;
  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&scoreCount,(MethodInfo *)0x0);
  if (piVar5 == (int *)0x0) goto code_?;
  iVar10 = *piVar5;
  scoreCount = *(int32_t *)(iVar10 + 0x31c);
  (**(code **)(iVar10 + 0x318))();
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scoreBoardPlayerData;
  if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,iVar6,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  pOVar11 = *(Object_1 **)((int)RVar4 + 0x24);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    (pOVar11,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).scoreBoardPlayerData;
    if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar7,iVar6,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    piVar5 = *(int **)((int)RVar4 + 0x24);
    scoreCount = iVar6 + 1;
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&scoreCount,(MethodInfo *)0x0);
    if (piVar5 == (int *)0x0) goto code_?;
    (**(code **)(*piVar5 + 0x318))();
  }
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scoreBoardPlayerData;
  if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,iVar6,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  cVar8 = *(char *)((int)RVar4 + 0x28);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scoreBoardPlayerData;
  if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (pLVar7,iVar6,
                     MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                    );
  bVar2 = (bool)pLVar7;
  if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
  pOVar11 = *(Object_1 **)((int)RVar4 + 0x20);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar12 != 0) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).scoreBoardPlayerData;
    if (((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
        (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar7,iVar6,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
       (*(GameObject **)((int)RVar4 + 0x20) == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (*(GameObject **)((int)RVar4 + 0x20),bVar2,(MethodInfo *)0x0);
    if (cVar8 != '\0') {
      pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).scoreBoardPlayerData;
      if (((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar7,iVar6,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (*(int **)((int)RVar4 + 0x10) == (int *)0x0)) goto code_?;
      (**(code **)(**(int **)((int)RVar4 + 0x10) + 0x318))();
    }
  }
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scoreBoardPlayerData;
  if (((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar7,iVar6,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
     ((*(Component **)((int)RVar4 + 0x1c) == (Component *)0x0 ||
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (*(Component **)((int)RVar4 + 0x1c),(MethodInfo *)0x0),
      this_01 == (Transform *)0x0)))) goto code_?;
  scoreCount = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
            (this_01,(MethodInfo *)0x0);
  pLVar3 = (this->fields).scoreBoardPlayerData;
  iVar6 = iVar6 + 1;
  if (pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}

