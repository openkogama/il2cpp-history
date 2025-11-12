
/* Image GetBoostVisualization(BoostType) */

Image * Assembly-CSharp.dll::BoostImageController::BoostImageController_GetBoostVisualization
                  (BoostImageController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boost_type__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boosterImages;
  uVar2 = 0;
  if (pLVar1 == (List_1_BoostImageController_BoosterImageDef_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pIVar4 = (Image *)(*pcVar3)();
    return pIVar4;
  }
  lVar5 = 0x20;
  do {
    if ((pLVar1->fields)._size <= (int)uVar2) {
      EStack_6.klass = (Enum__Class *)TypeInfo__BoostType;
      EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
      BStack_7 = type;
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Boost_type__,pSVar8,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar8,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_image_found_for_boost_type_,(MethodInfo *)0x0);
      return (Image *)0x0;
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pIVar4 = (Image *)(*pcVar3)();
      return pIVar4;
    }
    pBVar9 = (pLVar1->fields)._items;
    if (pBVar9 == (BoostImageController_BoosterImageDef__Array *)0x0) goto code_?;
    if ((uint)pBVar9->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pIVar4 = (Image *)(*pcVar3)();
      return pIVar4;
    }
    if (*(BoostType__Enum *)
         ((longlong)&((BoostImageController_BoosterImageDef__Array *)(pBVar9->vector + -2))->klass +
         lVar5) == type) {
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      if (pBVar9 != (BoostImageController_BoosterImageDef__Array *)0x0) {
        if (uVar2 < (uint)pBVar9->max_length) {
          return pBVar9->vector[(int)uVar2].image;
        }
        goto code_?;
      }
      goto code_?;
    }
    uVar2 = uVar2 + 1;
    lVar5 = lVar5 + 0x10;
  } while( true );
}

