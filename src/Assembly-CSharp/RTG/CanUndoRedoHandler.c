
/* IAsyncResult BeginInvoke(UndoRedoOpType, YesNoAnswer, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::CanUndoRedoHandler::CanUndoRedoHandler_BeginInvoke
          (CanUndoRedoHandler *this,UndoRedoOpType__Enum undoRedoOpType,YesNoAnswer *answer,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  aUStackX_10[0] = undoRedoOpType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__UndoRedoOpType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__RTG__UndoRedoOpType,aUStackX_10);
  pYStack_3 = answer;
  pIVar4 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar4;
}

