
/* Int32 CompareTo(Priority) */

int32_t Assembly-CSharp.dll::RTG::Priority::Priority_CompareTo
                  (Priority *this,Priority *other,MethodInfo *method)

{
  if (other != (Priority *)0x0) {
    iVar1 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                      ((Int32 *)&this->fields,(other->fields)._priority,(MethodInfo *)0x0);
    return iVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_Equals
               (Priority *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Priority);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = obj->klass;
    if (((TypeInfo__RTG__Priority->_1).naturalAligment <= (pOVar1->_1).naturalAligment) &&
       ((pOVar1->_1).typeHierarchy[(TypeInfo__RTG__Priority->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__RTG__Priority)) {
      if (((TypeInfo__RTG__Priority->_1).naturalAligment <= (pOVar1->_1).naturalAligment) &&
         ((pOVar1->_1).typeHierarchy[(TypeInfo__RTG__Priority->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__RTG__Priority)) {
        return (Object__Class *)(this->fields)._priority == obj[1].klass;
      }
      func_?(obj,TypeInfo__RTG__Priority);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Void MakeHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::Priority::Priority_MakeHigherThan
               (Priority *this,Priority *priority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (priority != (Priority *)0x0) {
    (this->fields)._priority = (priority->fields)._priority + -1;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void MakeHighest() */

void Assembly-CSharp.dll::RTG::Priority::Priority_MakeHighest(Priority *this,MethodInfo *method)

{
  (this->fields)._priority = -0x80000000;
  return;
}


/* Void MakeLowerThan(Priority) */

void Assembly-CSharp.dll::RTG::Priority::Priority_MakeLowerThan
               (Priority *this,Priority *priority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (priority != (Priority *)0x0) {
    (this->fields)._priority = (priority->fields)._priority + 1;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void MakeLowest() */

void Assembly-CSharp.dll::RTG::Priority::Priority_MakeLowest(Priority *this,MethodInfo *method)

{
  (this->fields)._priority = 0x7fffffff;
  return;
}


/* Boolean op_Equality(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_Equality
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority == (secondPriority->fields)._priority;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean op_GreaterThan(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_GreaterThan
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority < (secondPriority->fields)._priority;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean op_GreaterThanOrEqual(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_GreaterThanOrEqual
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority <= (secondPriority->fields)._priority;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean op_Inequality(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_Inequality
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority != (secondPriority->fields)._priority;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean op_LessThan(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_LessThan
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (secondPriority->fields)._priority < (firstPriority->fields)._priority;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean op_LessThanOrEqual(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_LessThanOrEqual
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (secondPriority->fields)._priority <= (firstPriority->fields)._priority;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

