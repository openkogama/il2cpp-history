
/* Int32 GetNextIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_GetNextIndex
                  (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined1 *)(this->fields).currentIndex;
  if ((this->fields).forward == 0) {
    if (puVar1 != (undefined1 *)0x0) {
      return (int32_t)(puVar1 + -1);
    }
    pLVar2 = (this->fields).Bodies;
    if (pLVar2 != (List_1_MVBody_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
      return (int32_t)((int)&pOVar3[-1].monitor + 3);
    }
  }
  else {
    pLVar2 = (this->fields).Bodies;
    if (pLVar2 != (List_1_MVBody_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
      if (puVar1 != (undefined1 *)((int)&pOVar3[-1].monitor + 3)) {
        return (this->fields).currentIndex + 1;
      }
      return 0;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void SetTargetIndex(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndex
               (AvatarSelectionAnimator *this,int32_t currentIndexInp,int32_t TargetIndexInp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((currentIndexInp == TargetIndexInp) && ((this->fields).targetIndex == -1)) {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 != (List_1_MVBody_ *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          currentIndexInp,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (pIVar2 != (IEventSystemHandler *)0x0) {
        pIVar3 = pIVar2->klass;
        uVar4._0_4_ = (this->fields).displayPos.x;
        uVar4._4_4_ = (this->fields).displayPos.y;
        uVar5._0_2_ = pIVar3[2]._0.this_arg.attrs;
        uVar5._2_1_ = pIVar3[2]._0.this_arg.type;
        uVar5._3_1_ = pIVar3[2]._0.this_arg.field_0x7;
        (*(code *)pIVar3[2]._0.this_arg.data)(pIVar2,uVar4,(this->fields).displayPos.z,uVar5);
        pLVar1 = (this->fields).Bodies;
        if (pLVar1 != (List_1_MVBody_ *)0x0) {
          pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              currentIndexInp,
                              MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_)
          ;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             (&VStack_7,(MethodInfo *)0x0);
          if (pIVar2 != (IEventSystemHandler *)0x0) {
            uVar8._0_4_ = pVVar6->x;
            uVar8._4_4_ = pVVar6->y;
            (*(code *)pIVar2->klass[1]._0.methods)
                      (pIVar2,uVar8,pVVar6->z,pIVar2->klass[1]._0.nestedTypes);
            return;
          }
        }
      }
    }
code_?:
    func_?(0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar10 = (this->fields).currentIndex;
  (this->fields).targetIndex = TargetIndexInp;
  if (iVar10 == -1) {
    (this->fields).currentIndex = currentIndexInp;
    iVar10 = currentIndexInp;
  }
  if (iVar10 < TargetIndexInp) {
    iVar11 = TargetIndexInp - iVar10;
  }
  else {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    TargetIndexInp = (this->fields).targetIndex;
    iVar10 = (this->fields).currentIndex;
    iVar11 = (TargetIndexInp - iVar10) + -1 + (int)pOVar12;
  }
  if (TargetIndexInp < iVar10) {
    iVar10 = iVar10 - TargetIndexInp;
  }
  else {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    iVar10 = ((this->fields).currentIndex - (this->fields).targetIndex) + -1 + (int)pOVar12;
  }
  if ((bool)(this->fields).forward != iVar11 < iVar10) {
    iVar13 = AvatarSelectionAnimator_GetNextIndex(this,(MethodInfo *)0x0);
    fVar14 = _UNK_? - (this->fields).time;
    (this->fields).currentIndex = iVar13;
    (this->fields).forward = iVar11 < iVar10;
    (this->fields).time = fVar14;
  }
  return;
}


/* Void SetTargetIndexNoAnim(Int32, Int32) */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator_SetTargetIndexNoAnim
               (AvatarSelectionAnimator *this,int32_t oldindex,int32_t TargetIndexInp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (this->fields).currentIndex;
  if (index != -1) {
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (pIVar2 == (IEventSystemHandler *)0x0) goto code_?;
    pIVar3 = pIVar2->klass;
    uVar4._0_4_ = (this->fields).hidePos.x;
    uVar4._4_4_ = (this->fields).hidePos.y;
    uVar5._0_2_ = pIVar3[2]._0.this_arg.attrs;
    uVar5._2_1_ = pIVar3[2]._0.this_arg.type;
    uVar5._3_1_ = pIVar3[2]._0.this_arg.field_0x7;
    (*(code *)pIVar3[2]._0.this_arg.data)(pIVar2,uVar4,(this->fields).hidePos.z,uVar5);
    pLVar1 = (this->fields).Bodies;
    if (pLVar1 == (List_1_MVBody_ *)0x0) goto code_?;
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                         (this->fields).currentIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                        (&VStack_7,(MethodInfo *)0x0);
    if (pIVar2 == (IEventSystemHandler *)0x0) goto code_?;
    uVar8._0_4_ = pVVar6->x;
    uVar8._4_4_ = pVVar6->y;
    (*(code *)pIVar2->klass[1]._0.methods)
              (pIVar2,uVar8,pVVar6->z,pIVar2->klass[1]._0.nestedTypes);
  }
  pLVar1 = (this->fields).Bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,oldindex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (pIVar2 != (IEventSystemHandler *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar9._0_4_ = (this->fields).hidePos.x;
      uVar9._4_4_ = (this->fields).hidePos.y;
      uVar10._0_2_ = pIVar3[2]._0.this_arg.attrs;
      uVar10._2_1_ = pIVar3[2]._0.this_arg.type;
      uVar10._3_1_ = pIVar3[2]._0.this_arg.field_0x7;
      (*(code *)pIVar3[2]._0.this_arg.data)(pIVar2,uVar9,(this->fields).hidePos.z,uVar10);
      pLVar1 = (this->fields).Bodies;
      if (pLVar1 != (List_1_MVBody_ *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,oldindex
                             ,MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            (&VStack_7,(MethodInfo *)0x0);
        if (pIVar2 != (IEventSystemHandler *)0x0) {
          uVar11._0_4_ = pVVar6->x;
          uVar11._4_4_ = pVVar6->y;
          (*(code *)pIVar2->klass[1]._0.methods)
                    (pIVar2,uVar11,pVVar6->z,pIVar2->klass[1]._0.nestedTypes);
          pLVar1 = (this->fields).Bodies;
          if (pLVar1 != (List_1_MVBody_ *)0x0) {
            pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 TargetIndexInp,
                                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                );
            if (pIVar2 != (IEventSystemHandler *)0x0) {
              pIVar3 = pIVar2->klass;
              uVar12._0_4_ = (this->fields).displayPos.x;
              uVar12._4_4_ = (this->fields).displayPos.y;
              uVar13._0_2_ = pIVar3[2]._0.this_arg.attrs;
              uVar13._2_1_ = pIVar3[2]._0.this_arg.type;
              uVar13._3_1_ = pIVar3[2]._0.this_arg.field_0x7;
              (*(code *)pIVar3[2]._0.this_arg.data)
                        (pIVar2,uVar12,(this->fields).displayPos.z,uVar13);
              pLVar1 = (this->fields).Bodies;
              if (pLVar1 != (List_1_MVBody_ *)0x0) {
                pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                     TargetIndexInp,
                                     MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                    );
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                    (&VStack_7,(MethodInfo *)0x0);
                if (pIVar2 != (IEventSystemHandler *)0x0) {
                  uVar14._0_4_ = pVVar6->x;
                  uVar14._4_4_ = pVVar6->y;
                  (*(code *)pIVar2->klass[1]._0.methods)
                            (pIVar2,uVar14,pVVar6->z,pIVar2->klass[1]._0.nestedTypes);
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
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  iVar3 = (this->fields).targetIndex;
  if (iVar3 == -1) {
    return;
  }
  iVar4 = (this->fields).currentIndex;
  if (iVar4 == -1) {
    return;
  }
  uVar5 = iVar3 - iVar4;
  uVar6 = (int)uVar5 >> 0x1f;
  uVar7._0_4_ = (float)(int)(((uVar5 ^ uVar6) - uVar6) + -1) + _UNK_?;
  (this->fields).SuperspeedFactor = (float)uVar7;
  uVar7._0_4_ = (float)uVar7 * (this->fields).baseTimeMultiplier;
  index = AvatarSelectionAnimator_GetNextIndex(this,(MethodInfo *)0x0);
  if ((this->fields).forward == 0) {
    fVar2 = _UNK_?;
  }
  uVar7._4_4_ = (this->fields).time;
  pfVar8 = &(this->fields).timeSlowThreshold;
  if ((*pfVar8 <= uVar7._4_4_ && uVar7._4_4_ != *pfVar8) && (index == (this->fields).targetIndex))
  {
    uVar7._0_4_ = (((this->fields).endmultiplier - (this->fields).addition) * uVar7._4_4_ +
                   (this->fields).addition) * (this->fields).baseTimeMultiplier;
  }
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pLVar10 = (this->fields).Bodies;
  (this->fields).time = fVar9 * (float)uVar7 + uVar7._4_4_;
  if (pLVar10 != (List_1_MVBody_ *)0x0) {
    pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,
                         (this->fields).currentIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    fVar9 = (this->fields).distance.z;
    uVar7._0_4_ = (this->fields).distance.x;
    uVar7._4_4_ = (this->fields).distance.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    VVar12.z = fVar9;
    VVar12.x = (float)(int)uVar7;
    VVar12.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                        ((Vector3 *)&stack0xffffffe8,fVar2,VVar12,(MethodInfo *)0x0);
    this = (AvatarSelectionAnimator *)(this->fields).time;
    puVar14 = &UNK_?;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffe8,*pVVar13,(float)this,(MethodInfo *)0x0);
    fVar15 = (float)puVar14;
    fVar16 = fVar9;
    VVar12 = (Vector3)CONCAT84(uVar17,fVar16);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffdc,VVar12,*pVVar13,(MethodInfo *)0x0);
    if (pIVar11 != (IEventSystemHandler *)0x0) {
      pIVar18 = pIVar11->klass;
      puStack19 = (undefined *)pVVar13->z;
      ppIStack20._0_2_ = pIVar18[2]._0.this_arg.attrs;
      ppIStack20._2_1_ = pIVar18[2]._0.this_arg.type;
      ppIStack20._3_1_ = pIVar18[2]._0.this_arg.field_0x7;
      (*(code *)pIVar18[2]._0.this_arg.data)();
      pLVar10 = (pAVar1->fields).Bodies;
      if (pLVar10 != (List_1_MVBody_ *)0x0) {
        pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,
                             (pAVar1->fields).currentIndex,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffdc,*pVVar13,
                             _UNK_? - (pAVar1->fields).time,(MethodInfo *)0x0);
        if (pIVar11 != (IEventSystemHandler *)0x0) {
          puStack19 = (undefined *)pVVar13->z;
          ppIStack20 = pIVar11->klass[1]._0.nestedTypes;
          (*(code *)pIVar11->klass[1]._0.methods)();
          pLVar10 = (pAVar1->fields).Bodies;
          if (pLVar10 != (List_1_MVBody_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,index,
                       MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
            fVar2 = (pAVar1->fields).displayPos.x;
            fVar21 = (pAVar1->fields).displayPos.y;
            uVar7._0_4_ = (pAVar1->fields).displayPos.z;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                ((Vector3 *)&stack0xffffffe8,3.116331e-29,(pAVar1->fields).distance
                                 ,(MethodInfo *)0x0);
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xffffffe8,*pVVar13,(pAVar1->fields).time,
                                 (MethodInfo *)0x0);
            a.y = fVar21;
            a.x = fVar2;
            a.z = (float)uVar7;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffe8,a,*pVVar13,(MethodInfo *)0x0);
            fVar9 = pVVar13->x;
            this = (AvatarSelectionAnimator *)pVVar13->z;
            puVar14 = &UNK_?;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                                ((Vector3 *)&stack0xffffffe8,3.116331e-29,(pAVar1->fields).distance
                                 ,(MethodInfo *)0x0);
            fVar15 = (float)puVar14;
            piVar22 = (int *)&UNK_?;
            fVar23 = fVar9;
            VVar12 = (Vector3)CONCAT84(uVar17,fVar23);
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xffffffdc,VVar12,*pVVar13,(MethodInfo *)0x0);
            if (piVar22 != (int *)0x0) {
              puStack19 = (undefined *)pVVar13->z;
              ppIStack20 = *(Il2CppClass ***)(*piVar22 + 0x194);
              (**(code **)(*piVar22 + 400))();
              pLVar10 = (pAVar1->fields).Bodies;
              if (pLVar10 != (List_1_MVBody_ *)0x0) {
                pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,
                                     index,
                                     MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                    );
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                    ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&stack0xffffffdc,*pVVar13,(pAVar1->fields).time,
                                     (MethodInfo *)0x0);
                if (pIVar11 != (IEventSystemHandler *)0x0) {
                  puStack19 = (undefined *)pVVar13->z;
                  ppIStack20 = pIVar11->klass[1]._0.nestedTypes;
                  (*(code *)pIVar11->klass[1]._0.methods)();
                  if ((pAVar1->fields).time <= _UNK_?) {
                    return;
                  }
                  pLVar10 = (pAVar1->fields).Bodies;
                  if ((pLVar10 != (List_1_MVBody_ *)0x0) &&
                     (pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                EventSystems::IEventSystemHandler]::
                                List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                           pLVar10,(pAVar1->fields).currentIndex,
                                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                          ), pIVar11 != (IEventSystemHandler *)0x0)) {
                    pIVar18 = pIVar11->klass;
                    puStack19 = (undefined *)(pAVar1->fields).hidePos.z;
                    ppIStack20._0_2_ = pIVar18[2]._0.this_arg.attrs;
                    ppIStack20._2_1_ = pIVar18[2]._0.this_arg.type;
                    ppIStack20._3_1_ = pIVar18[2]._0.this_arg.field_0x7;
                    (*(code *)pIVar18[2]._0.this_arg.data)();
                    pLVar10 = (pAVar1->fields).Bodies;
                    if (pLVar10 != (List_1_MVBody_ *)0x0) {
                      pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                EventSystems::IEventSystemHandler]::
                                List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                           pLVar10,(pAVar1->fields).currentIndex,
                                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                          );
                      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                          ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
                      if (pIVar11 != (IEventSystemHandler *)0x0) {
                        puStack19 = (undefined *)pVVar13->z;
                        ppIStack20 = pIVar11->klass[1]._0.nestedTypes;
                        (*(code *)pIVar11->klass[1]._0.methods)();
                        (pAVar1->fields).time = 0.0;
                        if (index != (pAVar1->fields).targetIndex) {
                          (pAVar1->fields).currentIndex = index;
                          return;
                        }
                        pLVar10 = (pAVar1->fields).Bodies;
                        if ((pLVar10 != (List_1_MVBody_ *)0x0) &&
                           (pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine
                                      ::EventSystems::IEventSystemHandler]::
                                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                  *)pLVar10,index,
                                                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                ), pIVar11 != (IEventSystemHandler *)0x0)) {
                          uVar24 = (pAVar1->fields).displayPos.y;
                          ppIStack20 = (Il2CppClass **)(pAVar1->fields).displayPos.z;
                          puStack19 = (undefined *)uVar24;
                          func_?();
                          pLVar10 = (pAVar1->fields).Bodies;
                          if (pLVar10 != (List_1_MVBody_ *)0x0) {
                            pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine
                                      ::EventSystems::IEventSystemHandler]::
                                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                  *)pLVar10,index,
                                                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                );
                            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                              func_?();
                            }
                            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                      Vector3_get_one((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0)
                            ;
                            if (pIVar11 != (IEventSystemHandler *)0x0) {
                              uVar25 = pVVar13->y;
                              ppIStack20 = (Il2CppClass **)pVVar13->z;
                              puStack19 = (undefined *)uVar25;
                              func_?();
                              (pAVar1->fields).currentIndex = -1;
                              (pAVar1->fields).targetIndex = -1;
                              (pAVar1->fields).SuperspeedFactor = 1.0;
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
  ppIStack20 = (Il2CppClass **)0x0;
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* AvatarSelectionAnimator() */

void Assembly-CSharp.dll::AvatarSelectionAnimator::AvatarSelectionAnimator__ctor
               (AvatarSelectionAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVBody>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVBody>__List__);
  (this->fields).Bodies = (List_1_MVBody_ *)this_00;
  (this->fields).currentIndex = -1;
  (this->fields).targetIndex = -1;
  (this->fields).baseTimeMultiplier = 2.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,8.0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).distance.x = pVVar1->x;
  (this->fields).distance.y = fVar2;
  (this->fields).distance.z = fVar3;
  (this->fields).forward = 1;
  (this->fields).timeSlowThreshold = 0.8;
  (this->fields).endmultiplier = 0.01;
  (this->fields).SuperspeedFactor = 1.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

