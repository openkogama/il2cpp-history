
/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerPlayerList::
     FirstTimeActivatablePointerPlayerList_get_CanShow
               (FirstTimeActivatablePointerPlayerList *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 != (MVAvatar *)0x0) {
    pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar5,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    if (pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      iVar7 = MVPlayerContainer::MVPlayerContainer_get_Count
                        ((MVPlayerContainer *)pMVar6,(MethodInfo *)0x0);
      if ((this->fields).playersRequiredForShowingPlayerList <= iVar7) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar5 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar5 == (MVAvatar *)0x0) ||
            (pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar5,(MethodInfo *)0x0),
            pMVar6 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
           (this_00 = MVPlayerContainer::MVPlayerContainer_get_Values
                                ((MVPlayerContainer *)pMVar6,method_00),
           this_00 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffffb0,
                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   this_00,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                  );
        uStack_1 = 0;
        do {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            iVar9 = 0x72;
            goto code_?;
          }
          this_01 = (MVPlayer *)func_?();
          if (this_01 == (MVPlayer *)0x0) goto code_?;
          bVar10 = MVPlayer::MVPlayer_get_IsTourist(this_01,(MethodInfo *)0x0);
        } while (bVar10 != 0);
        bStack_4 = FirstTimeActivatablePopupPressKeyToSkip::
                    FirstTimeActivatablePopupPressKeyToSkip_get_CanShow
                              ((FirstTimeActivatablePopupPressKeyToSkip *)this,(MethodInfo *)0x0);
        iVar9 = 0x74;
code_?:
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar9 == 0x74) {
          *unaff_FS_OFFSET = uStack_3;
          return bStack_4;
        }
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}

