#include "DateWindow.h"

void Cinema::DateWindow::CalculateSelectedDate(int & year, int & month)
{
	month = presentDay->tm_mon + 1 + monthIndex;
	year = presentDay->tm_year + 1900;

	while ((month) > 12)
	{
		year++;
		month = month - 12;
	}
}

void Cinema::DateWindow::unblockAllDays()
{
	this->Day1->Enabled = true;
	this->Day2->Enabled = true;
	this->Day3->Enabled = true;
	this->Day4->Enabled = true;
	this->Day5->Enabled = true;
	this->Day6->Enabled = true;
	this->Day7->Enabled = true;
	this->Day8->Enabled = true;
	this->Day9->Enabled = true;
	this->Day10->Enabled = true;
	this->Day11->Enabled = true;
	this->Day12->Enabled = true;
	this->Day13->Enabled = true;
	this->Day14->Enabled = true;
	this->Day15->Enabled = true;
	this->Day16->Enabled = true;
	this->Day17->Enabled = true;
	this->Day18->Enabled = true;
	this->Day19->Enabled = true;
	this->Day20->Enabled = true;
	this->Day21->Enabled = true;
	this->Day22->Enabled = true;
	this->Day23->Enabled = true;
	this->Day24->Enabled = true;
	this->Day25->Enabled = true;
	this->Day26->Enabled = true;
	this->Day27->Enabled = true;
	this->Day28->Enabled = true;
	this->Day29->Enabled = true;
	this->Day30->Enabled = true;
	this->Day31->Enabled = true;
}

void Cinema::DateWindow::blockPastDays(std::tm* now)
{
	if (now->tm_mday > 1)
	{
		this->Day1->Enabled = false;
		if (now->tm_mday > 2)
		{
			this->Day2->Enabled = false;
			if (now->tm_mday > 3)
			{
				this->Day3->Enabled = false;
				if (now->tm_mday > 4)
				{
					this->Day4->Enabled = false;
					if (now->tm_mday > 5)
					{
						this->Day5->Enabled = false;
						if (now->tm_mday > 6)
						{
							this->Day6->Enabled = false;
							if (now->tm_mday > 7)
							{
								this->Day7->Enabled = false;
								if (now->tm_mday > 8)
								{
									this->Day8->Enabled = false;
									if (now->tm_mday > 9)
									{
										this->Day9->Enabled = false;
										if (now->tm_mday > 10)
										{
											this->Day10->Enabled = false;
											if (now->tm_mday > 11)
											{
												this->Day11->Enabled = false;
												if (now->tm_mday > 12)
												{
													this->Day12->Enabled = false;
													if (now->tm_mday > 13)
													{
														this->Day13->Enabled = false;
														if (now->tm_mday > 14)
														{
															this->Day14->Enabled = false;
															if (now->tm_mday > 15)
															{
																this->Day15->Enabled = false;
																if (now->tm_mday > 16)
																{
																	this->Day16->Enabled = false;
																	if (now->tm_mday > 17)
																	{
																		this->Day17->Enabled = false;
																		if (now->tm_mday > 18)
																		{
																			this->Day18->Enabled = false;
																			if (now->tm_mday > 19)
																			{
																				this->Day19->Enabled = false;
																				if (now->tm_mday > 20)
																				{
																					this->Day20->Enabled = false;
																					if (now->tm_mday > 21)
																					{
																						this->Day21->Enabled = false;
																						if (now->tm_mday > 22)
																						{
																							this->Day22->Enabled = false;
																							if (now->tm_mday > 23)
																							{
																								this->Day23->Enabled = false;
																								if (now->tm_mday > 24)
																								{
																									this->Day24->Enabled = false;
																									if (now->tm_mday > 25)
																									{
																										this->Day25->Enabled = false;
																										if (now->tm_mday > 26)
																										{
																											this->Day26->Enabled = false;
																											if (now->tm_mday > 27)
																											{
																												this->Day27->Enabled = false;
																												if (now->tm_mday > 28)
																												{
																													this->Day28->Enabled = false;
																													if (now->tm_mday > 29)
																													{
																														this->Day29->Enabled = false;
																														if (now->tm_mday > 30)
																														{
																															this->Day30->Enabled = false;
																															if (now->tm_mday > 31)
																															{
																																this->Day31->Enabled = false;
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
			}
		}
	}
}
