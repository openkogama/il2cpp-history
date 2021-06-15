
/* IAsyncResult BeginInvoke(Boolean, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::MVNetworkGame+OnMarketPlaceActionCompleteDelegate::
MVNetworkGame_OnMarketPlaceActionCompleteDelegate_BeginInvoke
          (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *this,bool success,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Boolean,&success);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}


/* Void Invoke(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OnMarketPlaceActionCompleteDelegate::
     MVNetworkGame_OnMarketPlaceActionCompleteDelegate_Invoke
               (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *this,bool success,
               MethodInfo *method)

{
  this_00 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)(this->fields)._.prev;
  if (this_00 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
    MVNetworkGame_OnMarketPlaceActionCompleteDelegate_Invoke(this_00,success,method);
  }
  this_01 = (this->fields)._._.method;
  pMVar1 = (this->fields)._._.method_ptr;
  pOVar2 = (this->fields)._._.m_target;
  pOVar3 = pOVar2;
  pMVar4 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\x01') {
      (*(code *)pMVar1)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar2);
    if (cVar5 != '\0') {
      return;
    }
    if (pOVar2 == (Object *)0x0) {
      (*(code *)pMVar1)(_success);
      return;
    }
    method_00 = this_01;
    cVar5 = func_?();
    pOVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar7 = func_?(pOVar6);
    if (cVar5 == '\0') {
      if (cVar7 != '\0') {
        pOVar3 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar1);
        func_?(this_01->flags,pOVar3,pOVar2,_success);
        return;
      }
      func_?(this_01->flags,pOVar2,_success);
      return;
    }
    uVar8 = (uint)this_01->flags;
    if (cVar7 == '\0') {
      pIVar9 = (&(pOVar2->klass->vtable).Finalize)[uVar8].methodPtr;
    }
    else {
      pOVar10 = pOVar2->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pOVar10->_1).rank;
      uVar12._1_1_ = (pOVar10->_1).minimumAlignment;
      pMVar1 = this_01;
      if (uVar12 != 0) {
        do {
          if (pOVar10->interfaceOffsets[uVar11].interfaceType == (Il2CppClass *)this_01->name) {
            ppMVar13 = &(&(pOVar3->klass->vtable).Equals)
                       [(uint)pMVar4->flags + pOVar3->klass->interfaceOffsets[uVar11].offset].method
            ;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
        uVar8 = (uint)pMVar4->flags;
        pMVar1 = pMVar4;
        pOVar2 = pOVar3;
      }
      pOVar3 = pOVar2;
      pMVar4 = pMVar1;
      ppMVar13 = (MethodInfo **)func_?(pOVar3,(Il2CppClass *)this_01->name,uVar8);
code_?:
      pIVar9 = (Il2CppMethodPointer)ppMVar13[1];
      pOVar2 = pOVar3;
      this_01 = pMVar4;
    }
    puVar14 = (undefined4 *)func_?(pIVar9,this_01);
    (*(code *)*puVar14)(pOVar2,_success,puVar14);
    return;
  }
  (*(code *)pMVar1)(pOVar2,_success,this_01);
  return;
}

