
/* Object Invoke(Object, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MethodCall`2[System::Object,System::
         Object]::MethodCall_2_System_Object_System_Object__Invoke
                   (MethodCall_2_System_Object_System_Object_ *this,Object *target,
                   Object__Array *args,MethodInfo *method)

{
  this_00 = (MethodCall_2_System_Object_System_Object_ *)(this->fields)._.prev;
  if (this_00 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
    MethodCall_2_System_Object_System_Object__Invoke(this_00,target,args,method);
  }
  this_01 = (this->fields)._._.method;
  pOVar1 = (this->fields)._._.m_target;
  pOVar2 = pOVar1;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar3 = func_?(this_01);
  cVar4 = (char)this_01->iflags;
  if (cVar3 == '\0') {
    if (cVar4 == '\x02') {
      pOVar1 = (Object *)(*(code *)this_01)();
      return pOVar1;
    }
code_?:
    pOVar1 = (Object *)(*(code *)this_01)(pOVar1,target,args);
    return pOVar1;
  }
  if (cVar4 == '\x02') {
    if (((this_01->flags == 0xffff) ||
        ((pOVar1 != (Object *)0x0 && (((pOVar1->klass->_1).token & 0x100) != 0)))) ||
       ((this->fields)._._.invoke_impl == (void *)0x0)) goto code_?;
    cVar4 = func_?(pOVar1);
    if (cVar4 != '\0') {
      return (Object *)0x0;
    }
    if (pOVar1 != (Object *)0x0) {
      pMVar5 = this_01;
      cVar4 = func_?();
      pOVar1 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar5);
      cVar3 = func_?(pOVar1);
      if (cVar4 == '\0') {
        if (cVar3 == '\0') {
          pOVar1 = (Object *)func_?(this_01->flags,pOVar2,target,args);
          return pOVar1;
        }
        piVar6 = (int *)&UNK_?;
        pOVar1 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                            unaff_retaddr);
        uVar7 = 0;
        uVar8 = *(ushort *)(*piVar6 + 0xb6);
        if (uVar8 != 0) {
          iVar9 = *(int *)(*piVar6 + 0x58);
          do {
            if (*(Object **)(iVar9 + (uint)uVar7 * 8) == pOVar1) {
              puVar10 = (undefined4 *)
                       (*piVar6 + 0xc0 +
                       (*(int *)(iVar9 + 4 + (uint)uVar7 * 8) + (uint)this_01->flags) * 8);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        puVar10 = (undefined4 *)func_?(piVar6);
code_?:
        pOVar1 = (Object *)(*(code *)*puVar10)(piVar6,target);
        return pOVar1;
      }
      uVar11 = (uint)this_01->flags;
      if (cVar3 == '\0') {
        pIVar12 = (&(pOVar2->klass->vtable).Finalize)[uVar11].methodPtr;
      }
      else {
        pOVar13 = pOVar2->klass;
        uVar7 = 0;
        uVar8._0_1_ = (pOVar13->_1).rank;
        uVar8._1_1_ = (pOVar13->_1).minimumAlignment;
        if (uVar8 != 0) {
          do {
            if (pOVar13->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)this_01->name) {
              ppMVar14 = &(&(pOVar2->klass->vtable).Equals)
                         [pOVar13->interfaceOffsets[uVar7].offset + (uint)this_01->flags].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
          uVar11 = (uint)this_01->flags;
        }
        ppMVar14 = (MethodInfo **)func_?(pOVar2,this_01->name,uVar11);
code_?:
        pIVar12 = (Il2CppMethodPointer)ppMVar14[1];
      }
      puVar10 = (undefined4 *)func_?(pIVar12,this_01);
      pOVar1 = (Object *)(*(code *)*puVar10)(pOVar2,target,args,puVar10);
      return pOVar1;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar1 == (Object *)0x0 || (((pOVar1->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar1);
    if (cVar4 != '\0') {
      return (Object *)0x0;
    }
    pMVar5 = this_01;
    cVar4 = func_?();
    pOVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar5);
    cVar3 = func_?(pOVar1);
    if (cVar4 != '\0') {
      if (cVar3 != '\0') {
        pOVar1 = (Object *)func_?();
        return pOVar1;
      }
      pOVar1 = (Object *)func_?(this_01,target,args);
      return pOVar1;
    }
    if (cVar3 != '\0') {
      pOVar1 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      pOVar1 = (Object *)func_?(this_01->flags,pOVar1,target);
      return pOVar1;
    }
    pOVar1 = (Object *)func_?(this_01->flags,target,args);
    return pOVar1;
  }
  pOVar1 = (Object *)(*(code *)this_01)(target,args);
  return pOVar1;
}

