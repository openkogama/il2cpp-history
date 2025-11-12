
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas_ToString
                   (HighScoreDatas *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).highScores;
  uVar2 = 0;
  if (pLVar1 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    lVar3 = 0x20;
    pSVar4 = ::StringLiteral__;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return pSVar4;
      }
      aiStackX_8[0] = (this->fields).topRank + uVar2;
      arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
      pSVar5 = StringLiteral__0____1__u000A;
      pLVar1 = (this->fields).highScores;
      if (pLVar1 == (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar6)();
        return pSVar4;
      }
      pHVar7 = (pLVar1->fields)._items;
      if (pHVar7 == (HighScoreEntry__Array *)0x0) break;
      if ((uint)pHVar7->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar6)();
        return pSVar4;
      }
      PStack_8._arg0 = (Object *)0x0;
      PStack_8._arg1 = (Object *)0x0;
      PStack_8._arg2 = (Object *)0x0;
      PStack_8._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_8,arg0,*(Object **)((longlong)pHVar7->vector + lVar3 + -0x20),
                 (MethodInfo *)0x0);
      PStack_9._arg0 = PStack_8._arg0;
      PStack_9._arg1 = PStack_8._arg1;
      PStack_9._arg2 = PStack_8._arg2;
      PStack_9._args = PStack_8._args;
      pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar5,&PStack_9,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,pSVar5,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      pLVar1 = (this->fields).highScores;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0);
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* HighScoreDatas() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas__ctor
               (HighScoreDatas *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).highScores = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* HighScoreDatas(Int32, List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas__ctor_1
               (HighScoreDatas *this,int32_t topRank,
               List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *highScores,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
            );
  iVar1 = iRam_?;
  (this->fields).highScores = this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).topRank = topRank;
  (this->fields).highScores = highScores;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

