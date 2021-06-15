
/* Void Invoke(TextWriter, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+ActionLine::
     StringUtils_ActionLine_Invoke
               (StringUtils_ActionLine *this,TextWriter *textWriter,String *line,MethodInfo *method)

{
  this_00 = (StringUtils_ActionLine *)(this->fields)._.prev;
  if (this_00 != (StringUtils_ActionLine *)0x0) {
    StringUtils_ActionLine_Invoke(this_00,textWriter,line,method);
  }
  this_01 = (this->fields)._._.method;
  pcVar1 = (this->fields)._._.method_ptr;
  pOVar2 = (this->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar3 = func_?(this_01);
  cVar4 = (char)this_01->iflags;
  if (cVar3 == '\0') {
    if (cVar4 == '\x02') {
      (*pcVar1)();
      return;
    }
code_?:
    (*pcVar1)(pOVar2,textWriter,line,this_01);
    return;
  }
  if (cVar4 == '\x02') {
    if (((this_01->flags == 0xffff) ||
        ((pOVar2 != (Object *)0x0 && (((pOVar2->klass->_1).token & 0x100) != 0)))) ||
       ((this->fields)._._.invoke_impl == (void *)0x0)) goto code_?;
    cVar4 = func_?(pOVar2);
    if (cVar4 != '\0') {
      return;
    }
    if (pOVar2 != (Object *)0x0) {
      pMVar5 = this_01;
      cVar4 = func_?();
      pMVar5 = (MethodInfo *)
               mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar5);
      cVar3 = func_?();
      if (cVar4 == '\0') {
        if (cVar3 == '\0') {
          (*(code *)(&(pOVar2->klass->vtable).Equals)[this_01->flags].method)
                    (pOVar2,textWriter,line,
                     (&(pOVar2->klass->vtable).Finalize)[this_01->flags].methodPtr);
          return;
        }
        pIVar6 = (Il2CppClass *)
                  mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                             unaff_retaddr);
        uVar7 = 0;
        pOVar8 = pOVar2->klass;
        uVar9._0_1_ = (pOVar8->_1).rank;
        uVar9._1_1_ = (pOVar8->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pOVar8->interfaceOffsets[uVar7].interfaceType == pIVar6) {
              ppMVar10 = &(&(pOVar2->klass->vtable).Equals)
                          [pOVar8->interfaceOffsets[uVar7].offset + (uint)this_01->flags].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar9);
        }
        ppMVar10 = (MethodInfo **)func_?(pOVar2);
code_?:
        (*(code *)*ppMVar10)(pOVar2,textWriter);
        return;
      }
      uVar11 = (uint)this_01->flags;
      if (cVar3 == '\0') {
        pIVar12 = (&(pOVar2->klass->vtable).Finalize)[uVar11].methodPtr;
      }
      else {
        pOVar8 = pOVar2->klass;
        uVar7 = 0;
        uVar13._0_1_ = (pOVar8->_1).rank;
        uVar13._1_1_ = (pOVar8->_1).minimumAlignment;
        if (uVar13 != 0) {
          do {
            if (pOVar8->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)this_01->name) {
              ppMVar10 = &(&(pOVar2->klass->vtable).Equals)
                          [pOVar8->interfaceOffsets[uVar7].offset + (uint)pMVar5->flags].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar13);
          uVar11 = (uint)pMVar5->flags;
          this_01 = pMVar5;
        }
        pMVar5 = this_01;
        ppMVar10 = (MethodInfo **)func_?(pOVar2,pMVar5->name,uVar11);
code_?:
        pIVar12 = (Il2CppMethodPointer)ppMVar10[1];
        this_01 = pMVar5;
      }
      puVar14 = (undefined4 *)func_?(pIVar12,this_01);
      (*(code *)*puVar14)(pOVar2,textWriter,line,puVar14);
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar2 == (Object *)0x0 || (((pOVar2->klass->_1).token & 0x100) == 0)) &&
           ((this->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar2);
    if (cVar4 != '\0') {
      return;
    }
    pMVar5 = this_01;
    cVar4 = func_?();
    pMVar5 = (MethodInfo *)
             mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar5);
    cVar3 = func_?();
    if (cVar4 == '\0') {
      if (cVar3 == '\0') {
        func_?(this_01->flags,textWriter,line);
        return;
      }
      pIVar6 = (Il2CppClass *)
                mscorlib.dll::System::Collections::Generic::
                KeyValuePair`2[WinningConditionType,System::Object]::
                KeyValuePair_2_WinningConditionType_System_Object__get_Value
                          ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                           unaff_retaddr);
      uVar15 = 0;
      pTVar16 = textWriter->klass;
      uVar7._0_1_ = (pTVar16->_1).rank;
      uVar7._1_1_ = (pTVar16->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pTVar16->interfaceOffsets[uVar15].interfaceType == pIVar6) {
            ppMVar10 = &(&(textWriter->klass->vtable).Equals)
                        [pTVar16->interfaceOffsets[uVar15].offset + (uint)this_01->flags].method;
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar7);
      }
      ppMVar10 = (MethodInfo **)func_?(textWriter);
code_?:
      (*(code *)*ppMVar10)(textWriter);
      return;
    }
    uVar11 = (uint)this_01->flags;
    if (cVar3 == '\0') {
      pIVar12 = (&(textWriter->klass->vtable).Finalize)[uVar11].methodPtr;
    }
    else {
      pTVar16 = textWriter->klass;
      uVar7 = 0;
      uVar15._0_1_ = (pTVar16->_1).rank;
      uVar15._1_1_ = (pTVar16->_1).minimumAlignment;
      pMVar17 = this_01;
      if (uVar15 != 0) {
        do {
          if (pTVar16->interfaceOffsets[uVar7].interfaceType == (Il2CppClass *)this_01->name) {
            pIVar12 = (&(textWriter->klass->vtable).Finalize)
                      [(uint)pMVar5->flags + textWriter->klass->interfaceOffsets[uVar7].offset].
                      methodPtr;
            this_01 = pMVar5;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar15);
        uVar11 = (uint)pMVar5->flags;
        pMVar17 = pMVar5;
      }
      iVar18 = func_?(textWriter,(Il2CppClass *)this_01->name,uVar11);
      pIVar12 = *(Il2CppMethodPointer *)(iVar18 + 4);
      this_01 = pMVar17;
    }
code_?:
    puVar14 = (undefined4 *)func_?(pIVar12,this_01);
    (*(code *)*puVar14)(textWriter,line,puVar14);
    return;
  }
  (*pcVar1)(textWriter,line,this_01);
  return;
}

