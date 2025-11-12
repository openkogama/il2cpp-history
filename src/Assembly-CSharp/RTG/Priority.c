
/* Int32 CompareTo(Priority) */

int32_t Assembly-CSharp.dll::RTG::Priority::Priority_CompareTo
                  (Priority *this,Priority *other,MethodInfo *method)

{
  if (other == (Priority *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar3 = (other->fields)._priority;
  if (iVar3 <= (this->fields)._priority) {
    return (int32_t)(iVar3 < (this->fields)._priority);
  }
  return -1;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_Equals
               (Priority *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Priority);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = obj->klass;
    bVar2 = (TypeInfo__RTG__Priority->_1).naturalAligment;
    if ((bVar2 <= (pOVar1->_1).naturalAligment) &&
       ((pOVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo__RTG__Priority))
    {
      bVar2 = (TypeInfo__RTG__Priority->_1).naturalAligment;
      if ((bVar2 <= (pOVar1->_1).naturalAligment) &&
         ((pOVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo__RTG__Priority
         )) {
        return (this->fields)._priority == *(int *)&obj[1].klass;
      }
      FUN_?(obj);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 0;
}


/* Void MakeHigherThan(Priority) */

void Assembly-CSharp.dll::RTG::Priority::Priority_MakeHigherThan
               (Priority *this,Priority *priority,MethodInfo *method)

{
  if (priority != (Priority *)0x0) {
    (this->fields)._priority = (priority->fields)._priority + -1;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void MakeLowerThan(Priority) */

void Assembly-CSharp.dll::RTG::Priority::Priority_MakeLowerThan
               (Priority *this,Priority *priority,MethodInfo *method)

{
  if (priority != (Priority *)0x0) {
    (this->fields)._priority = (priority->fields)._priority + 1;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority == (secondPriority->fields)._priority;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean op_GreaterThan(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_GreaterThan
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority < (secondPriority->fields)._priority;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean op_GreaterThanOrEqual(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_GreaterThanOrEqual
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority <= (secondPriority->fields)._priority;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean op_Inequality(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_Inequality
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (firstPriority->fields)._priority != (secondPriority->fields)._priority;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean op_LessThan(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_LessThan
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (secondPriority->fields)._priority < (firstPriority->fields)._priority;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean op_LessThanOrEqual(Priority, Priority) */

bool Assembly-CSharp.dll::RTG::Priority::Priority_op_LessThanOrEqual
               (Priority *firstPriority,Priority *secondPriority,MethodInfo *method)

{
  if ((firstPriority != (Priority *)0x0) && (secondPriority != (Priority *)0x0)) {
    return (secondPriority->fields)._priority <= (firstPriority->fields)._priority;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

